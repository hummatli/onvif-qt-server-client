#ifndef RECEIVERSERVICE_H
#define RECEIVERSERVICE_H
#include "onvif/receiverserviceextabst.h"

class ReceiverService
{
public:
    ReceiverService(){
    };

    static ReceiverServiceExtAbst *serviceExt;
};

#endif // RECEIVERSERVICE_H
