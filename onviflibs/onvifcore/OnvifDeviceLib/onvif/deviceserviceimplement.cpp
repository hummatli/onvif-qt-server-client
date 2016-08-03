#include "soap/onvifdeviceDeviceBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/deviceservice.h"

DeviceServiceExtAbst * DeviceService::dse = NULL;


/// Web service operation 'GetServices' (returns error code or SOAP_OK)
int DeviceBindingService::GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetServices(devicews__GetServices, devicews__GetServicesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetServiceCapabilities(devicews__GetServiceCapabilities,devicews__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDeviceInformation(devicews__GetDeviceInformation, devicews__GetDeviceInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetSystemDateAndTime(devicews__SetSystemDateAndTime,devicews__SetSystemDateAndTimeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemDateAndTime(devicews__GetSystemDateAndTime,devicews__GetSystemDateAndTimeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetSystemFactoryDefault(devicews__SetSystemFactoryDefault,devicews__SetSystemFactoryDefaultResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
int DeviceBindingService::UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->UpgradeSystemFirmware(devicews__UpgradeSystemFirmware,devicews__UpgradeSystemFirmwareResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
int DeviceBindingService::SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SystemReboot(devicews__SystemReboot,devicews__SystemRebootResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
int DeviceBindingService::RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RestoreSystem(devicews__RestoreSystem, devicews__RestoreSystemResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemBackup(devicews__GetSystemBackup,devicews__GetSystemBackupResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemLog(devicews__GetSystemLog,devicews__GetSystemLogResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemSupportInformation(devicews__GetSystemSupportInformation,devicews__GetSystemSupportInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetScopes(devicews__GetScopes,devicews__GetScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetScopes(devicews__SetScopes,devicews__SetScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
int DeviceBindingService::AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->AddScopes(devicews__AddScopes,devicews__AddScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RemoveScopes(devicews__RemoveScopes, devicews__RemoveScopesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDiscoveryMode(devicews__GetDiscoveryMode, devicews__GetDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDiscoveryMode(devicews__SetDiscoveryMode,devicews__SetDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRemoteDiscoveryMode(devicews__GetRemoteDiscoveryMode, devicews__GetRemoteDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRemoteDiscoveryMode(devicews__SetRemoteDiscoveryMode, devicews__SetRemoteDiscoveryModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDPAddresses(devicews__GetDPAddresses, devicews__GetDPAddressesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
int DeviceBindingService::GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetEndpointReference(devicews__GetEndpointReference, devicews__GetEndpointReferenceResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRemoteUser(devicews__GetRemoteUser, devicews__GetRemoteUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRemoteUser(devicews__SetRemoteUser, devicews__SetRemoteUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
int DeviceBindingService::GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetUsers(devicews__GetUsers,devicews__GetUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
int DeviceBindingService::CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateUsers(devicews__CreateUsers, devicews__CreateUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteUsers(devicews__DeleteUsers, devicews__DeleteUsersResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetUser(devicews__SetUser, devicews__SetUserResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
int DeviceBindingService::GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetWsdlUrl(devicews__GetWsdlUrl, devicews__GetWsdlUrlResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCapabilities(devicews__GetCapabilities,  devicews__GetCapabilitiesResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDPAddresses(devicews__SetDPAddresses,  devicews__SetDPAddressesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetHostname(devicews__GetHostname,  devicews__GetHostnameResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetHostname(devicews__SetHostname, devicews__SetHostnameResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetHostnameFromDHCP(devicews__SetHostnameFromDHCP,  devicews__SetHostnameFromDHCPResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDNS(devicews__GetDNS,  devicews__GetDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDNS(devicews__SetDNS,  devicews__SetDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNTP(devicews__GetNTP,  devicews__GetNTPResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNTP(devicews__SetNTP,  devicews__SetNTPResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDynamicDNS(devicews__GetDynamicDNS,  devicews__GetDynamicDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDynamicDNS(devicews__SetDynamicDNS,  devicews__SetDynamicDNSResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkInterfaces(devicews__GetNetworkInterfaces,  devicews__GetNetworkInterfacesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkInterfaces(devicews__SetNetworkInterfaces, devicews__SetNetworkInterfacesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkProtocols(devicews__GetNetworkProtocols,  devicews__GetNetworkProtocolsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkProtocols(devicews__SetNetworkProtocols,  devicews__SetNetworkProtocolsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetNetworkDefaultGateway(devicews__GetNetworkDefaultGateway,  devicews__GetNetworkDefaultGatewayResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetNetworkDefaultGateway(devicews__SetNetworkDefaultGateway,  devicews__SetNetworkDefaultGatewayResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetZeroConfiguration(devicews__GetZeroConfiguration,  devicews__GetZeroConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetZeroConfiguration(devicews__SetZeroConfiguration,  devicews__SetZeroConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetIPAddressFilter(devicews__GetIPAddressFilter,  devicews__GetIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetIPAddressFilter(devicews__SetIPAddressFilter,  devicews__SetIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->AddIPAddressFilter(devicews__AddIPAddressFilter,  devicews__AddIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->RemoveIPAddressFilter(devicews__RemoveIPAddressFilter, devicews__RemoveIPAddressFilterResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetAccessPolicy(devicews__GetAccessPolicy,  devicews__GetAccessPolicyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetAccessPolicy(devicews__SetAccessPolicy,  devicews__SetAccessPolicyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
int DeviceBindingService::CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateCertificate(devicews__CreateCertificate,  devicews__CreateCertificateResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificates(devicews__GetCertificates, devicews__GetCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificatesStatus(devicews__GetCertificatesStatus,  devicews__GetCertificatesStatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->SetCertificatesStatus(devicews__SetCertificatesStatus,  devicews__SetCertificatesStatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteCertificates(devicews__DeleteCertificates, devicews__DeleteCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
int DeviceBindingService::GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->GetPkcs10Request(devicews__GetPkcs10Request,  devicews__GetPkcs10RequestResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse)  {
    if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCertificates(devicews__LoadCertificates,  devicews__LoadCertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetClientCertificateMode(devicews__GetClientCertificateMode,  devicews__GetClientCertificateModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetClientCertificateMode(devicews__SetClientCertificateMode,  devicews__SetClientCertificateModeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceBindingService::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetRelayOutputs(devicews__GetRelayOutputs,  devicews__GetRelayOutputsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRelayOutputSettings(devicews__SetRelayOutputSettings,  devicews__SetRelayOutputSettingsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetRelayOutputState(devicews__SetRelayOutputState,  devicews__SetRelayOutputStateResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int DeviceBindingService::SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SendAuxiliaryCommand(devicews__SendAuxiliaryCommand,  devicews__SendAuxiliaryCommandResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCACertificates(devicews__GetCACertificates,  devicews__GetCACertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCertificateWithPrivateKey(devicews__LoadCertificateWithPrivateKey,  devicews__LoadCertificateWithPrivateKeyResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetCertificateInformation(devicews__GetCertificateInformation,  devicews__GetCertificateInformationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->LoadCACertificates(devicews__LoadCACertificates,  devicews__LoadCACertificatesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateDot1XConfiguration(devicews__CreateDot1XConfiguration,  devicews__CreateDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetDot1XConfiguration(devicews__SetDot1XConfiguration,  devicews__SetDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot1XConfiguration(devicews__GetDot1XConfiguration,  devicews__GetDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot1XConfigurations(devicews__GetDot1XConfigurations,  devicews__GetDot1XConfigurationsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteDot1XConfiguration(devicews__DeleteDot1XConfiguration,  devicews__DeleteDot1XConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot11Capabilities(devicews__GetDot11Capabilities,  devicews__GetDot11CapabilitiesResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetDot11Status(devicews__GetDot11Status,  devicews__GetDot11StatusResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
int DeviceBindingService::ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->ScanAvailableDot11Networks(devicews__ScanAvailableDot11Networks,  devicews__ScanAvailableDot11NetworksResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetSystemUris(devicews__GetSystemUris,  devicews__GetSystemUrisResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
int DeviceBindingService::StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->StartFirmwareUpgrade(devicews__StartFirmwareUpgrade,  devicews__StartFirmwareUpgradeResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
int DeviceBindingService::StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->StartSystemRestore(devicews__StartSystemRestore,  devicews__StartSystemRestoreResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetStorageConfigurations(devicews__GetStorageConfigurations,  devicews__GetStorageConfigurationsResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->CreateStorageConfiguration(devicews__CreateStorageConfiguration, devicews__CreateStorageConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->GetStorageConfiguration(devicews__GetStorageConfiguration, devicews__GetStorageConfigurationResponse);
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->SetStorageConfiguration(devicews__SetStorageConfiguration,  devicews__SetStorageConfigurationResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse)  {
     if(DeviceService::dse != NULL){
        return DeviceService::dse->DeleteStorageConfiguration(devicews__DeleteStorageConfiguration, devicews__DeleteStorageConfigurationResponse) ;
    } else {
        qDebug() << "DeviceService::dse is NULL\n";
        return SOAP_ERR;
    }
}
