#ifndef EVENTSERVICE_H
#define EVENTSERVICE_H
#include "onvif/eventserviceextabst.h"

class EventService
{
public:
    EventService(){
    };

    static EventServiceExtAbst *serviceExt;
};

#endif // EVENTSERVICE_H
