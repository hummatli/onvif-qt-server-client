/*
	xml-rpc-iters.h

	XML-RPC iterator definitions for C++

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

#ifndef XML_RPC_ITERS_H
#define XML_RPC_ITERS_H

#ifdef __cplusplus

/// iterates over _struct

class _struct_iterator
{
private:
  struct member*	member;
public:
  			_struct_iterator();
  			_struct_iterator(const struct _struct*);
  bool			operator==(const _struct_iterator&) const;
  bool			operator!=(const _struct_iterator&) const;
  const char*		index() const;		///< get member name
  struct value&		operator*() const;	///< get member value
  _struct_iterator&	operator++();
  _struct_iterator&	operator+=(int);
};

/// iterates over _array

class _array_iterator
{
private:
  struct value*		start;
  struct value*		value;
public:
  			_array_iterator();
  			_array_iterator(const struct _array*);
  bool			operator==(const _array_iterator&) const;
  bool			operator!=(const _array_iterator&) const;
  int 			index() const;		///< get array index
  struct value&		operator*() const;	///< get array value
  _array_iterator&	operator++();
  _array_iterator&	operator+=(int);
};

/// iterates over params

class params_iterator
{
private:
  struct param*		start;
  struct param*		param;
public:
  			params_iterator();
  			params_iterator(const struct params*);
  bool			operator==(const params_iterator&) const;
  bool			operator!=(const params_iterator&) const;
  int			index() const;		///< get parameter index
  struct value&		operator*() const;	///< get parameter value
  params_iterator&	operator++();
  params_iterator&	operator+=(int);
};

#endif
#endif
