#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifImagingLib
TEMPLATE = lib


SOURCES += \
    onvif/imaging.cpp \
    onvif/imagingserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifimagingC.cpp \
    soap/onvifimagingImagingBindingService.cpp \
    soap/onvifimagingImagingBindingProxy.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/imaging.h \
    onvif/imagingservice.h \
    onvif/imagingserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifimagingH.h \
    soap/onvifimagingStub.h \
    soap/onvifimagingImagingBindingService.h \
    soap/onvifimagingImagingBindingProxy.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
