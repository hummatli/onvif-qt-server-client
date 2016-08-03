#--4n-----------------------------------------------
`1
# Project created by QtCreator 2015-06-17T15:08:30
#
#-------------------------------------------------

QT       += core gui network

DESTDIR = ../OnvifDist

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OnvifServer
TEMPLATE = app


SOURCES += \
    wrapper/deviceservicewrapper.cpp \
    onvifserverthread.cpp \
    wrapper/eventservicewrapper.cpp \
#    wrapper/deviceioservicewrapper.cpp \
    wrapper/analyticsservicewrapper.cpp \
    wrapper/ptzservicewrapper.cpp \
    wrapper/mediaservicewrapper.cpp \
    wrapper/imagingservicewrapper.cpp \
    extender/deviceserviceext.cpp \
    extender/ptzserviceext.cpp \
    extender/mediaserviceext.cpp \
    extender/eventserviceext.cpp \
    extender/analyticsserviceext.cpp \
#    extender/deviceioserviceext.cpp
    main.cpp


HEADERS += \
    wrapper/deviceservicewrapper.h \
    onvifserverthread.h \
    wrapper/eventservicewrapper.h \
#    wrapper/deviceioservicewrapper.h \
    wrapper/analyticsservicewrapper.h \
    wrapper/ptzservicewrapper.h \
    wrapper/mediaservicewrapper.h \
    wrapper/imagingservicewrapper.h \
    extender/deviceserviceext.h \
    extender/ptzserviceext.h \
    extender/mediaserviceext.h \
    extender/eventserviceext.h \
    extender/analyticsserviceext.h \
#    extender/deviceioserviceext.h


DEPENDPATH += . $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib\
                $$PWD/../onviflibs/onvifcore/OnvifDeviceLib\
                $$PWD/../onviflibs/onvifcore/OnvifEventLib\
                $$PWD/../onviflibs/OnvifAnalyticsLib\
#                $$PWD/../onviflibs/OnvifDeviceIOLib\
                $$PWD/../onviflibs/OnvifMediaLib\
                $$PWD/../onviflibs/OnvifPTZLib\
                $$PWD/../onviflibs/OnvifImagingLib
INCLUDEPATH += $$PWD/../onviflibs/onvifcore/OnvifDiscoveryLib\
                $$PWD/../onviflibs/onvifcore/OnvifDeviceLib\
                $$PWD/../onviflibs/onvifcore/OnvifEventLib\
                $$PWD/../onviflibs/OnvifAnalyticsLib\
 #               $$PWD/../onviflibs/OnvifDeviceIOLib\
                $$PWD/../onviflibs/OnvifMediaLib\
                $$PWD/../onviflibs/OnvifPTZLib\
                $$PWD/../onviflibs/OnvifImagingLib
LIBS += -L$$PWD/../OnvifDist -lOnvifDiscoveryLib\
        -L$$PWD/../OnvifDist -lOnvifDeviceLib\
        -L$$PWD/../OnvifDist -lOnvifEventLib\
        -L$$PWD/../OnvifDist -lOnvifAnalyticsLib\
#        -L$$PWD/../OnvifDist -lOnvifDeviceIOLib\
        -L$$PWD/../OnvifDist -lOnvifMediaLib\
        -L$$PWD/../OnvifDist -lOnvifPTZLib\
        -L$$PWD/../OnvifDist -lOnvifImagingLib



