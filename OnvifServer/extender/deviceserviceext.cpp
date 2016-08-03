#include "deviceserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvifserverthread.h"

DeviceServiceExt::DeviceServiceExt() : DeviceServiceExtAbst()
{

}


/// Web service operation 'GetServices' (returns error code or SOAP_OK)
int DeviceServiceExt::GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetServices , DeviceLib in NVT\n";


    //service Device
    devicews__Service * serviceDevice = new devicews__Service();
//    service1->Capabilities = new _devicews__Service_Capabilities;
//    service1->Capabilities->__any = "adsadadad";
    serviceDevice->Namespace = "http://www.onvif.org/ver10/device/wsdl";
    serviceDevice->Version = new tt__OnvifVersion();
    serviceDevice->Version->Major = 2;
    serviceDevice->Version->Minor = 42;
    serviceDevice->XAddr = OnvifServerThread::addrsStr.toStdString();
    devicews__GetServicesResponse.Service.push_back(serviceDevice);


    //service Media
    devicews__Service * serviceMedia = new devicews__Service();
//    service1->Capabilities = new _devicews__Service_Capabilities;
//    service1->Capabilities->__any = "adsadadad";
    serviceMedia->Namespace = "http://www.onvif.org/ver10/media/wsdl";
    serviceMedia->Version = new tt__OnvifVersion();
    serviceMedia->Version->Major = 2;
    serviceMedia->Version->Minor = 42;
    serviceMedia->XAddr = OnvifServerThread::addrsStr.toStdString();
    devicews__GetServicesResponse.Service.push_back(serviceMedia);


    //service Event
    devicews__Service * serviceEvent = new devicews__Service();
//    service1->Capabilities = new _devicews__Service_Capabilities;
//    service1->Capabilities->__any = "adsadadad";
    serviceEvent->Namespace = "http://www.onvif.org/ver10/events/wsdl";
    serviceEvent->Version = new tt__OnvifVersion();
    serviceEvent->Version->Major = 2;
    serviceEvent->Version->Minor = 42;
    serviceEvent->XAddr = OnvifServerThread::addrsStr.toStdString();
    devicews__GetServicesResponse.Service.push_back(serviceEvent);


    //service PTZ
    devicews__Service * servicePTZ = new devicews__Service();
//    service1->Capabilities = new _devicews__Service_Capabilities;
//    service1->Capabilities->__any = "adsadadad";
    servicePTZ->Namespace = "http://www.onvif.org/ver20/ptz/wsdl";
    servicePTZ->Version = new tt__OnvifVersion();
    servicePTZ->Version->Major = 2;
    servicePTZ->Version->Minor = 42;
    servicePTZ->XAddr = OnvifServerThread::addrsStr.toStdString();
    devicews__GetServicesResponse.Service.push_back(servicePTZ);


    //service Imaging
    devicews__Service * serviceImaging = new devicews__Service();
//    service1->Capabilities = new _devicews__Service_Capabilities;
//    service1->Capabilities->__any = "adsadadad";
    serviceImaging->Namespace = "http://www.onvif.org/ver20/imaging/wsdl";
    serviceImaging->Version = new tt__OnvifVersion();
    serviceImaging->Version->Major = 2;
    serviceImaging->Version->Minor = 42;
    serviceImaging->XAddr = OnvifServerThread::addrsStr.toStdString();
    devicews__GetServicesResponse.Service.push_back(serviceImaging);

    return SOAP_OK;
}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}


int DeviceServiceExt::GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse){
        qDebug() << "Device service GetDeviceInformation DeviceLib in NVT  in Upper class\n" ;
        devicews__GetDeviceInformationResponse.FirmwareVersion = "0.1";
        devicews__GetDeviceInformationResponse.HardwareId = "1";
        devicews__GetDeviceInformationResponse.Manufacturer = "This is sample onvif server";
        devicews__GetDeviceInformationResponse.Model = "2";
        devicews__GetDeviceInformationResponse.SerialNumber = "100000";

        return SOAP_OK;
}

/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceServiceExt::SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
int DeviceServiceExt::SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
int DeviceServiceExt::UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
int DeviceServiceExt::SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
int DeviceServiceExt::RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetScopes , DeviceLib in NVT\n";

    tt__Scope * scope1 = new tt__Scope;
    scope1->ScopeDef = tt__ScopeDefinition__Fixed;
    scope1->ScopeItem = "onvif://www.onvif.org/Profile/Streaming";
    devicews__GetScopesResponse.Scopes.push_back(scope1);

    tt__Scope * scope2 = new tt__Scope;
    scope2->ScopeDef = tt__ScopeDefinition__Fixed;
    scope2->ScopeItem = "onvif://www.onvif.org/location/country/azerbaijan";
    devicews__GetScopesResponse.Scopes.push_back(scope2);

    tt__Scope * scope3 = new tt__Scope;
    scope3->ScopeDef = tt__ScopeDefinition__Fixed;
    scope3->ScopeItem = "onvif://www.onvif.org/type/video_server";
    //scope3->ScopeItem = "onvif://www.onvif.org/type/NetworkVideoStorage";
    devicews__GetScopesResponse.Scopes.push_back(scope3);

    tt__Scope * scope4 = new tt__Scope;
    scope4->ScopeDef = tt__ScopeDefinition__Fixed;
    scope4->ScopeItem = "onvif://www.onvif.org/name/VideoServer";
    devicews__GetScopesResponse.Scopes.push_back(scope4);

    tt__Scope * scope5 = new tt__Scope;
    scope5->ScopeDef = tt__ScopeDefinition__Fixed;
    scope5->ScopeItem = "onvif://www.onvif.org/hardware/NVT";
    devicews__GetScopesResponse.Scopes.push_back(scope5);

    return SOAP_OK;
}

/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
int DeviceServiceExt::RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
int DeviceServiceExt::GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetUser' (returns error code or SOAP_OK)
int DeviceServiceExt::SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
int DeviceServiceExt::GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetCapabilities , DeviceLib in NVT\n";


    devicews__GetCapabilitiesResponse.Capabilities = new tt__Capabilities();

    devicews__GetCapabilitiesResponse.Capabilities->Media = new tt__MediaCapabilities();
    devicews__GetCapabilitiesResponse.Capabilities->Media->XAddr =  OnvifServerThread::addrsStr.toStdString();
    devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities =  new tt__RealTimeStreamingCapabilities();

//        devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTPMulticast = 0;
//        devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP = 0;
//        devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORETCP = 0;
//        devicews__GetCapabilitiesResponse.Capabilities->Media->Extension = new tt__MediaCapabilitiesExtension;
//        devicews__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities = new tt__ProfileCapabilities;
//        devicews__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities->MaximumNumberOfProfiles = 50;


        devicews__GetCapabilitiesResponse.Capabilities->Analytics = new tt__AnalyticsCapabilities;
        devicews__GetCapabilitiesResponse.Capabilities->Analytics->XAddr = OnvifServerThread::addrsStr.toStdString();
        devicews__GetCapabilitiesResponse.Capabilities->Analytics->RuleSupport = false;
        devicews__GetCapabilitiesResponse.Capabilities->Analytics->AnalyticsModuleSupport = false;


        devicews__GetCapabilitiesResponse.Capabilities->Imaging = new tt__ImagingCapabilities;
        devicews__GetCapabilitiesResponse.Capabilities->Imaging->XAddr =  OnvifServerThread::addrsStr.toStdString();


        devicews__GetCapabilitiesResponse.Capabilities->PTZ = new tt__PTZCapabilities;
        devicews__GetCapabilitiesResponse.Capabilities->PTZ->XAddr =  OnvifServerThread::addrsStr.toStdString();


        devicews__GetCapabilitiesResponse.Capabilities->Events = new tt__EventCapabilities;
        devicews__GetCapabilitiesResponse.Capabilities->Events->XAddr =  OnvifServerThread::addrsStr.toStdString();


        devicews__GetCapabilitiesResponse.Capabilities->Extension = new tt__CapabilitiesExtension;
        devicews__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice =  new tt__AnalyticsDeviceCapabilities;
        devicews__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice->XAddr =  OnvifServerThread::addrsStr.toStdString();
        devicews__GetCapabilitiesResponse.Capabilities->Extension->AnalyticsDevice->RuleSupport =  0;

        //devicews__GetCapabilities->Category.at(0)

//    devicews__GetCapabilitiesResponse.Capabilities = new tt__Capabilities();

////    devicews__GetCapabilitiesResponse.Capabilities->Analytics = new tt__AnalyticsCapabilities;
////    devicews__GetCapabilitiesResponse.Capabilities->Analytics->XAddr = OnvifServerThread::addrsStr.toStdString();
////    devicews__GetCapabilitiesResponse.Capabilities->Analytics->RuleSupport = true;
////    devicews__GetCapabilitiesResponse.Capabilities->Analytics->AnalyticsModuleSupport = true;

//    devicews__GetCapabilitiesResponse.Capabilities->Media = new tt__MediaCapabilities;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->XAddr = OnvifServerThread::addrsStr.toStdString();
//    devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities = new tt__RealTimeStreamingCapabilities;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTPMulticast = (bool*)1;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP = (bool*)1;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->StreamingCapabilities->RTP_USCORETCP = (bool*)1;

//    devicews__GetCapabilitiesResponse.Capabilities->Media->Extension = new tt__MediaCapabilitiesExtension;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities = new tt__ProfileCapabilities;
//    devicews__GetCapabilitiesResponse.Capabilities->Media->Extension->ProfileCapabilities->MaximumNumberOfProfiles = 50;
    return SOAP_OK;
}

/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
int DeviceServiceExt::GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
int DeviceServiceExt::SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
int DeviceServiceExt::SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetDNS  in NVT\n";
//    devicews__GetDNSResponse.DNSInformation = new tt__DNSInformation;
//    devicews__GetDNSResponse.DNSInformation->FromDHCP = false;

//    tt__IPAddress * ipaddress = new tt__IPAddress;
//    ipaddress->Type = tt__IPType__IPv4;
//    ipaddress->IPv4Address = new std::string;
//    ipaddress->IPv4Address->assign("172.16.6.250");

//    devicews__GetDNSResponse.DNSInformation->DNSManual.push_back(ipaddress);
    return SOAP_OK;
}

/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL{
    qDebug() << "Device Service GetNetworkInterfaces  in NVT\n";

    tt__NetworkInterface * nwi = new tt__NetworkInterface;
    nwi->token = "eth0";
    nwi->Enabled = true;

    nwi->Info = new tt__NetworkInterfaceInfo;
    nwi->Info->HwAddress = "A0:B3:CC:FD:68:EE";
    int x = 1500;
    nwi->Info->MTU = &x;

    nwi->IPv4 = new tt__IPv4NetworkInterface;
    nwi->IPv4->Enabled = true;

    nwi->IPv4->Config = new tt__IPv4Configuration;

    tt__PrefixedIPv4Address * prefixedAdd = new tt__PrefixedIPv4Address;
    prefixedAdd->Address = OnvifServerThread::ipStr.toStdString();
    prefixedAdd->PrefixLength = 24;
    nwi->IPv4->Config->Manual.push_back(prefixedAdd);

    nwi->IPv4->Config->DHCP = false;

    devicews__GetNetworkInterfacesResponse.NetworkInterfaces.push_back(nwi);
    return SOAP_OK;
}

/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceServiceExt::GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceServiceExt::SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
int DeviceServiceExt::RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
int DeviceServiceExt::GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
int DeviceServiceExt::SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceServiceExt::SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
int DeviceServiceExt::GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceServiceExt::GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceServiceExt::SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceServiceExt::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceServiceExt::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int DeviceServiceExt::SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
int DeviceServiceExt::GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
int DeviceServiceExt::LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
int DeviceServiceExt::GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
int DeviceServiceExt::ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
int DeviceServiceExt::GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
int DeviceServiceExt::StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
int DeviceServiceExt::StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
int DeviceServiceExt::GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}

/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
int DeviceServiceExt::DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse) SOAP_PURE_VIRTUAL{
    return SOAP_OK;
}
