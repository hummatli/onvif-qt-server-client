
A simple example "mashup" service. The service computes the number of days to
christmas using the GMT time service and calculator service. 

The wsdl2h importer accepts multiple WSDLs and generates one gSOAP definitions
file to implement clients and/or services. In this case we create a new service
to compute the days to christmas by invoking the GMT and calc services. A
client for the mashup service is also included.

The mashup.h gSOAP definitions file is generated from the GMT and calculator
WSDLs using:

wsdl2h -c -o mashup.h t.wsdl calc.wsdl mashup.wsdl

where t.wsdl is generated in samples/gmt, calc.wsdl is generated in
samples/calc, and mashup.wsdl is a new WSDL to expose the new "daystoxmas"
service operation.

The mashupserver is a CGI application. The mashupclient is a stand-alone client
for the service. Invoking mashupclient will return the number of days to
christmas.

