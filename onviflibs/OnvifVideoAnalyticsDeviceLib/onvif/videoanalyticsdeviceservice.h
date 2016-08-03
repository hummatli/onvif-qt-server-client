#ifndef VIDEOANALYTICSDEVICESERVICE_H
#define VIDEOANALYTICSDEVICESERVICE_H
#include "onvif/videoanalyticsdeviceserviceextabst.h"

class VideoAnalyticsDeviceService
{
public:
    VideoAnalyticsDeviceService(){
    };

    static VideoAnalyticsDeviceServiceExtAbst *serviceExt;
};

#endif // VIDEOANALYTICSDEVICESERVICE_H
