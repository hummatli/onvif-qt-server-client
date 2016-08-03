#ifndef DEVICEIOSERVICEWRAPPER_H
#define DEVICEIOSERVICEWRAPPER_H

#include "soap/stdsoap2.h"


class DeviceIOServiceWrapper
{
public:
    DeviceIOServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // DEVICEIOSERVICEWRAPPER_H
