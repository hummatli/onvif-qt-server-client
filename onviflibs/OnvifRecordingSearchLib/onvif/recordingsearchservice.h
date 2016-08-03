#ifndef RECORDINGSEARCHSERVICE_H
#define RECORDINGSEARCHSERVICE_H
#include "onvif/recordingsearchserviceextabst.h"

class RecordingSearchService
{
public:
    RecordingSearchService(){
    };

    static RecordingSearchServiceExtAbst *serviceExt;
};

#endif // RECORDINGSEARCHSERVICE_H
