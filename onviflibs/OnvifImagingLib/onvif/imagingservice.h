#ifndef IMAGINGSERVICE_H
#define IMAGINGSERVICE_H
#include "onvif/imagingserviceextabst.h"

class ImagingService
{
public:
    ImagingService(){
    };

    static ImagingServiceExtAbst *serviceExt;
};

#endif // IMAGINGSERVICE_H
