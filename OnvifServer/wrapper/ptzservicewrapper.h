#ifndef PTZSERVICEWRAPPER_H
#define PTZSERVICEWRAPPER_H

#include "soap/stdsoap2.h"


class PTZServiceWrapper
{
public:
    PTZServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // PTZSERVICEWRAPPER_H
