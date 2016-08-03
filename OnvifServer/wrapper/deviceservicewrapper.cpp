#include "deviceservicewrapper.h"
#include "soap/onvifdeviceDeviceBindingService.h" // get server object

#include "onvif/deviceservice.h"
#include "extender/deviceserviceext.h"


static DeviceBindingService *sw;

DeviceServiceWrapper::DeviceServiceWrapper(struct soap* soap)
{
     sw = new DeviceBindingService(soap);
     DeviceService::dse = new DeviceServiceExt;
}

int DeviceServiceWrapper::dispatch(){

     return sw->dispatch();
}

void DeviceServiceWrapper::deleteObj(){

     delete sw;
}
