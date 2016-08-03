#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifPTZLib
TEMPLATE = lib


SOURCES += \
    onvif/ptz.cpp \
    soap/onvifptzPTZBindingProxy.cpp \
    soap/onvifptzC.cpp \
    soap/onvifptzPTZBindingService.cpp \
    soap/stdsoap2.cpp \
    soap/duration.cpp \
    onvif/ptzserviceimplement.cpp

HEADERS  += \
    onvif/ptz.h \
    onvif/ptzservice.h \
    onvif/ptzserviceextabst.h \
    soap/onvifptzPTZBindingProxy.h \
    soap/onvifptzH.h \
    soap/onvifptzStub.h \
    soap/onvifptzPTZBindingService.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
