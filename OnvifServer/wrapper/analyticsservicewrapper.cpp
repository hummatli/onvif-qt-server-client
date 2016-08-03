#include "analyticsservicewrapper.h"
#include "soap/onvifanalyticsRuleEngineBindingService.h"
#include "extender/analyticsserviceext.h"
#include "onvif/analyticsservice.h"

static RuleEngineBindingService *sw;

AnalyticsServiceWrapper::AnalyticsServiceWrapper(struct soap* soap)
{
     sw = new RuleEngineBindingService(soap);
     AnalyticsService::serviceExt = new AnalyticsServiceExt;

}

 int AnalyticsServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void AnalyticsServiceWrapper::deleteObj(){

     delete sw;
 }
