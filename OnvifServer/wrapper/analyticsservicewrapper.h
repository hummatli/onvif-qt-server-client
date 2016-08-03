#ifndef ANALYTICSSERVICEWRAPPER_H
#define ANALYTICSSERVICEWRAPPER_H

#include "soap/stdsoap2.h"


class AnalyticsServiceWrapper
{
public:
    AnalyticsServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // ANALYTICSSERVICEWRAPPER_H
