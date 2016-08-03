/*	header.h

	Defines SOAP Header data structure shared by client and service modules

	Copyright (C) 2000-2002 Robert A. van Engelen. All Rights Reserved.
*/

//gsoap h schema namespace: http://websrv.cs.fsu.edu/~engelen/h.xsd

// h:authentication type of SOAP Header <h:credentials> element
struct h__authentication
{ @char *userid; // h:userid attribute
  @char *passwd; // h:passwd attribute
};

// SOAP Header elements
struct SOAP_ENV__Header
{ struct h__authentication *h__credentials; // <h:credentials>
};

