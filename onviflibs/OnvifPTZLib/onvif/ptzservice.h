#ifndef PTZSERVICE_H
#define PTZSERVICE_H
#include "onvif/ptzserviceextabst.h"

class PTZService
{
public:
    PTZService(){
    };

    static PTZServiceExtAbst * serviceExt;
};

#endif // PTZSERVICE_H
