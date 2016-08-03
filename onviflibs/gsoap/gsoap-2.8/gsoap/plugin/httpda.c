/*
	httpda.c

	gSOAP HTTP Digest Authentication plugin.
	Supports both Basic and Digest authentication.

gSOAP XML Web services tools
Copyright (C) 2000-2013, Robert van Engelen, Genivia Inc., All Rights Reserved.
This part of the software is released under one of the following licenses:
GPL, the gSOAP public license, or Genivia's license for commercial use.
--------------------------------------------------------------------------------
gSOAP public license.

The contents of this file are subject to the gSOAP Public License Version 1.3
(the "License"); you may not use this file except in compliance with the
License. You may obtain a copy of the License at
http://www.cs.fsu.edu/~engelen/soaplicense.html
Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
for the specific language governing rights and limitations under the License.

The Initial Developer of the Original Code is Robert A. van Engelen.
Copyright (C) 2000-2013, Robert van Engelen, Genivia, Inc., All Rights Reserved.
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

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/**

@mainpage

- @ref httpda documents the http_da plugin for HTTP Digest Authentication.

*/

/**

@page httpda The http_da plugin for clients and stand-alone services

Additional build steps required:
- Compile all sources with -DWITH_OPENSSL
- Link libgsoapssl (libgsoapssl++), or use the lib's stdsoap2.c/.cpp source
- Compile and link with plugin/httpda.c, plugin/md5evp.c, and plugin/threads.c

@section httpda_1 Client-Side Usage

HTTP Basic Authentication is the default authentication supported by gSOAP. The
credentials for client-side use age set with:

@code
soap.userid = "<userid>";
soap.passed = "<passwd>";
if (soap_call_ns__method(&soap, ...))
  ... // error
@endcode

HTTP Basic Authentication should never be used over plain HTTP, because the
user ID and password are sent in the clear. It is safe(r) to use over HTTPS,
because the HTTP headers and body are encrypted.

The better alternative is to use HTTP Digest Authentication, which uses the
digest (hash value) of the credentials and avoids a plain-text password
exchange.

To use HTTP Digest Authentication with gSOAP, register the http_da plugin:

@code
#include "httpda.h"
soap_register_plugin(&soap, http_da);
@endcode

To make a client-side service call:

@code
struct http_da_info info;
if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 401)
  {
    http_da_save(&soap, &info, "<authrealm>", "<userid>", "<passwd>");
    if (soap_call_ns__method(&soap, ...)) // try again
      ... // error
    http_da_release(&soap, &info);
  }
  else
    ... // other error
}
@endcode

The "<authrealm>" is a string that is associated with the server's realm. It
can be obtained after an unsuccessful non-authenticated call:

@code
if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 401) // HTTP authentication is required
  {
    const char *realm = soap.authrealm;
    ...
  }
  else
    ... // error
}
@endcode

Before a second call is made to the same endpoint that requires authentication,
you must restore the authentication state and then finally release it:

@code
struct http_da_info info;
bool auth = false;

if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 401)
  {
    http_da_save(&soap, &info, "<authrealm>", "<userid>", "<passwd>");
    auth = true;
  }
  else
    ... // other error
}

if (soap_call_ns__method(&soap, ...))
  ... // error

if (auth)
  http_da_restore(&soap, &info);
if (soap_call_ns__method(&soap, ...))
  ... // error

soap_destroy(&soap); // okay to dealloc data
soap_end(&soap);     // okay to dealloc data

if (auth)
  http_da_restore(&soap, &info);
if (soap_call_ns__method(&soap, ...))
  ... // error

if (auth)
  http_da_release(&soap, &info);

soap_destroy(&soap);
soap_end(&soap);
soap_done(&soap);
@endcode

For HTTP proxies requiring HTTP Digest Authenticaiton, use the 'proxy'
functions:

@code
struct http_da_info info;
...
if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 407)
  {
    http_da_proxy_save(&soap, &info, "<authrealm>", "<userid>", "<passwd>");
    auth = true;
  }
  else
    ... // error
}

if (auth)
  http_da_proxy_restore(&soap, &info);
if (soap_call_ns__method(&soap, ...))
  ... // error

http_da_proxy_release(&soap, &info);

soap_destroy(&soap);
soap_end(&soap);
soap_done(&soap);
@endcode

@section httpda_2 Client Example

A client authenticating against a server:

@code
soap_register_plugin(&soap, http_da);
// try calling without authenticating
if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 401) // HTTP authentication is required
  {
    if (!strcmp(soap.authrealm, authrealm)) // check authentication realm
    {
      struct http_da_info info; // to store userid and passwd
      http_da_save(&soap, &info, authrealm, userid, passwd);
      // call again, now with credentials
      if (soap_call_ns__method(&soap, ...) == SOAP_OK)
      {
        ... // process response data
        soap_end(&soap);
	... // userid and passwd were deallocated (!)
        http_da_restore(&soap, &info); // get userid and passwd after soap_end()
        if (!soap_call_ns__method(&soap, ...) == SOAP_OK)
	  ... // error
        http_da_release(&soap, &info); // free data and remove userid and passwd
@endcode

A client authenticating against a proxy:

@code
soap_register_plugin(&soap, http_da);
// try calling without authenticating
if (soap_call_ns__method(&soap, ...))
{
  if (soap.error == 407) // HTTP authentication is required
  {
    if (!strcmp(soap.authrealm, authrealm)) // check authentication realm
    {
      struct http_da_info info; // to store userid and passwd
      http_da_proxy_save(&soap, &info, authrealm, userid, passwd);
      // call again, now with credentials
      if (soap_call_ns__method(&soap, ...) == SOAP_OK)
      {
        ... // process response data
        soap_end(&soap);
	... // userid and passwd were deallocated (!)
        http_da_proxy_restore(&soap, &info); // get userid and passwd after soap_end()
        if (!soap_call_ns__method(&soap, ...) == SOAP_OK)
	  ... // error
        http_da_proxy_release(&soap, &info); // free data and remove userid and passwd
@endcode

@section httpda_3 Server-Side Usage

Server-side HTTP Basic Authentication can be enforced by simply checking the soap.userid and soap.passwd values in a service method that requires client authentication:

@code
soap_register_plugin(&soap, http_da);
...
soap_serve(&soap);
...
int ns__method(struct soap *soap, ...)
{
  if (!soap->userid || !soap->passwd || strcmp(soap->userid, "<userid>") || strcmp(soap->passwd, "<passwd>"))
    return 401; // HTTP authentication required
  ...
}
@endcode

HTTP Digest Authentication is verified differently:

@code
soap_register_plugin(&soap, http_da);
...
soap_serve(&soap);
...
int ns__method(struct soap *soap, ...)
{
  if (soap->authrealm && soap->userid)
  {
    passwd = ... // database lookup on userid and authrealm to find passwd
    if (!strcmp(soap->authrealm, authrealm) && !strcmp(soap->userid, userid))
    { 
      if (!http_da_verify_post(soap, passwd)) // HTTP POST DA verification
      {
        ... // process request and produce response
        return SOAP_OK;
      }
    }
  }
  soap->authrealm = authrealm; // realm to send to client
  return 401; // Not authorized, challenge with digest authentication
@endcode

The http_da_verify_post() function checks the HTTP POST credentials. To verify
an HTTP GET operation, use http_da_verify_get().

@section httpda_4 Server Example

@code
soap_register_plugin(&soap, http_da);
...
soap_serve(&soap);
...
int ns__method(struct soap *soap, ...)
{
  if (soap->userid && soap->passwd) // Basic authentication
  {
    if (!strcmp(soap->userid, userid) && !strcmp(soap->passwd, passwd))
    {
      ... // can also check soap->authrealm 
      ... // process request and produce response
      return SOAP_OK;
    }
  }
  else if (soap->authrealm && soap->userid) // Digest authentication
  {
    passwd = ... // database lookup on userid and authrealm to find passwd
    if (!strcmp(soap->authrealm, authrealm) && !strcmp(soap->userid, userid))
    { 
      if (!http_da_verify_post(soap, passwd)) // HTTP POST DA verification
      {
        ... // process request and produce response
        return SOAP_OK;
      }
    }
  }
  soap->authrealm = authrealm; // realm to send to client
  return 401; // Not authorized, challenge with digest authentication
}
@endcode

@section httpda_5 HTTP Digest Authentication Limitations

HTTP Digest Authentication cannot be used with streaming MTOM/MIME/DIME
attachments. Streaming is turned off by the plugin and attachment data is
buffered rather than streamed. Non-streaming MTOM/MIME/DIME attachments are
handled just fine.

*/

#include "httpda.h"

#ifdef __cplusplus
extern "C" {
#endif

const char http_da_id[] = HTTP_DA_ID;

/** HTTP DA session database */
static struct http_da_session *http_da_session = NULL;

/** HTTP DA session database lock */
static MUTEX_TYPE http_da_session_lock = MUTEX_INITIALIZER;

#define HTTP_DA_NONCELEN 21
#define HTTP_DA_OPAQUELEN 9

/******************************************************************************\
 *
 *	Forward decls
 *
\******************************************************************************/

static int http_da_init(struct soap *soap, struct http_da_data *data);
static int http_da_copy(struct soap *soap, struct soap_plugin *dst, struct soap_plugin *src);
static void http_da_delete(struct soap *soap, struct soap_plugin *p);

static int http_da_post_header(struct soap *soap, const char *key, const char *val);
static int http_da_parse(struct soap *soap);
static int http_da_parse_header(struct soap *soap, const char *key, const char *val);
static int http_da_prepareinitsend(struct soap *soap);
static int http_da_prepareinitrecv(struct soap *soap);
static int http_da_preparesend(struct soap *soap, const char *buf, size_t len);
static int http_da_preparerecv(struct soap *soap, const char *buf, size_t len);
static int http_da_preparefinalrecv(struct soap *soap);

static int http_da_verify_method(struct soap *soap, const char *method, const char *passwd);
static void http_da_session_start(const char *realm, const char *nonce, const char *opaque);
static int http_da_session_update(const char *realm, const char *nonce, const char *opaque, const char *cnonce, const char *ncount);
static void http_da_session_cleanup();

void http_da_calc_nonce(struct soap *soap, char nonce[HTTP_DA_NONCELEN]);
void http_da_calc_opaque(struct soap *soap, char opaque[HTTP_DA_OPAQUELEN]);
static void http_da_calc_HA1(struct soap *soap, void **context, const char *alg, const char *userid, const char *realm, const char *passwd, const char *nonce, const char *cnonce, char HA1hex[33]);
static void http_da_calc_response(struct soap *soap, void **context, char HA1hex[33], const char *nonce, const char *ncount, const char *cnonce, const char *qop, const char *method, const char *uri, char entityHAhex[33], char response[33]);

/******************************************************************************\
 *
 *	Plugin registry
 *
\******************************************************************************/

int http_da(struct soap *soap, struct soap_plugin *p, void *arg)
{
  (void)arg;
  p->id = http_da_id;
  p->data = (void*)SOAP_MALLOC(soap, sizeof(struct http_da_data));
  p->fcopy = http_da_copy;
  p->fdelete = http_da_delete;
  if (p->data)
  {
    if (http_da_init(soap, (struct http_da_data*)p->data))
    {
      SOAP_FREE(soap, p->data);
      return SOAP_EOM;
    }
  }
  return SOAP_OK;
}

static int http_da_init(struct soap *soap, struct http_da_data *data)
{
  data->fposthdr = soap->fposthdr;
  soap->fposthdr = http_da_post_header;
  data->fparse = soap->fparse;
  soap->fparse = http_da_parse;
  data->fparsehdr = soap->fparsehdr;
  soap->fparsehdr = http_da_parse_header;
  data->fprepareinitsend = soap->fprepareinitsend;
  soap->fprepareinitsend = http_da_prepareinitsend;
  data->fprepareinitrecv = soap->fprepareinitrecv;
  soap->fprepareinitrecv = http_da_prepareinitrecv;
  data->context = NULL;
  memset(data->digest, 0, sizeof(data->digest));
  data->nonce = NULL;
  data->opaque = NULL;
  data->qop = NULL;
  data->alg = NULL;
  data->nc = 0;
  data->ncount = NULL;
  data->cnonce = NULL;
  data->response = NULL;

  return SOAP_OK;
}

static int http_da_copy(struct soap *soap, struct soap_plugin *dst, struct soap_plugin *src)
{
  dst->data = (void*)SOAP_MALLOC(soap, sizeof(struct http_da_data));
  memcpy(dst->data, src->data, sizeof(struct http_da_data));
  ((struct http_da_data*)dst->data)->context = NULL;
  memset(((struct http_da_data*)dst->data)->digest, 0, sizeof(((struct http_da_data*)dst->data)->digest));
  ((struct http_da_data*)dst->data)->nonce = NULL;
  ((struct http_da_data*)dst->data)->opaque = NULL;
  ((struct http_da_data*)dst->data)->qop = NULL;
  ((struct http_da_data*)dst->data)->alg = NULL;
  ((struct http_da_data*)dst->data)->nc = 0;
  ((struct http_da_data*)dst->data)->ncount = NULL;
  ((struct http_da_data*)dst->data)->cnonce = NULL;
  ((struct http_da_data*)dst->data)->response = NULL;
  return SOAP_OK;
}

static void http_da_delete(struct soap *soap, struct soap_plugin *p)
{
  if (((struct http_da_data*)p->data)->context)
    md5_handler(soap, &((struct http_da_data*)p->data)->context, MD5_DELETE, NULL, 0);
  if (p->data)
    SOAP_FREE(soap, p->data);
}

/******************************************************************************\
 *
 *	Callbacks
 *
\******************************************************************************/

static int http_da_post_header(struct soap *soap, const char *key, const char *val)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  /* client's HTTP Authorization request */
  if (key && (!strcmp(key, "Authorization") || !strcmp(key, "Proxy-Authorization")))
  {
    char HA1[33], entityHAhex[33], response[33];
    char cnonce[HTTP_DA_NONCELEN];
    char ncount[9];
    const char *qop, *method;
    const char *userid = (*key == 'A' ? soap->userid : soap->proxy_userid);
    const char *passwd = (*key == 'A' ? soap->passwd : soap->proxy_passwd);

    md5_handler(soap, &data->context, MD5_FINAL, data->digest, 0);

    if (!userid || !passwd || !soap->authrealm || !data->nonce)
    {
#ifdef SOAP_DEBUG
      fprintf(stderr, "Debug message: authentication header failed, missing authentication data\n");
#endif
      return SOAP_OK;
    }

    http_da_calc_nonce(soap, cnonce);
    http_da_calc_HA1(soap, &data->context, data->alg, userid, soap->authrealm, passwd, data->nonce, cnonce, HA1);

    if (soap->status != SOAP_GET && soap->status != SOAP_CONNECT && data->qop && !soap_tag_cmp(data->qop, "*auth-int*"))
    {
      qop = "auth-int";
      soap_s2hex(soap, (unsigned char*)data->digest, entityHAhex, 16);
    }
    else if (data->qop)
      qop = "auth";
    else
      qop = NULL;

    if (soap->status == SOAP_GET)
      method = "GET";
    else if (soap->status == SOAP_CONNECT)
      method = "CONNECT";
    else
      method = "POST";

#ifdef HAVE_SNPRINTF
    soap_snprintf(ncount, sizeof(ncount), "%8.8lx", data->nc++);
#else
    sprintf(ncount, "%8.8lx", data->nc++);
#endif

    http_da_calc_response(soap, &data->context, HA1, data->nonce, ncount, cnonce, qop, method, soap->path, entityHAhex, response);

#ifdef HAVE_SNPRINTF
    soap_snprintf(soap->tmpbuf, sizeof(soap->tmpbuf), "Digest realm=\"%s\", username=\"%s\", nonce=\"%s\", uri=\"%s\", nc=%s, cnonce=\"%s\", response=\"%s\"", soap->authrealm, userid, data->nonce, soap->path, ncount, cnonce, response);
#else
    sprintf(soap->tmpbuf, "Digest realm=\"%s\", username=\"%s\", nonce=\"%s\", uri=\"%s\", nc=%s, cnonce=\"%s\", response=\"%s\"", soap->authrealm, userid, data->nonce, soap->path, ncount, cnonce, response);
#endif
    if (data->opaque)
#ifdef HAVE_SNPRINTF
      soap_snprintf(soap->tmpbuf + strlen(soap->tmpbuf), sizeof(soap->tmpbuf) - strlen(soap->tmpbuf), ", opaque=\"%s\"", data->opaque);
#else
      sprintf(soap->tmpbuf + strlen(soap->tmpbuf), ", opaque=\"%s\"", data->opaque);
#endif
    if (qop)
#ifdef HAVE_SNPRINTF
      soap_snprintf(soap->tmpbuf + strlen(soap->tmpbuf), sizeof(soap->tmpbuf) - strlen(soap->tmpbuf), ", qop=\"%s\"", qop);
#else
      sprintf(soap->tmpbuf + strlen(soap->tmpbuf), ", qop=\"%s\"", qop);
#endif

    return data->fposthdr(soap, key, soap->tmpbuf);
  }

  /* server's HTTP Authorization challenge/response */
  if (key && (!strcmp(key, "WWW-Authenticate") || !strcmp(key, "Proxy-Authenticate")))
  {
    char nonce[HTTP_DA_NONCELEN];
    char opaque[HTTP_DA_OPAQUELEN];

    http_da_calc_nonce(soap, nonce);
    http_da_calc_opaque(soap, opaque);

    http_da_session_start(soap->authrealm, nonce, opaque);

#ifdef HAVE_SNPRINTF
    soap_snprintf(soap->tmpbuf, sizeof(soap->tmpbuf), "Digest realm=\"%s\", qop=\"auth,auth-int\", nonce=\"%s\", opaque=\"%s\"", soap->authrealm, nonce, opaque);
#else
    sprintf(soap->tmpbuf, "Digest realm=\"%s\", qop=\"auth,auth-int\", nonce=\"%s\", opaque=\"%s\"", soap->authrealm, nonce, opaque);
#endif

    return data->fposthdr(soap, key, soap->tmpbuf);
  }

  return data->fposthdr(soap, key, val);
}

static int http_da_parse(struct soap *soap)
{ 
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  data->qop = NULL;

  /* HTTP GET w/o body with qop=auth-int still requires a digest */
  md5_handler(soap, &data->context, MD5_INIT, NULL, 0);
  md5_handler(soap, &data->context, MD5_FINAL, data->digest, 0);

  if ((soap->error = data->fparse(soap)))
    return soap->error;

  if (data->qop && !soap_tag_cmp(data->qop, "auth-int"))
  {
    if (soap->fpreparerecv != http_da_preparerecv)
    {
      data->fpreparerecv = soap->fpreparerecv;
      soap->fpreparerecv = http_da_preparerecv;
    }
    if (soap->fpreparefinalrecv != http_da_preparefinalrecv)
    {
      data->fpreparefinalrecv = soap->fpreparefinalrecv;
      soap->fpreparefinalrecv = http_da_preparefinalrecv;
    }
    md5_handler(soap, &data->context, MD5_INIT, NULL, 0);
  }
 
  return SOAP_OK;
}

static int http_da_parse_header(struct soap *soap, const char *key, const char *val)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  /* check if server received Authorization Digest HTTP header from client */
  if (!soap_tag_cmp(key, "Authorization") && !soap_tag_cmp(val, "Digest *"))
  {
    soap->authrealm = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "realm"));
    soap->userid = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "username"));
    soap->passwd = NULL;
    data->nonce = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "nonce"));
    data->opaque = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "opaque"));
    data->qop = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "qop"));
    data->alg = NULL;
    data->ncount = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "nc"));
    data->cnonce = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "cnonce"));
    data->response = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "response"));
    return SOAP_OK;
  }

  /* check if client received WWW-Authenticate Digest HTTP header from server */
  if ((!soap_tag_cmp(key, "WWW-Authenticate") || !soap_tag_cmp(key, "Proxy-Authenticate")) && !soap_tag_cmp(val, "Digest *"))
  {
    soap->authrealm = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "realm"));
    data->nonce = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "nonce"));
    data->opaque = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "opaque"));
    data->qop = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "qop"));
    data->alg = soap_strdup(soap, soap_get_header_attribute(soap, val + 7, "algorithm"));
    data->nc = 1;
    data->ncount = NULL;
    data->cnonce = NULL;
    data->response = NULL;
    return SOAP_OK;
  }

  return data->fparsehdr(soap, key, val);
}

static int http_da_prepareinitsend(struct soap *soap)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  if ((soap->mode & SOAP_IO) != SOAP_IO_STORE && (soap->mode & (SOAP_ENC_DIME | SOAP_ENC_MIME)))
  { /* support non-streaming MIME/DIME attachments by buffering the message */
    soap->omode &= ~SOAP_IO;
    soap->omode |= SOAP_IO_STORE;
    soap->mode &= ~SOAP_IO;
    soap->mode |= SOAP_IO_STORE;
  }
  else
  {
    if ((soap->userid && soap->passwd)
     || (soap->proxy_userid && soap->proxy_passwd))
    {
      md5_handler(soap, &data->context, MD5_INIT, NULL, 0);
      if (soap->fpreparesend != http_da_preparesend)
      {
        data->fpreparesend = soap->fpreparesend;
        soap->fpreparesend = http_da_preparesend;
      }
      if ((soap->mode & SOAP_IO) == SOAP_IO_CHUNK)
        soap->mode |= SOAP_IO_LENGTH;
    }

  }

  if (data->fprepareinitsend)
    return data->fprepareinitsend(soap);

  return SOAP_OK;
}

static int http_da_prepareinitrecv(struct soap *soap)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  if (soap->fpreparerecv == http_da_preparerecv)
    soap->fpreparerecv = data->fpreparerecv;
  if (soap->fpreparefinalrecv == http_da_preparefinalrecv)
    soap->fpreparefinalrecv = data->fpreparefinalrecv;

  if (data->fprepareinitrecv)
    return data->fprepareinitrecv(soap);

  return SOAP_OK;
}

static int http_da_preparesend(struct soap *soap, const char *buf, size_t len)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  md5_handler(soap, &data->context, MD5_UPDATE, (char*)buf, len);

  if (data->fpreparesend)
    return data->fpreparesend(soap, buf, len);

  return SOAP_OK;
}

static int http_da_preparerecv(struct soap *soap, const char *buf, size_t len)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  md5_handler(soap, &data->context, MD5_UPDATE, (char*)buf, len);

  if (data->fpreparerecv)
    return data->fpreparerecv(soap, buf, len);

  return SOAP_OK;
}

static int http_da_preparefinalrecv(struct soap *soap)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);

  if (!data)
    return SOAP_PLUGIN_ERROR;

  md5_handler(soap, &data->context, MD5_FINAL, data->digest, 0);

  soap->fpreparerecv = data->fpreparerecv;
  soap->fpreparefinalrecv = data->fpreparefinalrecv;

  if (soap->fpreparefinalrecv)
    return soap->fpreparefinalrecv(soap);

  return SOAP_OK;
}

/******************************************************************************\
 *
 *	Client-side digest authentication state management
 *
\******************************************************************************/

void http_da_save(struct soap *soap, struct http_da_info *info, const char *realm, const char *userid, const char *passwd)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  if (!data)
    return;

  soap->authrealm = info->authrealm = soap_strdup(NULL, realm);
  info->userid = soap_strdup(NULL, userid);
  soap->userid = info->userid;
  info->passwd = soap_strdup(NULL, passwd);
  soap->passwd = info->passwd;
  info->nonce = soap_strdup(NULL, data->nonce);
  info->opaque = soap_strdup(NULL, data->opaque);
  info->qop = soap_strdup(NULL, data->qop);
  info->alg = soap_strdup(NULL, data->alg);
}

void http_da_proxy_save(struct soap *soap, struct http_da_info *info, const char *realm, const char *userid, const char *passwd)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  if (!data)
    return;

  soap->authrealm = info->authrealm = soap_strdup(NULL, realm);
  info->userid = soap_strdup(NULL, userid);
  soap->proxy_userid = info->userid;
  info->passwd = soap_strdup(NULL, passwd);
  soap->proxy_passwd = info->passwd;
  info->nonce = soap_strdup(NULL, data->nonce);
  info->opaque = soap_strdup(NULL, data->opaque);
  info->qop = soap_strdup(NULL, data->qop);
  info->alg = soap_strdup(NULL, data->alg);
}

void http_da_restore(struct soap *soap, struct http_da_info *info)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  if (!data)
    return;
  soap->authrealm = info->authrealm;
  soap->userid = info->userid;
  soap->passwd = info->passwd;
  data->nonce = info->nonce;
  data->opaque = info->opaque;
  data->qop = info->qop;
  data->alg = info->alg;
}

void http_da_proxy_restore(struct soap *soap, struct http_da_info *info)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  if (!data)
    return;
  soap->authrealm = info->authrealm;
  soap->proxy_userid = info->userid;
  soap->proxy_passwd = info->passwd;
  data->nonce = info->nonce;
  data->opaque = info->opaque;
  data->qop = info->qop;
  data->alg = info->alg;
}

void http_da_release(struct soap *soap, struct http_da_info *info)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  if (!data)
    return;

  soap->authrealm = NULL;
  soap->userid = NULL;
  soap->passwd = NULL;

  data->nonce = NULL;
  data->opaque = NULL;
  data->qop = NULL;
  data->alg = NULL;

  if (info->authrealm)
  {
    free((void*)info->authrealm);
    info->authrealm = NULL;
  }
  if (info->userid)
  {
    free((void*)info->userid);
    info->userid = NULL;
  }
  if (info->passwd)
  {
    free((void*)info->passwd);
    info->passwd = NULL;
  }
  if (info->nonce)
  {
    free((void*)info->nonce);
    info->nonce = NULL;
  }
  if (info->opaque)
  {
    free((void*)info->opaque);
    info->opaque = NULL;
  }
  if (info->qop)
  {
    free((void*)info->qop);
    info->qop = NULL;
  }
  if (info->alg)
  {
    free((void*)info->alg);
    info->alg = NULL;
  }
}

void http_da_proxy_release(struct soap *soap, struct http_da_info *info)
{
  soap->proxy_userid = NULL;
  soap->proxy_passwd = NULL;

  http_da_release(soap, info);
}

/******************************************************************************\
 *
 *	Server-side digest authentication verification
 *
\******************************************************************************/

int http_da_verify_post(struct soap *soap, const char *passwd)
{
  return http_da_verify_method(soap, "POST", passwd);
}

int http_da_verify_get(struct soap *soap, const char *passwd)
{
  return http_da_verify_method(soap, "GET", passwd);
}

static int http_da_verify_method(struct soap *soap, const char *method, const char *passwd)
{
  struct http_da_data *data = (struct http_da_data*)soap_lookup_plugin(soap, http_da_id);
  char HA1[33], entityHAhex[33], response[33];

  if (!data)
    return SOAP_ERR;

  /* reject if none or basic authentication was used */
  if (!soap->authrealm
   || !soap->userid
   || soap->passwd)	/* passwd is set when basic auth is used */
    return SOAP_ERR;

  /* require at least qop="auth" to prevent replay attacks */
  if (!data->qop)
    return SOAP_ERR;

  if (http_da_session_update(soap->authrealm, data->nonce, data->opaque, data->cnonce, data->ncount))
    return SOAP_ERR;

  http_da_calc_HA1(soap, &data->context, NULL, soap->userid, soap->authrealm, passwd, data->nonce, data->cnonce, HA1);

  if (!soap_tag_cmp(data->qop, "auth-int"))
    soap_s2hex(soap, (unsigned char*)data->digest, entityHAhex, 16);

  http_da_calc_response(soap, &data->context, HA1, data->nonce, data->ncount, data->cnonce, data->qop, method, soap->path, entityHAhex, response);

#ifdef SOAP_DEBUG
  fprintf(stderr, "Debug message: verifying client response=%s with calculated digest=%s qop=%s\n", data->response, response, data->qop);
#endif

  /* check digest response values */
  if (strcmp(data->response, response))
    return SOAP_ERR;

  return SOAP_OK;
}

/******************************************************************************\
 *
 *	Digest authentication session database management
 *
\******************************************************************************/

static void http_da_session_start(const char *realm, const char *nonce, const char *opaque)
{
  struct http_da_session *session;
  time_t now = time(NULL);

  if (now % 10 == 0) /* don't do this all the time to improve efficiency */
    http_da_session_cleanup();

#ifdef SOAP_DEBUG
  fprintf(stderr, "Starting session realm=%s nonce=%s\n", realm, nonce);
#endif

  MUTEX_LOCK(http_da_session_lock);

  session = (struct http_da_session*)malloc(sizeof(struct http_da_session));
  if (session)
  {
    session->next = http_da_session;
    session->modified = now;
    session->realm = soap_strdup(NULL, realm);
    session->nonce = soap_strdup(NULL, nonce);
    session->opaque = soap_strdup(NULL, opaque);
    session->nc = 0;
    http_da_session = session;
  }

  MUTEX_UNLOCK(http_da_session_lock);
}

static int http_da_session_update(const char *realm, const char *nonce, const char *opaque, const char *cnonce, const char *ncount)
{
  struct http_da_session *session;

  if (!realm || !nonce || !opaque || !cnonce || !ncount)
  {
#ifdef SOAP_DEBUG
    fprintf(stderr, "Debug message: authentication update failed, missing authentication data\n");
#endif
    return SOAP_ERR;
  }
#ifdef SOAP_DEBUG
  fprintf(stderr, "Debug message: updating session realm=%s nonce=%s\n", realm, nonce);
#endif

  MUTEX_LOCK(http_da_session_lock);

  for (session = http_da_session; session; session = session->next)
    if (!strcmp(session->realm, realm) && !strcmp(session->nonce, nonce) && !strcmp(session->opaque, opaque))
      break;

  if (session)
  {
    unsigned long nc = soap_strtoul(ncount, NULL, 16);

    if (session->nc >= nc)
    {
      session->modified = 0; /* replay attack: terminate session */
      session = NULL;
    }
    else
    {
      session->nc = nc;
      session->modified = time(NULL);
    }
  }

  MUTEX_UNLOCK(http_da_session_lock);

  if (!session)
    return SOAP_ERR;

  return SOAP_OK;
}

static void http_da_session_cleanup()
{
  struct http_da_session **session;
  time_t now = time(NULL);

  MUTEX_LOCK(http_da_session_lock);

  session = &http_da_session;
  while (*session)
  {
    if ((*session)->modified + HTTP_DA_SESSION_TIMEOUT < now)
    {
      struct http_da_session *p = *session;

#ifdef SOAP_DEBUG
      fprintf(stderr, "Deleting session realm=%s nonce=%s\n", p->realm, p->nonce);
#endif

      if (p->realm)
        free((void*)p->realm);
      if (p->nonce)
        free((void*)p->nonce);
      if (p->opaque)
        free((void*)p->opaque);

      *session = p->next;
      free((void*)p);
    }
    else
      session = &(*session)->next;
  }

  MUTEX_UNLOCK(http_da_session_lock);
}

/******************************************************************************\
 *
 *	Calculate hex nonce and opaque values
 *
\******************************************************************************/

void http_da_calc_nonce(struct soap *soap, char nonce[HTTP_DA_NONCELEN])
{
  static short count = 0xCA53;
  (void)soap;
#ifdef HAVE_SNPRINTF
  soap_snprintf(nonce, HTTP_DA_NONCELEN, "%8.8x%4.4hx%8.8x", (int)time(NULL), count++, soap_random);
#else
  sprintf(nonce, "%8.8x%4.4hx%8.8x", (int)time(NULL), count++, soap_random);
#endif
}

void http_da_calc_opaque(struct soap *soap, char opaque[HTTP_DA_OPAQUELEN])
{
  (void)soap;
#ifdef HAVE_SNPRINTF
  soap_snprintf(opaque, HTTP_DA_OPAQUELEN, "%8.8x", soap_random);
#else
  sprintf(opaque, "%8.8x", soap_random);
#endif
}

/******************************************************************************\
 *
 *	Calculate HA1, HA2, and response digest as per RFC 2617 specification
 *
\******************************************************************************/

static void http_da_calc_HA1(struct soap *soap, void **context, const char *alg, const char *userid, const char *realm, const char *passwd, const char *nonce, const char *cnonce, char HA1hex[33])
{
  char HA1[16];

  md5_handler(soap, context, MD5_INIT, NULL, 0);
  md5_handler(soap, context, MD5_UPDATE, (char*)userid, strlen(userid));
  md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
  md5_handler(soap, context, MD5_UPDATE, (char*)realm, strlen(realm));
  md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
  md5_handler(soap, context, MD5_UPDATE, (char*)passwd, strlen(passwd));
  md5_handler(soap, context, MD5_FINAL, HA1, 0);

  if (alg && !soap_tag_cmp(alg, "MD5-sess"))
  {
    md5_handler(soap, context, MD5_INIT, NULL, 0);
    md5_handler(soap, context, MD5_UPDATE, HA1, 16);
    if (nonce)
    {
      md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
      md5_handler(soap, context, MD5_UPDATE, (char*)nonce, strlen(nonce));
    }
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
    md5_handler(soap, context, MD5_UPDATE, (char*)cnonce, strlen(cnonce));
    md5_handler(soap, context, MD5_FINAL, HA1, 0);
  };

  soap_s2hex(soap, (unsigned char*)HA1, HA1hex, 16);
};

static void http_da_calc_response(struct soap *soap, void **context, char HA1hex[33], const char *nonce, const char *ncount, const char *cnonce, const char *qop, const char *method, const char *uri, char entityHAhex[33], char response[33])
{
  char HA2[16], HA2hex[33], responseHA[16];

  md5_handler(soap, context, MD5_INIT, NULL, 0);
  md5_handler(soap, context, MD5_UPDATE, (char*)method, strlen(method));
  md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
  md5_handler(soap, context, MD5_UPDATE, (char*)uri, strlen(uri));
  if (qop && !soap_tag_cmp(qop, "auth-int"))
  { 
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
    md5_handler(soap, context, MD5_UPDATE, entityHAhex, 32);
  }
  md5_handler(soap, context, MD5_FINAL, HA2, 0);

  soap_s2hex(soap, (unsigned char*)HA2, HA2hex, 16);

  md5_handler(soap, context, MD5_INIT, NULL, 0);
  md5_handler(soap, context, MD5_UPDATE, HA1hex, 32);
  if (nonce)
  {
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
    md5_handler(soap, context, MD5_UPDATE, (char*)nonce, strlen(nonce));
  }
  md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
  if (qop && *qop)
  {
    md5_handler(soap, context, MD5_UPDATE, (char*)ncount, strlen(ncount));
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
    md5_handler(soap, context, MD5_UPDATE, (char*)cnonce, strlen(cnonce));
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
    md5_handler(soap, context, MD5_UPDATE, (char*)qop, strlen(qop));
    md5_handler(soap, context, MD5_UPDATE, (char*)":", 1);
  }
  md5_handler(soap, context, MD5_UPDATE, HA2hex, 32);
  md5_handler(soap, context, MD5_FINAL, responseHA, 0);

  soap_s2hex(soap, (unsigned char*)responseHA, response, 16);
}

#ifdef __cplusplus
}
#endif

