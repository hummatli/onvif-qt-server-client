#-------------------------------------------------
#
# Project created by QtCreator 2015-06-12T15:42:21
#
#-------------------------------------------------

QT       += core

DESTDIR = ../../OnvifDist


TARGET = OnvifRecordingControlLib
TEMPLATE = lib


SOURCES += \
    onvif/recordingcontrol.cpp \
    onvif/recordingcontrolserviceimplement.cpp \
    soap/stdsoap2.cpp \
    soap/onvifrecordingcontrolC.cpp \
    soap/onvifrecordingcontrolRecordingBindingProxy.cpp \
    soap/onvifrecordingcontrolRecordingBindingService.cpp \
    soap/duration.cpp

HEADERS  += \
    onvif/recordingcontrol.h \
    onvif/recordingcontrolservice.h \
    onvif/recordingcontrolserviceextabst.h \
    soap/stdsoap2.h \
    soap/stlvector.h \
    soap/onvifrecordingcontrolH.h \
    soap/onvifrecordingcontrolStub.h \
    soap/onvifrecordingcontrolRecordingBindingProxy.h \
    soap/onvifrecordingcontrolRecordingBindingService.h \
    soap/duration.h

win32{
    LIBS += -lws2_32
}

DEFINES += "WITH_NONAMESPACES"
