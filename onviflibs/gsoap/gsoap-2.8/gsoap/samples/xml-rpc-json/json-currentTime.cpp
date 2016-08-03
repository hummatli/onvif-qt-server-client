/*
	json-currentTime.cpp

	JSON currenTime (C++ version)

	Prints current time.

	Compile:
	soapcpp2 xml-rpc.h
	c++ json-currentTime.cpp xml-rpc.cpp json.cpp stdsoap2.cpp soapC.cpp

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
#include "json.h"

using namespace std;

int main()
{
  soap *ctx = soap_new1(SOAP_C_UTFSTRING);
  ctx->send_timeout = 10; // 10 sec, stop if server is not accepting msg
  ctx->recv_timeout = 10; // 10 sec, stop if server does not respond in time

  value request(ctx), response(ctx);

  // make the call and get response params
  request = "getCurrentTime";
  if (json_call(ctx, "http://www.cs.fsu.edu/~engelen/currentTimeJSON.cgi", request, response))
    soap_print_fault(ctx, stderr);
  else if (response.is_string()) // JSON does not support a dateTime value: this is a string
    cout << "Time = " << response << endl;
  else // error?
    cout << "Error: " << response << endl;

  // clean up
  soap_destroy(ctx);
  soap_end(ctx);
  soap_free(ctx);
  return 0;
}

/* Don't need a namespace table. We put an empty one here to avoid link errors */
struct Namespace namespaces[] = { {NULL, NULL} };
