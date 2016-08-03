/*
	simple_vector.h

	Defines the simple_vector<> template as an example on how to define
	custom containers that can be auto-serialized in XML with gSOAP.

	In order for the auto-generated XML serializers to work for templates,
	we must define at least these four methods:

	iterator begin();
	iterator end();
	size_t   size();
        iterator insert(iterator pos, const_reference val)

--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2001-2010, Robert van Engelen, Genivia, Inc. All Rights Reserved.
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

// declare the simple_vector<> template:
#include "stdsoap2.h"

template <class T>
class simple_vector
{
public:
  typedef T			  value_type;
  typedef value_type		* pointer;
  typedef const value_type	* const_pointer;
  typedef value_type		& reference;
  typedef const value_type	& const_reference;
  typedef pointer		  iterator;
  typedef const_pointer		  const_iterator;
protected:
  iterator			  start;
  iterator			  finish;
  size_t			  length;
public:
  				  simple_vector()	{ clear(); }
  				  ~simple_vector()	{ delete[] start; }
  void				  clear()		{ start = finish = NULL; }
/* the member functions below are required for (de)serialization of templates */
  iterator			  begin()		{ return start; }
  const_iterator		  begin() const		{ return start; }
  iterator			  end()			{ return finish; }
  const_iterator		  end() const		{ return finish; }
  size_t			  size() const		{ return length; }
  iterator			  insert(iterator pos, const_reference val)
  { if (!start)
      start = finish = new value_type[length = 4];
    else if (finish >= start + length)
    { iterator i = start;
      iterator j = new value_type[2 * length];
      start = j;
      finish = start + length;
      length *= 2;
      if (pos)
        pos = j + (pos - i);
      while (i != finish)
        *j++ = *i++;
    }
    if (pos && pos != finish)
    { iterator i = finish;
      iterator j = i - 1;
      while (j != pos)
        *i-- = *j--;
    }
    *finish++ = val;
    return pos;
  }
};
