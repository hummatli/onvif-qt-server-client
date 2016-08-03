/*
	xml-rpc-currentTime.c

	XML-RPC currenTime (C version)

	Prints current time.

	Compile:
	soapcpp2 -c xml-rpc.h
	cc xml-rpc-currentTime.c stdsoap2.c soapC.c

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2008, Robert van Engelen, Genivia, Inc. All Rights Reserved.
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

int methodCall(struct soap *soap, const char *URL, struct methodCall *m, struct methodResponse *r);

int main()
{ struct soap *soap = soap_new();
  struct methodCall m;
  struct methodResponse r;
  /* Set up method call */
  m.methodName = "currentTime.getCurrentTime";
  /* no parameters */
  m.params.__size = 0;
  /* no namespaces */
  soap->namespaces = NULL;
  /* no SOAP encodingStyle */
  soap->encodingStyle = NULL;
  /* connect, send request, and receive response */
  if (methodCall(soap, "http://www.cs.fsu.edu/~engelen/currentTime.cgi", &m, &r))
  { soap_print_fault(soap, stderr);
    exit(soap->error);
  }
  if (r.fault)
  { /* print fault on stdout */
    soap_begin_send(soap);
    soap_put_fault(soap, r.fault, "fault", NULL);
    soap_end_send(soap);
  }
  else if (r.params && r.params->__size == 1)
  { /* print response parameter */
    if (r.params->param[0].value.__type == SOAP_TYPE__dateTime_DOTiso8601)
      printf("Time = %s\n", (char*)r.params->param[0].value.ref);
    else
      printf("Time not provided\n");
  }
  soap_end(soap);
  soap_done(soap);
  free(soap);
  return 0;
}

int methodCall(struct soap *soap, const char *URL, struct methodCall *m, struct methodResponse *r)
{ /* no namespaces */
  soap->namespaces = NULL;
  /* no SOAP encodingStyle */
  soap->encodingStyle = NULL;
  /* connect, send request, and receive response */
  if (soap_connect(soap, URL, NULL)
   || soap_put_methodCall(soap, m, "methodCall", NULL)
   || soap_end_send(soap)
   || soap_begin_recv(soap)
   || !soap_get_methodResponse(soap, r, "methodResponse", NULL)
   || soap_end_recv(soap))
    return soap_closesock(soap); /* closes socket and returns soap->error */
  soap_closesock(soap);
  return SOAP_OK;
}

/* Don't need a namespace table. We put an empty one here to avoid link errors */
struct Namespace namespaces[] = { {NULL, NULL} };
