#ifndef DEVICESERVICEWRAPPER_H
#define DEVICESERVICEWRAPPER_H
#include "soap/stdsoap2.h"

class DeviceServiceWrapper
{
public:
    DeviceServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // DEVICESERVICEWRAPPER_H
