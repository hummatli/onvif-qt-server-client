/*
	xml-rpc-weblogs.c

	XML-RPC weblogUpdates.ping example in C

	See http://xmlrpc.scripting.com/weblogsCom for more details.

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
  struct param p[2];
  /* Set up method call */
  m.methodName = "weblogUpdates.ping";
  /* two parameters with string content */
  m.params.__size = 2;
  m.params.param = p;
  memset(p, 0, sizeof(p));
  p[0].value.__type = SOAP_TYPE__string;
  p[0].value.ref = "Scripting News";
  p[1].value.__type = SOAP_TYPE__string;
  p[1].value.ref = "http://www.scripting.com/";
  /* connect, send request, and receive response */
  if (methodCall(soap, "http://rpc.weblogs.com/RPC2", &m, &r))
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
  { /* print response parameter, check if first is a struct */
    if (r.params->param[0].value.__type == SOAP_TYPE__struct)
    { /* it is a struct with two members */
      struct _struct *s = r.params->param[0].value.ref;
      if (s->__size >= 2)
      { int i;
        for (i = 0; i < s->__size; i++)
        { if (!strcmp(s->member[i].name, "flerror"))
	  { if (s->member[i].value.__type == SOAP_TYPE__boolean)
	    { if ((*(_boolean*)s->member[i].value.ref) == 0)
	        printf("Weblog ping successful\n");
	      else
	        printf("Weblog ping failed\n");
	    }
	    else 
	      printf("XML-RPC response message format error: boolean value expected\n");
	  }
          if (!strcmp(s->member[i].name, "message"))
	  { if (s->member[i].value.__any)
	      printf("%s\n", s->member[i].value.__any);
	    else
	      printf("XML-RPC response message format error: string value expected\n");
	  }
        }
      }
      else
        printf("XML-RPC response message format error: struct with two members expected\n");
    }
    else
      printf("XML-RPC response message format error: struct expected\n");
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
   || soap_begin_send(soap)
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
