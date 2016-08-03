/*
	dom2calc.cpp

	Example DOM processing for calculator service

	soapcpp2 -Iimport dom2calc.h
	cc -o dom2calc dom2calc.cpp stdsoap2.cpp soapC.cpp dom.cpp

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

const char server[] = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";

int main(int argc, char **argv)
{
  struct soap *soap = soap_new1(SOAP_DOM_NODE | SOAP_XML_INDENT); /* deserialize type nodes */

  if (argc <= 3)
  {
    std::cerr << "Usage: dom2calc [add|sub|mul|div|pow] <num> <num>" << std::endl;
    exit(1);
  }

  /* Create elements and attributes for request message */
  soap_dom_element envelope(soap, namespaces[0].ns, "Envelope");
  soap_dom_element body(soap, namespaces[0].ns, "Body");
  soap_dom_attribute encodingStyle(soap, namespaces[0].ns, "encodingStyle", namespaces[1].ns);
  soap_dom_element request(soap, namespaces[4].ns, argv[1]);
  soap_dom_element a(soap, NULL, "a");
  soap_dom_element b(soap, NULL, "b");

  /* Compose the request message */
  envelope.add(body);
  body.add(encodingStyle).add(request);
  request.add(a).add(b);

  xsd__double arg1 = strtod(argv[2], NULL);
  xsd__double arg2 = strtod(argv[3], NULL);

  a.set(&arg1, SOAP_TYPE_xsd__double);
  b.set(&arg2, SOAP_TYPE_xsd__double);

  std::cout << "** Request message: " << std::endl << envelope << std::endl;

  /* Create response DOM */
  soap_dom_element response(soap);

  /* Connect to server and use xsd__anyType serializers */
  if (soap_connect(soap, server, "")
   || soap_put_xsd__anyType(soap, &envelope, NULL, NULL)
   || soap_end_send(soap)
   || soap_begin_recv(soap)
   || NULL == soap_get_xsd__anyType(soap, &response, NULL, NULL)
   || soap_end_recv(soap)
   || soap_closesock(soap))
  {
    soap_stream_fault(soap, std::cerr);
  }
  else
  {
    std::cout << "** Response message:" << std::endl << response << std::endl;

    for (soap_dom_element::iterator walker = response.find(SOAP_TYPE__result); walker != response.end(); ++walker)
      std::cout << std::endl << "Result = " << *(_result*)(*walker).node << std::endl;
  }

  /* Delete deserialized object and dealloc temporary data */
  soap_destroy(soap);
  soap_end(soap);

  /* Delete context */
  soap_free(soap);

  return 0;
}

SOAP_NMAC struct Namespace namespaces[] =
{
  {"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope"},
  {"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding"},
  {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance"},
  {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema"},
  {"ns", "urn:calc"},
  {NULL, NULL}
};
