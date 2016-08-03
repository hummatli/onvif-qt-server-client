#ifndef MEDIASERVICEWRAPPER_H
#define MEDIASERVICEWRAPPER_H

#include "soap/stdsoap2.h"


class MediaServiceWrapper
{
public:
    MediaServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // MEDIASERVICEWRAPPER_H
