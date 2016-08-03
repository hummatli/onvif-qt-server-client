####### This is the input file for automake, which will generate Makefile.in ##########


## not a GNU package. You can remove this line, if
## you have all needed files, that a GNU package needs
AUTOMAKE_OPTIONS = subdir-objects foreign 1.4

CPPFLAGS=-I$(top_srcdir)/gsoap -I$(top_srcdir)/gsoap/plugin
AM_LDFLAGS=$(CPPFLAGS) -I$(srcdir) -L$(srcdir)
SOAP=$(top_srcdir)/gsoap/src/soapcpp2$(EXEEXT)
WSDL=$(top_srcdir)/gsoap/wsdl/wsdl2h$(EXEEXT)
WSDL_FLAGS=-P -t $(srcdir)/typemap.dat
SOAP_FLAGS=-SL -T -I$(top_srcdir)/gsoap/import
WSDLINPUT=$(srcdir)/examples.wsdl
SOAPHEADER=$(srcdir)/examples.h
SOAP_CPP_SRC=soapC.cpp soapServer.cpp
SOAP_CPP_LIB=$(top_builddir)/gsoap/libgsoap++.a

$(SOAP_CPP_SRC) : $(WSDLINPUT)
	$(WSDL) $(WSDL_FLAGS) $(WSDLINPUT)
	$(SOAP) $(SOAP_FLAGS) $(SOAPHEADER)

#LIBS=

noinst_PROGRAMS=autotest

autotest_CFLAGS=$(C_DEBUG_FLAGS) -D$(platform)
autotest_CPPFLAGS=$(C_DEBUG_FLAGS) -D$(platform)
autotest_CXXFLAGS=$(WSDL2H_EXTRA_FLAGS)
autotest_SOURCES=$(SOAP_CPP_SRC) soapTester.cpp
autotest_LDADD=$(SOAP_CPP_LIB) $(SAMPLE_EXTRA_LIBS)

CLEANFILES= *~ *.h *.cpp *.xml *.log *.nsmap
