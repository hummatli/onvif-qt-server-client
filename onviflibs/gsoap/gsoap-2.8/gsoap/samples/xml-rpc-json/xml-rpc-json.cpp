
/*
	xml-rpc-json.cpp

	XML-RPC <=> JSON serialization example

	Requires xml-rpc.h, xml-rpc.cpp, json.h, and json.cpp

	Compile:
	soapcpp2 xml-rpc.h
	c++ xml-rpc-json.cpp xml-rpc.cpp json.cpp stdsoap2.cpp soapC.cpp

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
#include <sstream>

using namespace std;

int main()
{
  // set up context
  struct soap *ctx = soap_new1(SOAP_XML_INDENT|SOAP_C_UTFSTRING);
  // create a value
  value v(ctx);
  // create an input stream from a given string with JSON content
  istringstream in;
  in.str("[ [1, \"2\", 3.14, true], {\"name\": \"john\", \"age\": 24} ]");
  // parse JSON content
  in >> v;
  // write v in XML-RPC format to cout (soap_write_value is soapcpp2-generated)
  ctx->os = &cout;
  soap_write_value(ctx, &v);
  // let's change v's values:
  v[0][0] = (char*)v[0][0];   // convert int 1 to string "1"
  v[0][1] = (int)v[0][1];     // convert string "2" to int 2
  v[0][2] = (int)v[0][2];     // truncate 3.14 to int 3
  v[0].size(3);               // reset size to 3 to remove last entry
  v[1]["name"] = "mary";
  v[1]["age"] = 21;
  v[1]["married"] = true;
  // v[2] = deliberately skipped, which will show up as null
  v[3] = time(0);
  // display in JSON format
  cout << endl << "JSON output of modified value:" << endl << v << endl;
  // clean up
  soap_destroy(ctx);
  soap_end(ctx);
  soap_free(ctx);
  return 0;
}

/* Don't need a namespace table. We put an empty one here to avoid link errors */
struct Namespace namespaces[] = { {NULL, NULL} };
