#ifndef DEVICEIOSERVICE_H
#define DEVICEIOSERVICE_H
#include "onvif/deviceioserviceextabst.h"

class DeviceIOService
{
public:
    DeviceIOService(){
    };

    static DeviceIOServiceExtAbst *serviecExt;
};

#endif // DEVICEIOSERVICE_H
