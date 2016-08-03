/*

cacerts.h

Store CA certificates in memory for optimizations and/or stand-alone clients.

gSOAP XML Web services tools
Copyright (C) 2000-2009, Robert van Engelen, Genivia Inc., All Rights Reserved.
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
Copyright (C) 2000-2009, Robert van Engelen, Genivia Inc., All Rights Reserved.
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

	Usage:

	The soap_ssl_client_cacerts(struct soap*) function replaces
	soap_ssl_client_context(). The new function uses the internal CA
	certificate store to authenticate servers. The
	soap_ssl_client_cacerts() function should be called just once to set up
	the CA certificate chain.

	Compile and link cacerts.c with your project.

	Example:

	struct soap *soap = soap_new();
	if (soap_ssl_client_cacerts(soap)
	 || soap_call_ns__myMethod(soap, "https://..." ...) != SOAP_OK)
	{ soap_print_fault(soap, stderr);
	  exit(1);
	}
	else
	  ... // all OK

*/

#ifndef WITH_OPENSSL
#define WITH_OPENSSL
#endif

#include "stdsoap2.h"

#ifdef __cplusplus
extern "C" {
#endif

int soap_ssl_client_cacerts(struct soap *soap);

#ifdef __cplusplus
}
#endif
