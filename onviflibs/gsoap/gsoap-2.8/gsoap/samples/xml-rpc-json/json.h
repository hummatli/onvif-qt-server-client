/*
	json.h
	
	JSON C++ support & stream JSON from/to XML-RPC

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

/// Send a value in JSON format to a stream
extern std::ostream& operator<<(std::ostream&, const struct value&);
extern int json_send(struct soap *soap, const struct value& v);

/// Receive a value in JSON format from a stream
extern std::istream& operator>>(std::istream&, struct value&);
extern int json_recv(struct soap *soap, struct value& v);

/// Client-side JSON-RPC call
extern int json_call(struct soap *soap, const char *endpoint, const struct value& in, struct value& out);
