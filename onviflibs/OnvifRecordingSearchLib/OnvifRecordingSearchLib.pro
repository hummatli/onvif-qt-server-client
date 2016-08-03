#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifRecordingSearchLib
TEMPLATE = lib


SOURCES += \
    onvif/recordingsearch.cpp \
    onvif/recordingsearchserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifrecordingsearchC.cpp \
    soap/onvifrecordingsearchSearchBindingProxy.cpp \
    soap/onvifrecordingsearchSearchBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/recordingsearch.h \
    onvif/recordingsearchservice.h \
    onvif/recordingsearchserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifrecordingsearchH.h \
    soap/onvifrecordingsearchStub.h \
    soap/onvifrecordingsearchSearchBindingProxy.h \
    soap/onvifrecordingsearchSearchBindingService.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
