cd .\soap
set GSOAP_DIR=..\..\gsoap\gsoap-2.8\gsoap
pause
%GSOAP_DIR%\bin\win32\wsdl2h -t ..\..\gsoap\typemap.dat -o rcx.h http://www.onvif.org/onvif/ver20/ptz/wsdl/ptz.wsdl
%GSOAP_DIR%\bin\win32\soapcpp2 -p onvifptz -n -j -L -I %GSOAP_DIR%;%GSOAP_DIR%/import; -x rcx.h
del rcx.h
pause
