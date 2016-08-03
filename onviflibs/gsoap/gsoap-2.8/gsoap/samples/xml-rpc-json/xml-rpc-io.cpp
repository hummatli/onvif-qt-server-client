/*
	xml-rpc-io.cpp

	XML-RPC io stream operations on XML-RPC values

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
#include "xml-rpc-io.h"

std::ostream& operator<<(std::ostream& o, const struct value& v)
{ std::ostream *os = v.soap->os;
  v.soap->os = &o;
  soap_write_value(v.soap, &v);
  v.soap->os = os;
  return o;
}

std::istream& operator>>(std::istream& i, struct value& v)
{ if (!v.soap)
    v.soap = soap_new();
  std::istream *is = v.soap->is;
  v.soap->is = &i;
  soap_read_value(v.soap, &v);
  v.soap->is = is;
  return i;
}

