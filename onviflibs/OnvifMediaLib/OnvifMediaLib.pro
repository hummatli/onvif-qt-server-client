#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist

TARGET = OnvifMediaLib
TEMPLATE = lib


SOURCES += \
    onvif/mediaserviceimplement.cpp \
    onvif/media.cpp \
    soap/stdsoap2.cpp \
    soap/onvifmediaC.cpp \
    soap/onvifmediaMediaBindingService.cpp \
    soap/onvifmediaMediaBindingProxy.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/media.h \
    onvif/mediaservice.h \
    onvif/mediaserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifmediaH.h \
    soap/onvifmediaStub.h \
    soap/onvifmediaMediaBindingService.h \
    soap/onvifmediaMediaBindingProxy.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
