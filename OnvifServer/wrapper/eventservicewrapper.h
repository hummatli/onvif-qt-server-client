#ifndef EVENTSERVICEWRAPPER_H
#define EVENTSERVICEWRAPPER_H

#include "soap/stdsoap2.h"

class EventServiceWrapper
{
public:
    EventServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // EVENTSERVICEWRAPPER_H
