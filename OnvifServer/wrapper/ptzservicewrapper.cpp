#include "ptzservicewrapper.h"
#include "soap/onvifptzPTZBindingService.h"
#include "extender/ptzserviceext.h"
#include "onvif/ptzservice.h"

static PTZBindingService *sw;

PTZServiceWrapper::PTZServiceWrapper(struct soap* soap)
{
     sw = new PTZBindingService(soap);
     PTZService::serviceExt = new PTZServiceExt;

}

 int PTZServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void PTZServiceWrapper::deleteObj(){

     delete sw;
 }
