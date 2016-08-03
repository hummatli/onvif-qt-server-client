/*
	json_c.c

	Stream JSON from/to XML-RPC values
	Robert van Engelen with C mods by David Butler

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2012, Robert van Engelen, Genivia, Inc. All Rights Reserved.
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
#include "json_c.h"

_boolean False = 0, True = 1; /* so we can take the address of these consts */

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
        buf[1] = c;
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
            buf[1] = c;
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

int json_send(struct soap *soap, const struct value *v)
{ _boolean f; int i;
  switch (v->__type)
  { case SOAP_TYPE__array: 
      if (soap_send_raw(soap, "["/*]*/, 1))
        return soap->error;
      f = False;
      for (i = 0; i < ((struct _array*)v->ref)->data.__size; i++, f = True)
      { if (f)
	  if (soap_send_raw(soap, ",", 1))
            return soap->error;
	if (json_send(soap, (((struct _array*)v->ref)->data.value) + i))
          return soap->error;
      }
      return soap_send_raw(soap, /*[*/"]", 1);
    case SOAP_TYPE__boolean: 
      if (*(_boolean*)v->ref == True)
        return soap_send_raw(soap, "true", 4);
      return soap_send_raw(soap, "false", 5);
    case SOAP_TYPE__double: 
      return soap_send(soap, soap_double2s(soap, *(double*)v->ref));
    case SOAP_TYPE__i4: 
    case SOAP_TYPE__int: 
      return soap_send(soap, soap_int2s(soap, *(int*)v->ref));
    case SOAP_TYPE__string: 
    case SOAP_TYPE__dateTime_DOTiso8601: 
    case SOAP_TYPE__base64: 
      return jsstrout(soap, (char*)v->ref);
    case SOAP_TYPE__struct: 
      if (soap_send_raw(soap, "{"/*}*/, 1))
        return soap->error;
      f = False;
      for (i = 0; i < ((struct _struct*)v->ref)->__size; i++, f = True)
      { if (f)
          if (soap_send_raw(soap, ",", 1))
            return soap->error;
	if (jsstrout(soap, (((struct _struct*)v->ref)->member + i)->name)
         || soap_send_raw(soap, ":", 1)
	 || json_send(soap, &(((struct _struct*)v->ref)->member + i)->value))
          return soap->error;
      }
      return soap_send_raw(soap, /*{*/"}", 1);
    default:
      if (v->__any)
        return jsstrout(soap, v->__any);
      return soap_send_raw(soap, "null", 4);
  }
  return SOAP_OK;
}

int json_recv(struct soap *soap, struct value *v)
{ soap_wchar c;
  v->__type = 0;
  v->ref = NULL;
  v->__any = NULL;
  v->soap = soap;
  while ((c = soap_getchar(soap)) > 0 && c <= 32)
    ;
  switch (c)
  { case EOF:
      return soap->error = SOAP_EOF;
    case '{'/*}*/:
    { struct value *s;
      struct member *m;
      if (!(v->ref = soap_malloc(soap, sizeof(struct _struct))))
        return soap->error = SOAP_EOM;
      v->__type = SOAP_TYPE__struct;
      ((struct _struct*)v->ref)->soap = soap;
      ((struct _struct*)v->ref)->__size = 0;
      ((struct _struct*)v->ref)->member = 0;
      while ((c = soap_getchar(soap)) > 0 && c <= 32)
        ;
      if (c == /*{*/'}')
        return SOAP_OK;
      soap_unget(soap, c);
      for (;;)
      { if (!(s = soap_malloc(soap, sizeof(struct value))))
          return soap->error = SOAP_EOM;
        if (json_recv(soap, s))
          return soap->error;
        if (s->__type != SOAP_TYPE__string)
          return soap->error = SOAP_SYNTAX_ERROR;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (c != ':')
          return soap->error = SOAP_SYNTAX_ERROR;
        if (!(m = soap_malloc(soap, (((struct _struct*)v->ref)->__size + 1) * sizeof(struct member))))
          return soap->error = SOAP_EOM;
        (m + ((struct _struct*)v->ref)->__size)->name = s->ref;
        if (json_recv(soap, &(m + ((struct _struct*)v->ref)->__size)->value))
          return soap->error;
        memcpy(m, ((struct _struct*)v->ref)->member, ((struct _struct*)v->ref)->__size * sizeof(struct member));
        ((struct _struct*)v->ref)->member = m;
        ((struct _struct*)v->ref)->__size++;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (c == /*{*/'}')
          break;
        if (c != ',')
          return soap->error = SOAP_SYNTAX_ERROR;
        if ((int)c == EOF)
          return soap->error = SOAP_EOF;
      }
      return SOAP_OK;
    }
    case '['/*]*/:
    { struct value *u;
      if (!(v->ref = soap_malloc(soap, sizeof(struct _array))))
        return soap->error = SOAP_EOM;
      v->__type = SOAP_TYPE__array;
      ((struct _array*)v->ref)->soap = soap;
      ((struct _array*)v->ref)->data.__size = 0;
      ((struct _array*)v->ref)->data.value = 0;
      while ((c = soap_getchar(soap)) > 0 && c <= 32)
        ;
      if (c == /*[*/']')
        return SOAP_OK;
      soap_unget(soap, c);
      for (;;)
      { if (!(u = soap_malloc(soap, (((struct _array*)v->ref)->data.__size + 1) * sizeof(struct value))))
          return soap->error = SOAP_EOM;
        if (json_recv(soap, u + ((struct _array*)v->ref)->data.__size))
          return soap->error;
        memcpy(u, ((struct _array*)v->ref)->data.value, ((struct _array*)v->ref)->data.__size * sizeof(struct value));
        ((struct _array*)v->ref)->data.value = u;
        ((struct _array*)v->ref)->data.__size++;
        while ((c = soap_getchar(soap)) > 0 && c <= 32)
          ;
        if (c == /*[*/']')
          break;
        if (c != ',')
          return soap->error = SOAP_SYNTAX_ERROR;
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
                v->__type = SOAP_TYPE__string;
                if (!(v->ref = soap_strdup(soap, soap->labbuf)))
                  return soap->error = SOAP_EOM;
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
                  { char *h;
		    wchar_t wc[2];
		    int i;
                    /* hex to utf8 conversion */
                    h = soap->tmpbuf;
                    for (i = 0; i < 4; i++)
                    { if ((c = soap_getchar(soap)) == EOF)
                        return soap->error = SOAP_EOF;
                      *(h + i) = c;
                    }
                    wc[0] = soap_strtol(h, NULL, 16);
                    wc[1] = 0;
                    t = soap_wchar2s(soap, wc);
                    c = *t++;
                    if (!*t)
                      t = NULL;
                  }
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
    default: /* number, true, false, null */
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
	if (n == (int)n) {
          v->__type = SOAP_TYPE__int;
          if (!(v->ref = soap_malloc(soap, sizeof(int*))))
            return soap->error = SOAP_EOM;
	  *(int*)v->ref = (int)n;
	} else {
          v->__type = SOAP_TYPE__double;
          if (!(v->ref = soap_malloc(soap, sizeof(double*))))
            return soap->error = SOAP_EOM;
	  *(double*)v->ref = n;
        }
      }
      else if (!strcmp(soap->tmpbuf, "true")) {
        v->__type = SOAP_TYPE__boolean;
        if (!(v->ref = soap_malloc(soap, sizeof(char*))))
          return soap->error = SOAP_EOM;
	*(char*)v->ref = True;
      } else if (!strcmp(soap->tmpbuf, "false")) {
        v->__type = SOAP_TYPE__boolean;
        if (!(v->ref = soap_malloc(soap, sizeof(char*))))
          return soap->error = SOAP_EOM;
	*(char*)v->ref = False;
      }
      return SOAP_OK;
    }
  }
}
