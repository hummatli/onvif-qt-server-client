/*
	logging.h

	Message logging plugin and stat collector for webserver.

	Register the plugin with:
		soap_register_plugin(soap, logging);

	Change logging destinations:
		soap_set_logging_inbound(struct soap*, FILE*);
		soap_set_logging_outbound(struct soap*, FILE*);

	Obtain stats (sent and recv octet count):
		soap_get_logging_stats(soap, size_t *sent, size_t *recv);

gSOAP XML Web services tools
Copyright (C) 2000-2008, Robert van Engelen, Genivia Inc., All Rights Reserved.
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
Copyright (C) 2000-2008, Robert van Engelen, Genivia Inc., All Rights Reserved.
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

#ifndef LOGGING_H
#define LOGGING_H

#include "stdsoap2.h"

#ifdef __cplusplus
extern "C" {
#endif

#define LOGGING_ID "LOGGING-1.3"

extern const char logging_id[];

struct logging_data
{
  FILE *inbound;
  FILE *outbound;
  size_t stat_sent;
  size_t stat_recv;
  int (*fsend)(struct soap*, const char*, size_t); /* to save and use send callback */
  size_t (*frecv)(struct soap*, char*, size_t); /* to save and use recv callback */
};

int logging(struct soap *soap, struct soap_plugin *plugin, void *arg);
void soap_set_logging_inbound(struct soap *soap, FILE *fd);
void soap_set_logging_outbound(struct soap *soap, FILE *fd);
void soap_get_logging_stats(struct soap *soap, size_t *sent, size_t *recv);

#ifdef __cplusplus
}
#endif

#endif
