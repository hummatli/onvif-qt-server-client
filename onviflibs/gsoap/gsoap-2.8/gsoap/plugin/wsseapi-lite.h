/*
	wsseapi-lite.h

	WS-Security, lite version (time stamp and user name token only).

	See wsseapi-lite.c for documentation and details.

gSOAP XML Web services tools
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc., All Rights Reserved.
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
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc., All Rights Reserved.
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

#ifndef WSSEAPI_H
#define WSSEAPI_H

#include "soapH.h"	/* replace with soapcpp2-generated *H.h file */

#ifdef __cplusplus
extern "C" {
#endif

extern const char *wsse_PasswordTextURI;

struct _wsse__Security* soap_wsse_add_Security(struct soap *soap);
struct _wsse__Security* soap_wsse_add_Security_actor(struct soap *soap, const char *actor);
void soap_wsse_delete_Security(struct soap *soap);
struct _wsse__Security* soap_wsse_Security(struct soap *soap);

struct ds__SignatureType* soap_wsse_add_Signature(struct soap *soap);
void soap_wsse_delete_Signature(struct soap *soap);
struct ds__SignatureType* soap_wsse_Signature(struct soap *soap);

int soap_wsse_add_Timestamp(struct soap *soap, const char *id, time_t lifetime);
struct _wsu__Timestamp *soap_wsse_Timestamp(struct soap *soap);
int soap_wsse_verify_Timestamp(struct soap *soap);

int soap_wsse_add_UsernameTokenText(struct soap *soap, const char *id, const char *username, const char *password);
struct _wsse__UsernameToken *soap_wsse_UsernameToken(struct soap *soap, const char *id);
const char* soap_wsse_get_Username(struct soap *soap);
int soap_wsse_verify_Password(struct soap *soap, const char *password);

int soap_wsse_sender_fault_subcode(struct soap *soap, const char *faultsubcode, const char *faultstring, const char *faultdetail);
int soap_wsse_receiver_fault_subcode(struct soap *soap, const char *faultsubcode, const char *faultstring, const char *faultdetail);
int soap_wsse_sender_fault(struct soap *soap, const char *faultstring, const char *faultdetail);
int soap_wsse_receiver_fault(struct soap *soap, const char *faultstring, const char *faultdetail);
int soap_wsse_fault(struct soap *soap, enum wsse__FaultcodeEnum fault, const char *detail);

int soap_wsse_set_wsu_id(struct soap *soap, const char *tags);

#ifdef __cplusplus
}
#endif

#endif
