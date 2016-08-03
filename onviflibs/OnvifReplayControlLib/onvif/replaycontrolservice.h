#ifndef REPLAYCONTROLSERVICE_H
#define REPLAYCONTROLSERVICE_H
#include "onvif/replaycontrolserviceextabst.h"

class ReplayControlService
{
public:
    ReplayControlService(){
    };

    static ReplayControlServiceExtAbst *serviceExt;
};

#endif // REPLAYCONTROLSERVICE_H
