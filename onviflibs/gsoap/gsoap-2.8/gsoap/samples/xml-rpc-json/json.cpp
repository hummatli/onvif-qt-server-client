/*
	json.cpp

	JSON C++ support & stream JSON from/to XML-RPC

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2011, Robert van Engelen, Genivia, Inc. All Rights Reserved.
This software is released under one of the following two licenses:
GPL or Genivia's license for commercial use.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapH.h"
#include "json.h"

static int jsstrout(struct soap *soap, const char *s)
{ int c;
  char buf[8];
  if (soap_send_raw(soap, "\"", 1))
    return soap->error;
  while ((c = *s++))
  { switch (c)
    { case '"':
      case '\\':
        buf[0] = '\\';
        buf[1]  = c;
        if (soap_send_raw(soap, buf, 2))
          return soap->error;
        break;
      default:
        if (c < 32 && c > 0)
        { switch (c)
          { case '\b':
              c = 'b';
              break;
            case '\f':
              c = 'f';
              break;
            case '\n':
              c = 'n';
              break;
            case '\r':
              c = 'r';
              break;
            case '\t':
              c = 't';
              break;
          }
          if (c > 32)
          { buf[0] = '\\';
            buf[1]  = c;
            if (soap_send_raw(soap, buf, 2))
              return soap->error;
          }
          else
          { sprintf(buf, "\\u%4x", c);
            if (soap_send_raw(soap, buf, 6))
              return soap->error;
          }
        }
        else if ((c & 0x80) && (soap->omode & SOAP_ENC_LATIN) && (soap->omode & SOAP_C_UTFSTRING)) // utf8 to ISO 8859-1
        { if (c < 0xE0 && (c & 0x1F) <= 0x03)
            buf[0] = ((c & 0x1F) << 6) | (*s++ & 0x3F);
          else
            buf[0] = '?';
          if (soap_send_raw(soap, buf, 1))
            return soap->error;
        }
        else if ((c & 0x80) && !(soap->omode & SOAP_ENC_LATIN) && !(soap->omode & SOAP_C_UTFSTRING)) // ISO 8859-1 to utf8
        { buf[0] = (char)(0xC0 | ((c >> 6) & 0x1F));
          buf[1] = (char)(0x80 | (c & 0x3F));
          if (soap_send_raw(soap, buf, 2))
            return soap->error;
        }
        else
        { buf[0] = c;
          if (soap_send_raw(soap, buf, 1))
            return soap->error;
        }
    }
  }
  return soap_send_raw(soap, "\"", 1);
}

int json_send(struct soap *soap, const struct value& v)
{ bool f;
  switch (v.__type)
  { case SOAP_TYPE__array: 
      if (soap_send_raw(soap, "["/*]*/, 1))
        return soap->error;
      f = false;
      for (_array::iterator i = ((struct _array)v).begin(); i != ((struct _array)v).end(); ++i, f = true)
      { if (f)
          if (soap_send_raw(soap, ", ", 2))
            return soap->error;
        if (json_send(soap, (*i)))
          return soap->error;
      }
      return soap_send_raw(soap, /*[*/"]", 1);
    case SOAP_TYPE__boolean: 
      if (v.is_true())
        return soap_send_raw(soap, "true", 4);
      return soap_send_raw(soap, "false", 5);
    case SOAP_TYPE__double: 
      return soap_send(soap, soap_double2s(soap, (double)v));
    case SOAP_TYPE__i4: 
    case SOAP_TYPE__int: 
      return soap_send(soap, soap_int2s(soap, (int)v));
    case SOAP_TYPE__string: 
    case SOAP_TYPE__dateTime_DOTiso8601: 
    case SOAP_TYPE__base64: 
      return jsstrout(soap, (_string)v);
    case SOAP_TYPE__struct: 
      if (soap_send_raw(soap, "{"/*}*/, 1))
        return soap->error;
      f = false;
      for (_struct::iterator i = ((struct _struct)v).begin(); i != ((struct _struct)v).end(); ++i, f = true)
      { if (f)
          if (soap_send_raw(soap, ", ", 2))
            return soap->error;
        if (jsstrout(soap, i.index())
         || soap_send_raw(soap, ": ", 2)
         || json_send(soap, (*i)))
          return soap->error;
      }
      return soap_send_raw(soap, /*{*/"}", 1);
    default:
      if (v.__any)
        return jsstrout(soap, (_string)v.__any);
      return soap_send_raw(soap, "null", 4);
  }
  return SOAP_OK;
}

std::ostream& operator<<(std::ostream& o, const struct value& v)
{ std::ostream *os = v.soap->os;
  v.soap->os = &o;
  json_send(v.soap, v);
  v.soap->os = os;
  return o;
}

int json_recv(struct soap *soap, struct value& v)
{ v.__type = 0;
  v.ref = NULL;
  v.__any = NULL;
  v.soap = soap;
  soap_wchar c;
  while ((c = soap_getchar(soap)) > 0 && c <= 32)
    ;
  switch (c)
  { case EOF:
      return soap->error = SOAP_EOF;
    case '{':
    { value s(soap);
      value u(soap);
      for (;;)
      { if (json_recv(soap, s))
          return soap->error;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (json_recv(soap, u))
          return soap->error;
        v[(const char*)s] = u;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (c == '}')
          break;
        if ((int)c == EOF)
          return soap->error = SOAP_EOF;
      }
      return SOAP_OK;
    }
    case '[':
    { value u(soap);
      for (int i = 0; ; i++)
      { if (json_recv(soap, u))
          return soap->error;
        v[i] = u;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (c == ']')
          break;
        if ((int)c == EOF)
          return soap->error = SOAP_EOF;
      }
      return SOAP_OK;
    }
    case '"':
      soap->labidx = 0;
      for (;;)
      { char *s;
        const char *t = NULL;
        register size_t k;
        if (soap_append_lab(soap, NULL, 0))
          return soap->error = SOAP_EOM;
        s = soap->labbuf + soap->labidx;
        k = soap->lablen - soap->labidx;
        soap->labidx = soap->lablen;
        while (k--)
        { if (t)
          { *s++ = *t++;
            if (!*t)
              t = NULL;
          }
          else
          { c = soap_getchar(soap);
            switch (c)
            { case EOF:
                return soap->error = SOAP_EOF;
              case '"':
                *s = '\0';
                v = soap_strdup(soap, soap->labbuf);
                return SOAP_OK;
              case '\\':
                c = soap_getchar(soap);
                switch (c)
                { case EOF:
                    return soap->error = SOAP_EOF;
                  case 'b':
                    c = 8;
                    break;               
                  case 'f':
                    c = 12;
                    break;               
                  case 'n':
                    c = 10;
                    break;               
                  case 'r':
                    c = 13;
                    break;               
                  case 't':
                    c = 9;
                    break;               
                  case 'u':
                    // hex to utf8 conversion
                    char *h = soap->tmpbuf;
                    for (int i = 0; i < 4; i++)
                    { if ((c = soap_getchar(soap)) == EOF)
                        return soap->error = SOAP_EOF;
                      h[i] = c;
                    }
                    wchar_t wc[2] = { soap_strtol(h, NULL, 16), 0 };
                    t = soap_wchar2s(soap, wc);
                    c = *t++;
                    if (!*t)
                      t = NULL;
                }
                *s++ = c;
                break;
              default:
                if ((c & 0x80) && (soap->imode & SOAP_ENC_LATIN) && (soap->imode & SOAP_C_UTFSTRING)) // ISO 8859-1 to utf8
                { *s++ = (char)(0xC0 | ((c >> 6) & 0x1F));
                  soap->tmpbuf[0] = (0x80 | (c & 0x3F));
                  soap->tmpbuf[1] = '\0';
                  t = soap->tmpbuf;
                }
                else if ((c & 0x80) && !(soap->imode & SOAP_ENC_LATIN) && !(soap->imode & SOAP_C_UTFSTRING)) // utf8 to ISO 8859-1
                { soap_wchar c1 = soap_getchar(soap);
                  if (c1 == SOAP_EOF)
                    return soap->error = SOAP_EOF;
                  if (c < 0xE0 && (c & 0x1F) <= 0x03)
                    *s++ = ((c & 0x1F) << 6) | (c1 & 0x3F);
                  else
                    *s++ = '?';
                }
                else
                  *s++ = c;
            }
          }
        }
      }
    default: // number, true, false, null
    { char *s = soap->tmpbuf;
      do
      { *s++ = c;
        c = soap_getchar(soap);
      } while ((isalnum((int)c) || (int)c == '.' || (int)c == '+' || (int)c == '-') && s - soap->tmpbuf < (int)sizeof(soap->tmpbuf));
      *s = '\0';
      soap_unget(soap, c);
      if (soap->tmpbuf[0] == '-' || isdigit(soap->tmpbuf[0]))
      { double n;
        soap_s2double(soap, soap->tmpbuf, &n);
        if (n == (int)n)
          v = (int)n;
        else
          v = n;
      }
      else if (!strcmp(soap->tmpbuf, "true"))
        v = true;
      else if (!strcmp(soap->tmpbuf, "false"))
        v = false;
      return SOAP_OK;
    }
  }
}

std::istream& operator>>(std::istream& i, struct value& v)
{ if (!v.soap)
    v.soap = soap_new();
  std::istream *is = v.soap->is;
  v.soap->is = &i;
  json_recv(v.soap, v);
  v.soap->is = is;
  return i;
}

int json_call(struct soap *soap, const char *endpoint, const struct value& in, struct value& out)
{ soap->http_content = "application/json; charset=utf-8";
  if (soap_begin_count(soap)
   || ((soap->mode & SOAP_IO_LENGTH) && json_send(soap, in))
   || soap_end_count(soap)
   || soap_connect_command(soap, SOAP_POST_FILE, endpoint, NULL)
   || json_send(soap, in)
   || soap_end_send(soap)
   || soap_begin_recv(soap)
   || json_recv(soap, out)
   || soap_end_recv(soap))
    return soap_closesock(soap);
  return SOAP_OK;
}
