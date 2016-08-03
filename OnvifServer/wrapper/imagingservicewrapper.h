#ifndef IMAGINGSERVICEWRAPPER_H
#define IMAGINGSERVICEWRAPPER_H

#include "soap/stdsoap2.h"


class ImagingServiceWrapper
{
public:
    ImagingServiceWrapper(struct soap*);
    int dispatch();
    void deleteObj();
};

#endif // IMAGINGSERVICEWRAPPER_H
