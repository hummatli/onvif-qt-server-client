
XML Databinding Support
=======================

This example shows the use of wsdl2h to bind an XML schema to C++. The C++
application reads and writes an XML file into and from a C++ address book data
structure. The C++ data structure is an STL vector of address objects.

See samples/databinding/html/index.html for documentation on this example.

This example only shows an XML data binding for simple data structures and
types. The gsoap tools support more than just these structures. Support for XML
schema components is practically unlimited. Note thatwsdl2h maps schemas to C
and C++ using built-in intuitive mapping rules, but the mapping can be
customized using a typemap.dat file with mapping directives.

Mapping XML schema to C/C++
---------------------------

Command:

> wsdl2h [options] XSD and WSDL files ...

XML schema files (XSD files) and WSDLs are converted to C++ (wsdl2h option -c
for ANSI C). The WSDL 1.1 standard is supported. WSDL 2.0 is similar. If you
have trouble with WSDL 2.0 please contact the author.

The entire XML schema 1.1 standard is supported, except XPath expressions and
assertions. This covers all of the following schema components with their
optional [ attributes ] shown:

  <xs:any [minOccurs, maxOccurs] >
  <xs:anyAttribute>
  <xs:all>
  <xs:choice [minOccurs, maxOccurs] >
  <xs:sequence [minOccurs, maxOccurs] >
  <xs:group [name, ref] >
  <xs:attributeGroup [name, ref] >
  <xs:attribute [name, ref, type, use, default, fixed, form, wsdl:arrayType] >
  <xs:element [name, ref, type, default, fixed, form, nillable, abstract,
               substitutionGroup, minOccurs, maxOccurs] >
  <xs:simpleType [name] >
  <xs:complexType [name, abstract, mixed] >

  The supported facets are:

  <xs:enumeration>
  <xs:simpleContent>
  <xs:complexContent>
  <xs:list>
  <xs:extension>
  <xs:restriction>
  <xs:length>
  <xs:minLength>
  <xs:maxLength>
  <xs:minInclusive>
  <xs:maxInclusive>
  <xs:minExclusive>
  <xs:maxExclusive>
  <xs:precision>	(maps to float/double, content not validated yet)
  <xs:scale>		(maps to float/double, content not validated yet)
  <xs:totalDigits>	(content not automatically validated yet)
  <xs:pattern>		(content not automatically validated yet)
  <xs:union>		(maps to string, content not validated yet)

  Other:

  <xs:import>
  <xs:include>
  <xs:redefine>
  <xs:annotation>

All primitive XSD types are supported (with default mapping shown):

  xsd:string		maps to string (char*/wchar_t*/std::string/std::wstring)
  xsd:boolean		maps to bool (C++) or enum xsd__boolean (C)
  xsd:float		maps to float
  xsd:double		maps to double
  xsd:decimal		maps to string, or use "#import "custom/decimal.h"
  xsd:precisionDecimal	maps to string
  xsd:duration		maps to string, or use "#import "custom/duration.h"
  xsd:dateTime		maps to time_t, or use "#import "custom/struct_tm.h"
  xsd:time		maps to string
  xsd:date		maps to string
  xsd:gYearMonth	maps to string
  xsd:gYear		maps to string
  xsd:gMonth		maps to string
  xsd:hexBinary		maps to struct xsd__hexBinary
  xsd:base64Bianry	maps to struct xsd__base64Binary
  xsd:anyURI		maps to string
  xsd:QName		maps to _QName (string normalization rules apply)
  xsd:NOTATION		maps to string

All non-primitive XSD types are supported (with default mapping shown):

  xsd:normalizedString	maps to string
  xsd:token		maps to string
  xsd:language		maps to string
  xsd:IDREFS		maps to string
  xsd:ENTITIES		maps to string
  xsd:NMTOKEN		maps to string
  xsd:NMTOKENS		maps to string
  xsd:Name		maps to string
  xsd:NCName		maps to string
  xsd:ID		maps to string
  xsd:IDREF		maps to string
  xsd:ENTITY		maps to string
  xsd:integer		maps to string
  xsd:nonPositiveInteger	maps to string
  xsd:negativeInteger	maps to string
  xsd:long		maps to LONG64
  xsd:int		maps to int
  xsd:short		maps to short
  xsd:byte		maps to byte
  xsd:nonNegativeInteger	maps to string
  xsd:unsignedLong	maps to ULONG64
  xsd:unsignedInt	maps to unsigned int
  xsd:unsignedShort	maps to unsigned short
  xsd:unsignedByte	maps to unsigned byte
  xsd:positiveInteger	maps to string
  xsd:yearMonthDuration	maps to string
  xsd:dayTimeDuration	maps to string
  xsd:dateTimeStamp	maps to string

Context initialization flags to control XML serialization at runtime:

  XML content validation is enforced with SOAP_XML_STRICT.

  XML namespaces are supported, unless disabled with SOAP_XML_IGNORENS.

  XML exclusive canonicalization is enabled with SOAP_XML_CANONICAL.

  XML is indented for enhanced readability with SOAP_XML_INDENT.

Mapping C/C++ to XML schema
---------------------------

Command:
> soapcpp2 [options] header_file.h

The following C/C++ types are supported in the header file:

  bool
  enum, enum* ('enum*' indicates serialized as a bitmask)
  (unsigned) char, short, int, long, long long (also LONG64), size_t
  float, double, long double (import "custom/long_double.h")
  std::string, std::wstring, char[], char*, wchar_t*
  _XML (a char* type to hold literal XML string content)
  _QName (a char* type with normalized QName content of the form prefix:name)
  struct, class (with single inheritance)
  std::vector, std::list, std::deque, std::set (#import "import/stl.h")
  union (requires preceding discriminant member field)
  typedef
  time_t
  template <> class (requires begin(), end(), size(), and insert() methods) 
  void* (requires a preceding __type field to indicate the object pointed to)
  struct xsd__hexBinary (special pre-defined type to hold binary content)
  struct xsd__base64Binary (special pre-defined type to hold binary content)
  struct tm (#import "custom/struct_tm.h")
  struct timeval (#import "custom/struct_timeval.h")
  pointers to any of the above (any pointer-linked structures are serializable)
  fixed-size arrays of all of the above

  Additional features and potential limitations:

  A header file should not include any code statements, only data type
  declarations.

  Nested classes and nested types are unnested.

  Use #import "file.h" instead of #include to import other header files. The
  #include and #define directives are accepted, but deferred to the generated
  code.

  C++ namespaces are supported (must cover entire header file content)
  
  Optional DOM support can be used to store mixed content or literal XML
  content. Otherwise, mixed content may be lost. Use soapcpp2 option -d for DOM
  support.

  Types are denoted transient using the 'extern' qualifier, which prevents
  serialization as desired:

  extern class name; // class 'name' is not serialized
  struct name { extern char *name; int num; }; // 'name' is not serialized

  Only public members of a class can be serialized:

  class name { private: char *secret; }; // 'secret' is not serialized

  Types are denoted "volatile", which means that they are declared elsewhere
  in the source code and should not be redeclared in the generated code:

  volatile class name { ... }; // defined here just to generate the serializers
  
  struct/class members are serialized as attributes when qualified with '@':

  struct record { @char *name; int num; }; // attribute name, element num

  Strings with 8-bit content can hold ASCII (default) or UTF8. The latter is
  possible by enabling the SOAP_C_UTFSTRING flag. When enabled, all std::string
  and char* strings MUST contain UTF8.

Removing SOAP namespaces
------------------------

The soapcpp2 tool generates a .nsmap file that includes two bindings for SOAP
namespaces. You can remove all SOAP namespaces (and SOAP processing logic) by
simply setting the two entries to NULL:

SOAP_NMAC struct Namespace namespaces[] =
{
  {"SOAP-ENV", NULL, NULL, NULL},
  {"SOAP-ENC", NULL, NULL, NULL},
  ...

Note that once the .nsmap is generated, you can copy-paste the content into you
project code. However, if you rerun wsdl2h on updated WSDL/XSD files or
typemap.dat declarations then you need to use the updated table.

Project Files
-------------

See samples/databinding/html/index.html for documentation on this example.

Project Source Files
--------------------
address.xsd		Address book schema
address.cpp		Address book app (reads/writes address.xml file)
addresstypemap.dat	Schema namespace prefix name preference for wsdl2h

Generated Files
---------------
address.h		gSOAP-specific data binding definitions from address.xsd
addressStub.h		C++ data binding definitions
addressH.h		Serializers
addressC.cpp		Serializers
address.xml		Address book data generated by address app

Commands
--------
wsdl2h -g -t addresstypemap.dat address.xsd
soapcpp2 -CS -I../../import -p address address.h
g++ -I../.. address.cpp addressC.cpp -o address -lgsoap++
# or w/o libgsoap++: g++ -I../.. address.cpp addressC.cpp -o address ../../stdsoap2.cpp

Doxygen Documentation
---------------------
Use Doxyfile for Doxygen

Usage
-----
./address
