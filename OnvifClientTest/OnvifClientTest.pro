#-------------------------------------------------
#
# Project created by QtCreator 2015-06-17T15:08:30
#
#-------------------------------------------------

QT       += core gui

DESTDIR = ../OnvifDist

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OnvifClientTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


DEPENDPATH += . $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifDeviceLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifEventLib/onvif\
            $$PWD/../onviflibs/OnvifAnalyticsLib/onvif\
            $$PWD/../onviflibs/OnvifReceiverLib/onvif\
            $$PWD/../onviflibs/OnvifVideoAnalyticsDeviceLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingControlLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingSearchLib/onvif\
            $$PWD/../onviflibs/OnvifReplayControlLib/onvif\
            $$PWD/../onviflibs/OnvifDisplayLib/onvif\
            $$PWD/../onviflibs/OnvifPTZLib/onvif\
            $$PWD/../onviflibs/OnvifMediaLib/onvif
INCLUDEPATH += $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifDeviceLib/onvif\
            $$PWD/../onviflibs/onvifcore/OnvifEventLib/onvif\
            $$PWD/../onviflibs/OnvifAnalyticsLib/onvif\
            $$PWD/../onviflibs/OnvifReceiverLib/onvif\
            $$PWD/../onviflibs/OnvifVideoAnalyticsDeviceLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingControlLib/onvif\
            $$PWD/../onviflibs/OnvifRecordingSearchLib/onvif\
            $$PWD/../onviflibs/OnvifReplayControlLib/onvif\
            $$PWD/../onviflibs/OnvifDisplayLib/onvif\
            $$PWD/../onviflibs/OnvifPTZLib/onvif\
            $$PWD/../onviflibs/OnvifMediaLib/onvif
LIBS +=  -L$$PWD/../../OnvifDist -lOnvifDiscoveryLib\
            -L$$PWD/../OnvifDist -lOnvifDeviceLib\
            -L$$PWD/../OnvifDist -lOnvifEventLib\
            -L$$PWD/../OnvifDist -lOnvifAnalyticsLib\
            -L$$PWD/../OnvifDist -lOnvifReceiverLib\
            -L$$PWD/../OnvifDist -lOnvifVideoAnalyticsDeviceLib\
            -L$$PWD/../OnvifDist -lOnvifRecordingControlLib\
            -L$$PWD/../OnvifDist -lOnvifRecordingSearchLib\
            -L$$PWD/../OnvifDist -lOnvifReplayControlLib\
            -L$$PWD/../OnvifDist -lOnvifDisplayLib\
            -L$$PWD/../OnvifDist -lOnvifPTZLib\
            -L$$PWD/../OnvifDist -lOnvifMediaLib


