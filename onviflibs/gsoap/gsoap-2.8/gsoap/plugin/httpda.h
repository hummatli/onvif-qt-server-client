/*
	httpda.h

	gSOAP HTTP Digest Authentication plugin.
	Supports both Basic and Digest authentication.

gSOAP XML Web services tools
Copyright (C) 2000-2005, Robert van Engelen, Genivia Inc., All Rights Reserved.
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
Copyright (C) 2000-2005, Robert van Engelen, Genivia, Inc., All Rights Reserved.
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

#ifndef HTTPDA_H
#define HTTPDA_H

#include "stdsoap2.h"
#include "md5evp.h" /* requires MD5 */
#include "threads.h" /* mutex for multi-threaded server implementations */

#ifdef __cplusplus
extern "C" {
#endif

/** pluging identification for plugin registry */
#define HTTP_DA_ID "HTTP-DA-1.2"

/** pluging identification for plugin registry */
extern const char http_da_id[];

/** HTTP digest authentication session times out after ten minutes */
#define HTTP_DA_SESSION_TIMEOUT (600) 

/**
@struct http_da_data
@brief Plugin data to override callbacks
*/
struct http_da_data
{
  int (*fposthdr)(struct soap*, const char*, const char*);
  int (*fparse)(struct soap*);
  int (*fparsehdr)(struct soap*, const char*, const char*);
  int (*fprepareinitsend)(struct soap*);
  int (*fprepareinitrecv)(struct soap*);
  int (*fpreparesend)(struct soap*, const char*, size_t);
  int (*fpreparerecv)(struct soap*, const char*, size_t);
  int (*fpreparefinalrecv)(struct soap*);
  void *context;	/**< ptr to MD5 context for MD5 handler */
  char digest[16];	/**< MD5 entity body digest */
  char *nonce;		/**< client/server-side copy of server's nonce value */
  char *opaque;		/**< client/server-side copy of server's opaque value */
  char *qop;		/**< client/server-side copy of server's qop value(s) */
  char *alg;		/**< client-side: server's algorithm value */
  unsigned long nc;	/**< client-side: generated nonce count */
  char *ncount;		/**< server-side: client's nonce count */
  char *cnonce;		/**< server-side: client's nonce */
  char *response;	/**< server-side: client's response digest key */
};

/**
@struct http_da_session
@brief Keeps internal state of shared sessions
*/
struct http_da_session
{
  struct http_da_session *next;
  time_t modified;
  char *realm;
  char *nonce;
  char *opaque;
  unsigned long nc;
};

int http_da(struct soap *soap, struct soap_plugin *p, void *arg);

int http_da_verify_post(struct soap *soap, const char *passwd);
int http_da_verify_get(struct soap *soap, const char *passwd);

/**
@struct http_da_info
@brief Used to save and restore credentials for client-side multiple
invocations to the same authenticated endpoint
*/
struct http_da_info
{
  char *authrealm;
  char *userid;
  char *passwd;
  char *nonce;
  char *opaque;
  char *qop;
  char *alg;
};

void http_da_save(struct soap *soap, struct http_da_info *info, const char *realm, const char *userid, const char *passwd);
void http_da_restore(struct soap *soap, struct http_da_info *info);
void http_da_release(struct soap *soap, struct http_da_info *info);

void http_da_proxy_save(struct soap *soap, struct http_da_info *info, const char *realm, const char *userid, const char *passwd);
void http_da_proxy_restore(struct soap *soap, struct http_da_info *info);
void http_da_proxy_release(struct soap *soap, struct http_da_info *info);

#ifdef __cplusplus
}
#endif

#endif
