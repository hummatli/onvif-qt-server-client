/*	env.h

	Defines gSOAP environment shared by client and service modules

	Imports SOAP Fault and SOAP Header structures, which will be
	shared by client and service modules. The Header structure
	should contain all fields required by the clients and services.

	Copyright (C) 2000-2003 Robert A. van Engelen, Genivia inc.
	All Rights Reserved.

	Compile:
	soapcpp2 -penv env.h
	c++ -c envC.cpp
	c++ -DWITH_NONAMESPACES -c stdsoap2.cpp

*/

#import "header.h"		// optional user-defined headers
#import "fault.h"		// optional user-defined fault details
