#include "eventservicewrapper.h"
#include "soap/onvifeventPullPointSubscriptionBindingService.h"
#include "extender/eventserviceext.h"
#include "onvif/eventservice.h"

static PullPointSubscriptionBindingService *sw;

EventServiceWrapper::EventServiceWrapper(struct soap* soap)
{
     sw = new PullPointSubscriptionBindingService(soap);
     EventService::serviceExt = new EventServiceExt;
}

 int EventServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void EventServiceWrapper::deleteObj(){

     delete sw;
 }
