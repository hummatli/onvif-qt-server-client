#include "mediaservicewrapper.h"
#include "soap/onvifmediaMediaBindingService.h"
#include "onvif/mediaservice.h"
#include "extender/mediaserviceext.h"

static MediaBindingService *sw;

MediaServiceWrapper::MediaServiceWrapper(struct soap* soap)
{
     sw = new MediaBindingService(soap);
     MediaService::serviceExt = new MediaServiceExt;

}

 int MediaServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void MediaServiceWrapper::deleteObj(){

     delete sw;
 }
