/*
	xml-rpc.cpp

	C++ API for XML-RPC/JSON data management

	Note: 
	XML-RPC declarations are given in the gSOAP header file xml-rpc.h,
	which is used to generate XML-RPC serializers (soapH.h, soapStub.h, and
	soapC.cpp) with:
	> soapcpp2 -CSL xml-rpc.h
	Iterators to walk the tree data are declared in xml-rpc-iters.h

	Client XML-RPC calling sequence
	-------------------------------

	// get XML-RPC serializers (link with soapC.cpp)
	#include "soapH.h"
	// get XML-RPC I/O operations (link with xml-rpc-io.cpp)
	#include "xml-rpc-io.h"

	// set up context (indent XML is optional)
	soap *ctx = soap_new1(SOAP_XML_INDENT);
	// define method call
	methodCall myMethod(ctx, "<endpoint-URL>", "<method-name>");
	// populate input parameters
	myMethod[0] = ...; // first param
	myMethod[1] = ...; // second param
	...
	// make the call and get the response parameters
	params result = myMethod();
	// error?
	if (myMethod.error())
	  soap_print_fault(ctx, stderr);
	else if (result.empty())
	  cout << myMethod.fault() << endl;
	else
	  for (params::iterator arg = result.begin(); arg != result.end(); ++arg)
	    cout << *arg << endl;
	// delete all
	soap_destroy(ctx);
	soap_end(ctx);
	soap_free(ctx);

	Compile with -DWITH_NONAMESPACES to omit global namespaces[] definition
	or add to your code:

	struct Namespace namespaces[] = { {NULL, NULL} };

        How to use XML-RPC data types?
	------------------------------

        A value is stored in a 'struct value'. This struct has the following
        methods to query its content:
        bool is_array()
        bool is_base64()
        bool is_bool()
        bool is_double()
        bool is_false()
        bool is_int()
        bool is_string()
        bool is_struct()
        bool is_true()
        bool is_dateTime()

        To set a value:
        value v(soap); // the soap struct is used for memory management
        if (...)
          v[0] = 1; // assign 1 to first array element
        else if (...)
          v = new _base64(soap, 8, (unsigned char*)"raw data");
        else if (...)
          v = true; // boolean
        else if (...)
          v = 12.3; // double
        else if (...)
          v = 1234; // int
        else if (...)
          v = "xy"; // string
        else if (...)                                         
          v["name"] = "Abe"; // struct member 'name' = "Abe"
        else if (...)
          v = clock(); // dateTime

	To get a value:
	if (v.is_array())
	{ _array& a = v;
	  for (_array::iterator i = a.begin(); i != a.end(); ++i)
	    cout << (*i) << ", ";
	}
	else if (v.is_base64())
	{ _base64& b = v;
	  ... = b.size();
	  ... = b.ptr();
	}
	else if (v.is_bool())
	{ bool b = v.is_true();
	}
	else if (v.is_double())
	{ double n = v;
	}
	else if (v.is_int())
	{ int n = v;
	}
	else if (v.is_string())
	{ _string s = v; // note: _string is char* by default
	}
	else if (v.is_struct())
	{ _struct& s = v;
	  for (_struct::iterator i = s.begin(); i != s.end(); ++i)
	    cout << (*i) << ", ";
	}
	else if (v.is_dateTime())
	{ time_t = v;
	}

	Unicode strings
	---------------

	Use SOAP_C_UTFSTRING flag to enable UTF8-encoded char* strings:
	soap *ctx = soap_new1(SOAP_XML_INDENT | SOAP_C_UTFSTRING);

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

static char* s_copy_l(struct soap *soap, const char *s);
static char* s_copy_l(struct soap *soap, const wchar_t *s);
static int size2k(int n);

value::value()
{ }

value::value(struct soap *soap)
{ soap_default_value(soap, this);
}

value::value(struct soap *soap, struct _array &a)
{ soap_default_value(soap, this);
  *this = a;
}

value::value(struct soap *soap, _base64 &b)
{ soap_default_value(soap, this);
  *this = b;
}

value::value(struct soap *soap, bool b)
{ soap_default_value(soap, this);
  *this = b;
}

value::value(struct soap *soap, _string s)
{ soap_default_value(soap, this);
  *this = s;
}

value::value(struct soap *soap, double d)
{ soap_default_value(soap, this);
  *this = d;
}

value::value(struct soap *soap, int n)
{ soap_default_value(soap, this);
  *this = n;
}

value::value(struct soap *soap, time_t t)
{ soap_default_value(soap, this);
  *this = t;
}

value::value(struct soap *soap, struct _struct &r)
{ soap_default_value(soap, this);
  *this = r;
}

void value::size(int n)
{ if (__type == SOAP_TYPE__array)
    ((_array*)ref)->size(n);
  else
  { __type = SOAP_TYPE__array;
    __any = NULL;
    ref = soap_malloc(soap, sizeof(struct _array));
    soap_default__array(soap, (_array*)ref);
    ((_array*)ref)->size(n);
  }
}

int value::size() const
{ if (__type == SOAP_TYPE__array)
    return ((_array)(*this)).size();
  if (__type == SOAP_TYPE__struct)
    return ((_struct)(*this)).size();
  return 0;
}

bool value::empty() const
{ if (__type == SOAP_TYPE__array)
    return ((_array&)(*this)).empty();
  if (__type == SOAP_TYPE__struct)
    return ((_struct&)(*this)).empty();
  return false;
}

bool value::is_array() const
{ return __type == SOAP_TYPE__array;
}

bool value::is_base64() const
{ return __type == SOAP_TYPE__base64;
}

bool value::is_bool() const
{ return __type == SOAP_TYPE__boolean;
}

bool value::is_double() const
{ return __type == SOAP_TYPE__double;
}

bool value::is_false() const
{ return __type == SOAP_TYPE__boolean && (bool)*(_boolean*)ref == false;
}

bool value::is_int() const
{ return __type == SOAP_TYPE__int || __type == SOAP_TYPE__i4;
}

bool value::is_struct() const
{ return __type == SOAP_TYPE__struct;
}

bool value::is_string() const
{ return __type == SOAP_TYPE__string || (__any && *__any);
}

bool value::is_true() const
{ return __type == SOAP_TYPE__boolean && (bool)*(_boolean*)ref == true;
}

bool value::is_dateTime() const
{ return __type == SOAP_TYPE__dateTime_DOTiso8601;
}

value::operator struct _array&()
{ if (__type == SOAP_TYPE__array)
    return *(struct _array*)ref;
  struct _array *a = soap_new__array(soap, -1);
  soap_default__array(soap, a);
  return *a;
}

value::operator const struct _array&() const
{ if (__type == SOAP_TYPE__array)
    return *(const struct _array*)ref;
  struct _array *a = soap_new__array(soap, -1);
  soap_default__array(soap, a);
  return *a;
}

value::operator struct _base64&()
{ if (__type == SOAP_TYPE__base64)
    return *(struct _base64*)ref;
  char *s = *this;
  struct _base64 *base64 = soap_new__base64(soap, -1);
  soap_default__base64(soap, base64);
  base64->__ptr = (unsigned char*)s;
  base64->__size = (int)strlen(s);
  return *base64;
}

value::operator const struct _base64&() const
{ if (__type == SOAP_TYPE__base64)
    return *(const struct _base64*)ref;
  const char *s = *this;
  struct _base64 *base64 = soap_new__base64(soap, -1);
  soap_default__base64(soap, base64);
  base64->__ptr = (unsigned char*)s;
  base64->__size = (int)strlen(s);
  return *base64;
}

value::operator char*() const
{ if (__type == SOAP_TYPE__string || __type == SOAP_TYPE__dateTime_DOTiso8601)
    return (char*)ref;
  if (__type == SOAP_TYPE__base64)
    return (char*)soap_s2base64(soap, (unsigned char*)((_base64*)ref)->ptr(), NULL, ((_base64*)ref)->size());
  if (__type == SOAP_TYPE__i4 || __type == SOAP_TYPE__int)
    return (char*)soap_strdup(soap, soap_int2s(soap, (int)*(int*)ref));
  if (__type == SOAP_TYPE__double)
    return (char*)soap_strdup(soap, soap_double2s(soap, (double)*(double*)ref));
  if (__type == SOAP_TYPE__boolean)
    return (char*)(is_true() ? "true" : "false");
  if (__any)
    return (char*)__any;
  return (char*)"";
}

value::operator std::string() const
{ const char *s = *this;
  return std::string(s);
}

value::operator wchar_t*() const
{ const char *s = *this;
  wchar_t *t = NULL;
  soap_s2wchar(soap, s, &t, 0, 0);
  soap->error = SOAP_OK;
  return t;
}

value::operator std::wstring() const
{ const char *s = *this;
  wchar_t *t = NULL;
  soap_s2wchar(soap, s, &t, 0, 0);
  soap->error = SOAP_OK;
  return std::wstring(t);
}

value::operator double() const
{ if (__type == SOAP_TYPE__int)
    return (double)*(_int*)ref;
  if (__type == SOAP_TYPE__i4)
    return (double)*(_i4*)ref;
  if (__type == SOAP_TYPE__double)
    return (double)*(_double*)ref;
  double r = 0.0;
  const char *s = *this;
  soap_s2double(soap, s, &r);
  soap->error = SOAP_OK;
  return r;
}

value::operator int() const
{ if (__type == SOAP_TYPE__int)
    return (int)*(_int*)ref;
  if (__type == SOAP_TYPE__i4)
    return (int)*(_i4*)ref;
  if (__type == SOAP_TYPE__double)
    return (int)(*(_double*)ref);
  int r = 0;
  const char *s = *this;
  soap_s2int(soap, s, &r);
  soap->error = SOAP_OK;
  return r;
}

value::operator time_t() const
{ time_t t = 0;
  if (__type == SOAP_TYPE__string || __type == SOAP_TYPE__dateTime_DOTiso8601)
  { if (soap_s2dateTime(soap, (const char*)ref, &t))
    { soap->error = SOAP_OK;
      return 0;
    }
  }
  return t;
}

value::operator struct _struct&()
{ if (__type == SOAP_TYPE__struct)
    return *(struct _struct*)ref;
  struct _struct *r = soap_new__struct(soap, -1);
  soap_default__struct(soap, r);
  return *r;
}

value::operator const struct _struct&() const
{ if (__type == SOAP_TYPE__struct)
    return *(const struct _struct*)ref;
  struct _struct *r = soap_new__struct(soap, -1);
  soap_default__struct(soap, r);
  return *r;
}

struct value& value::operator[](int n)
{ struct _array& a = *this;
  __type = SOAP_TYPE__array;
  __any = NULL;
  ref = &a;
  return a[n];
}

struct value& value::operator[](const char *s)
{ struct _struct& r = *this;
  __type = SOAP_TYPE__struct;
  __any = NULL;
  ref = &r;
  return r[s];
}

struct _array& value::operator=(const struct _array& a)
{ __type = SOAP_TYPE__array;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(struct _array));
  *(_array*)ref = a;
  return *(_array*)ref;
}

_base64& value::operator=(const _base64& b)
{ __type = SOAP_TYPE__base64;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(struct _base64));
  *(_base64*)ref = b;
  return *(_base64*)ref;
}

bool value::operator=(bool b)
{ __type = SOAP_TYPE__boolean;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(_boolean));
  *(_boolean*)ref = (_boolean)b;
  return b;
}

static char* s_copy_l(struct soap *soap, const char *s)
{ return soap_strdup(soap, s);
}

static char* s_copy_l(struct soap *soap, const wchar_t *s)
{ return (char*)soap_wchar2s(soap, s);
#if 0
  size_t n = sizeof(wchar_t) * (wcslen(s) + 1);
  wchar_t *t = (wchar_t*)soap_malloc(soap, n);
  wcscpy(t, s);
  return t;
#endif
}

const char* value::operator=(const char* s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s);
  return s;
}

char* value::operator=(char* s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s);
  return s;
}

char* value::operator=(const std::string& s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s.c_str());
  return (char*)ref;
}

const char* value::operator=(const wchar_t* s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s);
  return (char*)ref;
}

char* value::operator=(wchar_t* s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s);
  return (char*)ref;
}

char* value::operator=(const std::wstring& s)
{ __type = SOAP_TYPE__string;
  __any = NULL;
  ref = s_copy_l(soap, s.c_str());
  return (char*)ref;
}

double value::operator=(double d)
{ __type = SOAP_TYPE__double;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(_double));
  *(_double*)ref = (_double)d;
  return d;
}

int value::operator=(int n)
{ __type = SOAP_TYPE__int;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(_int));
  *(_int*)ref = (_int)n;
  return n;
}

struct _struct& value::operator=(const struct _struct& r)
{ __type = SOAP_TYPE__struct;
  __any = NULL;
  ref = soap_malloc(soap, sizeof(struct _struct));
  *(_struct*)ref = r;
  return *(_struct*)ref;
}

time_t value::operator=(time_t t)
{ __type = SOAP_TYPE__dateTime_DOTiso8601;
  __any = NULL;
  ref = soap_strdup(soap, soap_dateTime2s(soap, t));
  return t;
}

_struct::_struct()
{ }

_struct::_struct(struct soap *soap)
{ soap_default__struct(soap, this);
}

_struct::_struct(struct soap *soap, int len)
{ soap_default__struct(soap, this);
  __size = len;
  member = soap_new_member(soap, __size);
  for (int i = 0; i < __size; i++)
    soap_default_member(soap, &member[i]);
}

bool _struct::empty() const
{ return __size == 0;
}

int _struct::size() const
{ return __size;
}

struct value& _struct::operator[](const char *s)
{ int i = 0;
  if (!member)
  { int newsize = size2k(__size = 1);
    member = soap_new_member(soap, newsize);
    s2k = 1;
    for (i = 0; i < newsize; i++)
      soap_default_member(soap, &member[i]);
  }
  else
  { for (i = 0; i < __size; i++)
    { if (!strcmp(member[i].name, s))
        return member[i].value;
    }
    int oldsize = __size;
    int newsize = size2k(++__size);
    if (s2k)
      oldsize = size2k(oldsize);
    if (oldsize < newsize)
    { struct member *newmember = soap_new_member(soap, newsize);
      for (i = 0; i < oldsize; i++)
        newmember[i] = member[i];
      for (; i < newsize; i++)
        soap_default_member(soap, &newmember[i]);
      soap_unlink(soap, member);
      delete[] member;
      member = newmember;
      s2k = 1;
    }
  }
  i = __size - 1;
  member[i].name = soap_strdup(soap, s);
  soap_default_value(soap, &member[i].value);
  return member[i].value;
}

_struct_iterator _struct::begin()
{ _struct_iterator iter(this);
  return iter;
}

_struct_iterator _struct::end()
{ _struct_iterator iter(this);
  iter += __size;
  return iter;
}

_array::_array()
{ }

_array::_array(struct soap *soap)
{ soap_default__array(soap, this);
}

_array::_array(struct soap *soap, int len)
{ soap_default__array(soap, this);
  data.__size = len;
  data.value = soap_new_value(soap, data.__size);
  for (int i = 0; i < data.__size; i++)
    soap_default_value(soap, &data.value[i]);
}

bool _array::empty() const
{ return data.__size == 0;
}

int _array::size() const
{ return data.__size;
}

void _array::size(int n)
{ if (data.__size > n)
    data.__size = n;
  else
    (void)(*this)[n];
}

struct value& _array::operator[](int n)
{ if (!data.value)
  { int newsize = size2k(data.__size = n + 1);
    data.value = soap_new_value(soap, newsize);
    data.s2k = 1;
    for (int i = 0; i < newsize; i++)
      soap_default_value(soap, &data.value[i]);
  }
  else if (data.__size <= n)
  { int oldsize = data.__size;
    int newsize = size2k(data.__size = n + 1);
    if (data.s2k)
      oldsize = size2k(oldsize);
    if (oldsize < newsize)
    { struct value *newvalue = soap_new_value(soap, newsize);
      int i;
      for (i = 0; i < oldsize; i++)
        newvalue[i] = data.value[i];
      for (; i < newsize; i++)
        soap_default_value(soap, &newvalue[i]);
      soap_unlink(soap, data.value);
      delete[] data.value;
      data.value = newvalue;
      data.s2k = 1;
    }
  }
  return data.value[n];
}

_array_iterator _array::begin()
{ _array_iterator iter(this);
  return iter;
}

_array_iterator _array::end()
{ _array_iterator iter(this);
  iter += data.__size;
  return iter;
}

_base64::_base64()
{ }

_base64::_base64(struct soap *soap)
{ soap_default__base64(soap, this);
}

_base64::_base64(struct soap *soap, int n, unsigned char *p)
{ soap_default__base64(soap, this);
  __size = n;
  __ptr = p;
}

int _base64::size() const
{ return __size;
}

unsigned char* _base64::ptr()
{ return __ptr;
}

void _base64::size(int n)
{ __size = n;
}

void _base64::ptr(unsigned char *p)
{ __ptr = p;
}

params::params()
{ }

params::params(struct soap *soap)
{ soap_default_params(soap, this);
}

params::params(struct soap *soap, int len)
{ soap_default_params(soap, this);
  __size = len;
  param = soap_new_param(soap, __size);
  for (int i = 0; i < __size; i++)
    soap_default_param(soap, &param[i]);
}

bool params::empty() const
{ return __size == 0;
}

int params::size() const
{ return __size;
}

struct value& params::operator[](int n)
{ if (!param)
  { int newsize = size2k(__size = n + 1);
    param = soap_new_param(soap, newsize);
    s2k = 1;
    for (int i = 0; i < newsize; i++)
      soap_default_param(soap, &param[i]);
  }
  else if (__size <= n)
  { int oldsize = __size;
    int newsize = size2k(__size = n + 1);
    if (s2k)
      oldsize = size2k(oldsize);
    if (oldsize < newsize)
    { struct param *newparam = soap_new_param(soap, newsize);
      int i;
      for (i = 0; i < oldsize; i++)
        newparam[i] = param[i];
      for (; i < newsize; i++)
        soap_default_param(soap, &newparam[i]);
      soap_unlink(soap, param);
      delete[] param;
      param = newparam;
      s2k = 1;
    }
  }
  return param[n].value;
}

params_iterator params::begin()
{ params_iterator iter(this);
  return iter;
}

params_iterator params::end()
{ params_iterator iter(this);
  iter += __size;
  return iter;
}

methodCall::methodCall()
{ }

methodCall::methodCall(struct soap *soap)
{ soap_default_methodCall(soap, this);
}

methodCall::methodCall(struct soap *soap, const char *endpoint, const char *name)
{ soap_default_methodCall(soap, this);
  methodName = soap_strdup(soap, name);
  methodEndpoint = soap_strdup(soap, endpoint);
  methodResponse = NULL;
}

struct value& methodCall::operator[](int n)
{ return params[n];
}

struct params& methodCall::operator()()
{ if (send() == SOAP_OK)
  { if (!methodResponse)
      methodResponse = soap_new_methodResponse(soap, -1);
    if (methodResponse->recv() != SOAP_OK)
      methodResponse = NULL;
    soap_closesock(soap);
  }
  else
    methodResponse = NULL;
  if (methodResponse && methodResponse->params)
    return *methodResponse->params;
  struct params *params = soap_new_params(soap, -1);
  soap_default_params(soap, params);
  return *params;
}

struct params& methodCall::operator()(const struct params& args)
{ /* parameters */
  params = args;
  /* invoke */
  return (*this)();
}

struct params& methodCall::response()
{ if (!methodResponse)
  { methodResponse = soap_new_methodResponse(soap, -1);
    soap_default_methodResponse(soap, methodResponse);
  }
  if (!methodResponse->params)
  { methodResponse->params = soap_new_params(soap, -1);
    soap_default_params(soap, methodResponse->params);
  }
  return *methodResponse->params;
}

struct value& methodCall::fault()
{ if (methodResponse)
    return methodResponse->get_fault();
  struct value *value = soap_new_value(soap, -1);
  soap_default_value(soap, value);
  return *value;
}

const char* methodCall::name() const
{ if (methodName)
    return methodName;
  return "";
}

int methodCall::error() const
{ return soap->error;
}

int methodCall::send()
{ /* no namespaces */
  soap->namespaces = NULL;
  /* no SOAP encodingStyle */
  soap->encodingStyle = NULL;
  /* content length (needed for HTTP non-chunked) */
  soap_begin_count(soap);
  if (soap->mode & SOAP_IO_LENGTH)
    soap_put_methodCall(soap, this, "methodCall", NULL);
  soap_end_count(soap);
  /* connect and send request */
  if (soap_connect(soap, methodEndpoint, NULL)
   || soap_put_methodCall(soap, this, "methodCall", NULL)
   || soap_end_send(soap))
    return soap->error;
  return SOAP_OK;
}

int methodCall::recv()
{ if (soap_begin_recv(soap)
   || !soap_get_methodCall(soap, this, "methodCall", NULL)
   || soap_end_recv(soap))
    return soap->error;
  return SOAP_OK;
}

methodResponse::methodResponse()
{ }

methodResponse::methodResponse(struct soap *soap)
{ soap_default_methodResponse(soap, this);
}

struct value& methodResponse::operator[](int n)
{ if (!params)
  { params = soap_new_params(soap, -1);
    soap_default_params(soap, params);
  }
  return (*params)[n];
}

struct value& methodResponse::get_fault()
{ if (!fault)
  { fault = soap_new_fault(soap, -1);
    soap_default_fault(soap, fault);
  }
  return fault->value;
}

struct value& methodResponse::set_fault(const char* s)
{ struct value* value = soap_new_value(soap, -1);
  soap_default_value(soap, value);
  *value = s;
  return get_fault() = *value;
}

struct value& methodResponse::set_fault(struct value& v)
{ return get_fault() = v;
}

int methodResponse::send()
{ /* no namespaces */
  soap->namespaces = NULL;
  /* no SOAP encodingStyle */
  soap->encodingStyle = NULL;
  /* content length */
  soap_begin_count(soap);
  if (soap->mode & SOAP_IO_LENGTH)
    soap_put_methodResponse(soap, this, "methodResponse", NULL);
  soap_end_count(soap);
  /* send response */
  if (soap_response(soap, SOAP_OK)
   || soap_put_methodResponse(soap, this, "methodResponse", NULL)
   || soap_end_send(soap))
    return soap->error;
  return SOAP_OK;
}

int methodResponse::recv()
{ if (soap_begin_recv(soap)
   || !soap_get_methodResponse(soap, this, "methodResponse", NULL)
   || soap_end_recv(soap))
    return soap->error;
  return SOAP_OK;
}

_array_iterator::_array_iterator()
{ value = start = NULL;
}

_array_iterator::_array_iterator(const struct _array* a)
{ value = start = a->data.value;
}

bool _array_iterator::operator==(const _array_iterator& that) const
{ return this->value == that.value;
}

bool _array_iterator::operator!=(const _array_iterator& that) const
{ return this->value != that.value;
}

int _array_iterator::index() const
{ return value - start;
}

struct value& _array_iterator::operator*() const
{ return *value;
}

_array_iterator& _array_iterator::operator++()
{ value++;
  return *this;
}

_array_iterator& _array_iterator::operator+=(int step)
{ value += step;
  return *this;
}

_struct_iterator::_struct_iterator()
{ member = NULL;
}

_struct_iterator::_struct_iterator(const struct _struct* s)
{ member = s->member;
}

bool _struct_iterator::operator==(const _struct_iterator& that) const
{ return this->member == that.member;
}

bool _struct_iterator::operator!=(const _struct_iterator& that) const
{ return this->member != that.member;
}

const char* _struct_iterator::index() const
{ return member->name;
}

struct value& _struct_iterator::operator*() const
{ return member->value;
}

_struct_iterator& _struct_iterator::operator++()
{ member++;
  return *this;
}

_struct_iterator& _struct_iterator::operator+=(int step)
{ member += step;
  return *this;
}

params_iterator::params_iterator()
{ start = param = NULL;
}

params_iterator::params_iterator(const struct params* s)
{ start = param = s->param;
}

bool params_iterator::operator==(const params_iterator& that) const
{ return this->param == that.param;
}

bool params_iterator::operator!=(const params_iterator& that) const
{ return this->param != that.param;
}

int params_iterator::index() const
{ return param - start;
}

struct value& params_iterator::operator*() const
{ return param->value;
}

params_iterator& params_iterator::operator++()
{ param++;
  return *this;
}

params_iterator& params_iterator::operator+=(int step)
{ param += step;
  return *this;
}

static int size2k(int n)
{ int k = 2;
  while (k < n)
    k *= 2;
  return k;
}
