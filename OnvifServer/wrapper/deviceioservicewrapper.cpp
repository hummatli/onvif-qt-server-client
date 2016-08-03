#include "deviceioservicewrapper.h"
#include "soap/onvifdeviceioDeviceIOBindingService.h"
#include "extender/deviceioserviceext.h"
#include "onvif/deviceioservice.h"

static DeviceIOServiceWrapper *sw;

DeviceIOServiceWrapper::DeviceIOServiceWrapper(struct soap* soap)
{
     sw = new DeviceIOServiceWrapper(soap);
     DeviceIOService::serviecExt = new DeviceIOServiceExt;

}

 int DeviceIOServiceWrapper::dispatch(){

     return sw->dispatch();
 }

 void DeviceIOServiceWrapper::deleteObj(){

     delete sw;
 }
