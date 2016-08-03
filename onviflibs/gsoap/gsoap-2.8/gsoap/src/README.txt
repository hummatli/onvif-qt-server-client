The gSOAP 'soapcpp2' source-to-source code compiler

INSTRUCTIONS

The gSOAP soapcpp2 tool translates annotated C/C++ header files with interface
defitions for services and clients to service and client implementation code.
It also maps the C/C++ types to XML types, with the ability to generate XML
schema and WSDL documents.

When starting from WSDL and/or XML schemas, first use the gSOAP 'wsdl2h' tool
to translate these into C/C++ header file with interface definitions. Then use
'soapcpp2' to translate these into implementation code.

See also the README.txt in the 'wsdl' directory and documentation on the use of
'wsdl2h' with 'soapcpp2'.

CONTENTS

This part of the distribution contains the following files:

README.txt	This file
MakefileManual	Extra makefile when autoconf/automake fail to produce one
soapcpp2.h	Main header file
soapcpp2.c	Main application
symbol2.c	Symbol table handling and code generation module
error2.h	Header file for error2.c
error2.c	Error handling routines
init2.c		Compiler symbol table initialization
soapcpp2_lex.l	Flex/Lex tokens
soapcpp2_yacc.y	Yacc/Bison grammar

INSTALLATION

Use './configure' and 'make' in the root directory, as explained in the
installation instructions.

To build 'soapcpp2' when autoconf/automake fail, use:

	make -f MakefileManual

The above command assumes you have Bison and Flex installed. To use Yacc, please
edit MakefileManual and change as follows:

YACC=yacc -d -v -s soapcpp2_yacc
CMFLAGS=-DWITH_YACC -DWITH_FLEX

If you do not have the Bison tool, please download and install it from here:

	http://www.gnu.org/software/bison/

If you do not have the Flex tool, please download and install it from here:

      	http://flex.sourceforge.net

QNX INSTALLATION

On QNX the bison.simple file is located in $QNX_HOST/usr/share/bison.simple
Update your .profile to include:

export BISON_SIMPLE=$QNX_HOST/usr/share/bison/bison.simple 
export BISON_HAIRY=$QNX_HOST/usr/share/bison/bison.hairy 

WIN32 INSTALLATION

You need to install Flex and Bison to build soapcpp2.

An MSN article explains how to do this with MS VS2005:

http://msdn.microsoft.com/en-us/library/aa730877(VS.80).aspx#vccustombr_topic3

The older Bison v1.6 can crash on Win32 systems if YYINITDEPTH is too small:
Compile with /DYYINITDEPTH=5000

COMMAND LINE OPTIONS

-1      generate SOAP 1.1 bindings
-2      generate SOAP 1.2 bindings
-0      no SOAP bindings, use REST
-C	generate client-side code only
-S	generate server-side code only
-T	generate server auto-test code
-L	don't generate soapClientLib/soapServerLib
-a	use SOAPAction with WS-Addressing to invoke server-side operations
-A	require SOAPAction to invoke server-side operations
-b	serialize byte arrays char[N] as string
-c      generate C source code
-dpath  use path to save files
-e	generate SOAP RPC encoding style bindings (also use -1 or -2)
-fN	file split of N XML serializer implementations per file (N>=10)
-h	display help info
-Ipath  use path(s) for #import (paths separated with ':', or ';' for windows)
-i      generate C++ service proxies and objects inherited from soap struct
-j      generate C++ service proxies and objects that share a soap struct
-k      generate data structure walkers (experimental)
-l      generate linkable modules (experimental)
-m      generate Matlab(tm) code for MEX compiler
-n      use service name to rename service functions and namespace table
-pname  save files with new prefix name instead of 'soap'
-Qname  use name as the C++ namespace for decls, including custom serializers
-qname  use name as the C++ namespace of all declarations
-s      generate deserialization code with strict XML validation checks
-t      generate code for fully xsi:type typed SOAP/XML messaging
-u	uncomment comments in WSDL/schema output by suppressing XML comments
-v	display version info
-w	don't generate WSDL and schema files
-x	don't generate sample XML message files
-y	include C/C++ type access information in sample XML messages
-z1	generate deprecated old-style C++ service proxies and objects
-z2	compatibility with 2.7.x: omit XML output for NULL pointers
infile	header file to parse (or stdin)

DOCUMENTATION

See soapdoc2.pdf for documentation.

LICENSE

The gSOAP 'soapcpp2' tool and (generated) source code are released under GPL or
a commercial license. The commercial license is available from Genivia.
Please visit http://genivia.com/Products/gsoap/contract.html

COPYRIGHT NOTICE

gSOAP XML Web services tools
Copyright (C) 2000-2011, Robert van Engelen, Genivia, Inc. All Rights Reserved.
