#ifndef ANALYTICSSERVICE_H
#define ANALYTICSSERVICE_H
#include "onvif/analyticsserviceextabst.h"

class AnalyticsService
{
public:
    AnalyticsService(){
    };

    static AnalyticsServiceExtAbst *serviceExt;
};

#endif // ANALYTICSSERVICE_H
