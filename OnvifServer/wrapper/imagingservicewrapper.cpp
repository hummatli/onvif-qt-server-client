#include "imagingservicewrapper.h"
#include "soap/onvifimagingImagingBindingService.h"

static ImagingServiceWrapper *sw;

ImagingServiceWrapper::ImagingServiceWrapper(struct soap* soap)
{
     sw = new ImagingServiceWrapper(soap);
}

 int ImagingServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void ImagingServiceWrapper::deleteObj(){

     delete sw;
 }
