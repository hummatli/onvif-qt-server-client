#ifndef RECORDINGCONTROLSERVICE_H
#define RECORDINGCONTROLSERVICE_H
#include "onvif/recordingcontrolserviceextabst.h"

class RecordingControlService
{
public:
    RecordingControlService(){
    };

    static RecordingControlServiceExtAbst *serviceExt;
};

#endif // RECORDINGCONTROLSERVICE_H
