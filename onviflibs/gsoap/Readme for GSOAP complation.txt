
1) make creator
2) include this in creator "soapcpp2  -C -L -I %GSOAP_DIR%;%GSOAP_DIR%/import;"
2)create soap folder in project
3)Put generated files to soap folder
4)Add following files to soap folder

stdsoap2.cpp - from "gsoap" folder
duration.c - from "gsoap/custom" folder
stlvector.h- from "gsoap" folder
stdsoap2.h- from "gsoap" folder
duration.h- from "gsoap/custom" folder


5) Include to projects pro files in soap folder otherwise referance error
6)duartion.c - duartion.cpp changed otherwise it will not compile as c++ . It will say i can not find #include <vector> when compile
6)In duration.cpp change #invlude<soapH.h> to #include "onvifH.h" - Because in gsoap cretaor file command as follwing "soapcpp2 -p onvif". Generated files will be named as onvifH.h 
7) In duration.cpp change  #include "soapH.h" with your own generated file . For example onvifH.h
8)In .pro file add following LIBS += -lws2_32 