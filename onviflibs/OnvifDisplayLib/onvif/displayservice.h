#ifndef DISPLAYSERVICE_H
#define DISPLAYSERVICE_H
#include "onvif/displayserviceextabst.h"

class DisplayService
{
public:
    DisplayService(){
    };

    static DisplayServiceExtAbst *serviceExt;
};

#endif // DISPLAYSERVICE_H
