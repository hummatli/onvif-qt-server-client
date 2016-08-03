//#include "soap/onvifmedia.nsmap"
#include "soap/onvifdeviceioDeviceIOBindingService.h"
#include "soap/onvifdeviceioDeviceBindingService.h"
#include "soap/onvifdeviceioMediaBindingService.h"
#include <QDebug>

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetServiceCapabilities(_deviceio__GetServiceCapabilities *deviceio__GetServiceCapabilities, _deviceio__GetServiceCapabilitiesResponse &deviceio__GetServiceCapabilitiesResponse){
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetRelayOutputOptions(_deviceio__GetRelayOutputOptions *deviceio__GetRelayOutputOptions, _deviceio__GetRelayOutputOptionsResponse &deviceio__GetRelayOutputOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputs(_deviceio__GetVideoOutputs *deviceio__GetVideoOutputs, _deviceio__GetVideoOutputsResponse &deviceio__GetVideoOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSourceConfiguration(_deviceio__GetVideoSourceConfiguration *deviceio__GetVideoSourceConfiguration, _deviceio__GetVideoSourceConfigurationResponse &deviceio__GetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputConfiguration(_deviceio__GetVideoOutputConfiguration *deviceio__GetVideoOutputConfiguration, _deviceio__GetVideoOutputConfigurationResponse &deviceio__GetVideoOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSourceConfiguration(_deviceio__GetAudioSourceConfiguration *deviceio__GetAudioSourceConfiguration, _deviceio__GetAudioSourceConfigurationResponse &deviceio__GetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputConfiguration(_deviceio__GetAudioOutputConfiguration *deviceio__GetAudioOutputConfiguration, _deviceio__GetAudioOutputConfigurationResponse &deviceio__GetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetVideoSourceConfiguration(_deviceio__SetVideoSourceConfiguration *deviceio__SetVideoSourceConfiguration, _deviceio__SetVideoSourceConfigurationResponse &deviceio__SetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetVideoOutputConfiguration(_deviceio__SetVideoOutputConfiguration *deviceio__SetVideoOutputConfiguration, _deviceio__SetVideoOutputConfigurationResponse &deviceio__SetVideoOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetAudioSourceConfiguration(_deviceio__SetAudioSourceConfiguration *deviceio__SetAudioSourceConfiguration, _deviceio__SetAudioSourceConfigurationResponse &deviceio__SetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetAudioOutputConfiguration(_deviceio__SetAudioOutputConfiguration *deviceio__SetAudioOutputConfiguration, _deviceio__SetAudioOutputConfigurationResponse &deviceio__SetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoSourceConfigurationOptions(_deviceio__GetVideoSourceConfigurationOptions *deviceio__GetVideoSourceConfigurationOptions, _deviceio__GetVideoSourceConfigurationOptionsResponse &deviceio__GetVideoSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetVideoOutputConfigurationOptions(_deviceio__GetVideoOutputConfigurationOptions *deviceio__GetVideoOutputConfigurationOptions, _deviceio__GetVideoOutputConfigurationOptionsResponse &deviceio__GetVideoOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioSourceConfigurationOptions(_deviceio__GetAudioSourceConfigurationOptions *deviceio__GetAudioSourceConfigurationOptions, _deviceio__GetAudioSourceConfigurationOptionsResponse &deviceio__GetAudioSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetAudioOutputConfigurationOptions(_deviceio__GetAudioOutputConfigurationOptions *deviceio__GetAudioOutputConfigurationOptions, _deviceio__GetAudioOutputConfigurationOptionsResponse &deviceio__GetAudioOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetRelayOutputSettings(_deviceio__SetRelayOutputSettings *deviceio__SetRelayOutputSettings, _deviceio__SetRelayOutputSettingsResponse &deviceio__SetRelayOutputSettingsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetDigitalInputs(_deviceio__GetDigitalInputs *deviceio__GetDigitalInputs, _deviceio__GetDigitalInputsResponse &deviceio__GetDigitalInputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPorts(_deviceio__GetSerialPorts *deviceio__GetSerialPorts, _deviceio__GetSerialPortsResponse &deviceio__GetSerialPortsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPortConfiguration(_deviceio__GetSerialPortConfiguration *deviceio__GetSerialPortConfiguration, _deviceio__GetSerialPortConfigurationResponse &deviceio__GetSerialPortConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOBindingService::SetSerialPortConfiguration(_deviceio__SetSerialPortConfiguration *deviceio__SetSerialPortConfiguration, _deviceio__SetSerialPortConfigurationResponse &deviceio__SetSerialPortConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOBindingService::GetSerialPortConfigurationOptions(_deviceio__GetSerialPortConfigurationOptions *deviceio__GetSerialPortConfigurationOptions, _deviceio__GetSerialPortConfigurationOptionsResponse &deviceio__GetSerialPortConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
int DeviceIOBindingService::SendReceiveSerialCommand(_deviceio__SendReceiveSerialCommand *deviceio__SendReceiveSerialCommand, _deviceio__SendReceiveSerialCommandResponse &deviceio__SendReceiveSerialCommandResponse) {
    return SOAP_OK;
}

//----------------------------------------------------------------------------------------------------------------------------------------------
/// Web service operation 'GetServices' (returns error code or SOAP_OK)
int DeviceBindingService::GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
int DeviceBindingService::SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse) {
    return SOAP_OK;
}

/// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
int DeviceBindingService::UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse) {
    return SOAP_OK;
}

/// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
int DeviceBindingService::SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse) {
    return SOAP_OK;
}

/// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
int DeviceBindingService::RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetScopes' (returns error code or SOAP_OK)
int DeviceBindingService::SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddScopes' (returns error code or SOAP_OK)
int DeviceBindingService::AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
int DeviceBindingService::GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetUsers' (returns error code or SOAP_OK)
int DeviceBindingService::GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
int DeviceBindingService::CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetUser' (returns error code or SOAP_OK)
int DeviceBindingService::SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
int DeviceBindingService::GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
int DeviceBindingService::SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetHostname' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
int DeviceBindingService::SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetNTP' (returns error code or SOAP_OK)
int DeviceBindingService::SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
int DeviceBindingService::SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
int DeviceBindingService::SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
int DeviceBindingService::RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
int DeviceBindingService::SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
int DeviceBindingService::CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
int DeviceBindingService::SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
int DeviceBindingService::GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse) {
    return SOAP_OK;
}

/// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
int DeviceBindingService::SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceBindingService::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceBindingService::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) {
    return SOAP_OK;
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int DeviceBindingService::SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse) {
    return SOAP_OK;
}

/// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
int DeviceBindingService::GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse) {
    return SOAP_OK;
}

/// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
int DeviceBindingService::LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
int DeviceBindingService::GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse) {
    return SOAP_OK;
}

/// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
int DeviceBindingService::ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
int DeviceBindingService::GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse) {
    return SOAP_OK;
}

/// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
int DeviceBindingService::StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse) {
    return SOAP_OK;
}

/// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
int DeviceBindingService::StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
int DeviceBindingService::DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse) {
    return SOAP_OK;
}

//----------------------------------------------------------------------------------------------------------------------------------------------
/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int MediaBindingService::GetServiceCapabilities(_mediaws__GetServiceCapabilities *mediaws__GetServiceCapabilities, _mediaws__GetServiceCapabilitiesResponse &mediaws__GetServiceCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateProfile' (returns error code or SOAP_OK)
int MediaBindingService::CreateProfile(_mediaws__CreateProfile *mediaws__CreateProfile, _mediaws__CreateProfileResponse &mediaws__CreateProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetProfile' (returns error code or SOAP_OK)
int MediaBindingService::GetProfile(_mediaws__GetProfile *mediaws__GetProfile, _mediaws__GetProfileResponse &mediaws__GetProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetProfiles' (returns error code or SOAP_OK)
int MediaBindingService::GetProfiles(_mediaws__GetProfiles *mediaws__GetProfiles, _mediaws__GetProfilesResponse &mediaws__GetProfilesResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoEncoderConfiguration(_mediaws__AddVideoEncoderConfiguration *mediaws__AddVideoEncoderConfiguration, _mediaws__AddVideoEncoderConfigurationResponse &mediaws__AddVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoSourceConfiguration(_mediaws__AddVideoSourceConfiguration *mediaws__AddVideoSourceConfiguration, _mediaws__AddVideoSourceConfigurationResponse &mediaws__AddVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioEncoderConfiguration(_mediaws__AddAudioEncoderConfiguration *mediaws__AddAudioEncoderConfiguration, _mediaws__AddAudioEncoderConfigurationResponse &mediaws__AddAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioSourceConfiguration(_mediaws__AddAudioSourceConfiguration *mediaws__AddAudioSourceConfiguration, _mediaws__AddAudioSourceConfigurationResponse &mediaws__AddAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddPTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddPTZConfiguration(_mediaws__AddPTZConfiguration *mediaws__AddPTZConfiguration, _mediaws__AddPTZConfigurationResponse &mediaws__AddPTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddVideoAnalyticsConfiguration(_mediaws__AddVideoAnalyticsConfiguration *mediaws__AddVideoAnalyticsConfiguration, _mediaws__AddVideoAnalyticsConfigurationResponse &mediaws__AddVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddMetadataConfiguration(_mediaws__AddMetadataConfiguration *mediaws__AddMetadataConfiguration, _mediaws__AddMetadataConfigurationResponse &mediaws__AddMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioOutputConfiguration(_mediaws__AddAudioOutputConfiguration *mediaws__AddAudioOutputConfiguration, _mediaws__AddAudioOutputConfigurationResponse &mediaws__AddAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'AddAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::AddAudioDecoderConfiguration(_mediaws__AddAudioDecoderConfiguration *mediaws__AddAudioDecoderConfiguration, _mediaws__AddAudioDecoderConfigurationResponse &mediaws__AddAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoEncoderConfiguration(_mediaws__RemoveVideoEncoderConfiguration *mediaws__RemoveVideoEncoderConfiguration, _mediaws__RemoveVideoEncoderConfigurationResponse &mediaws__RemoveVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoSourceConfiguration(_mediaws__RemoveVideoSourceConfiguration *mediaws__RemoveVideoSourceConfiguration, _mediaws__RemoveVideoSourceConfigurationResponse &mediaws__RemoveVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioEncoderConfiguration(_mediaws__RemoveAudioEncoderConfiguration *mediaws__RemoveAudioEncoderConfiguration, _mediaws__RemoveAudioEncoderConfigurationResponse &mediaws__RemoveAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioSourceConfiguration(_mediaws__RemoveAudioSourceConfiguration *mediaws__RemoveAudioSourceConfiguration, _mediaws__RemoveAudioSourceConfigurationResponse &mediaws__RemoveAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemovePTZConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemovePTZConfiguration(_mediaws__RemovePTZConfiguration *mediaws__RemovePTZConfiguration, _mediaws__RemovePTZConfigurationResponse &mediaws__RemovePTZConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveVideoAnalyticsConfiguration(_mediaws__RemoveVideoAnalyticsConfiguration *mediaws__RemoveVideoAnalyticsConfiguration, _mediaws__RemoveVideoAnalyticsConfigurationResponse &mediaws__RemoveVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveMetadataConfiguration(_mediaws__RemoveMetadataConfiguration *mediaws__RemoveMetadataConfiguration, _mediaws__RemoveMetadataConfigurationResponse &mediaws__RemoveMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioOutputConfiguration(_mediaws__RemoveAudioOutputConfiguration *mediaws__RemoveAudioOutputConfiguration, _mediaws__RemoveAudioOutputConfigurationResponse &mediaws__RemoveAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemoveAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::RemoveAudioDecoderConfiguration(_mediaws__RemoveAudioDecoderConfiguration *mediaws__RemoveAudioDecoderConfiguration, _mediaws__RemoveAudioDecoderConfigurationResponse &mediaws__RemoveAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteProfile' (returns error code or SOAP_OK)
int MediaBindingService::DeleteProfile(_mediaws__DeleteProfile *mediaws__DeleteProfile, _mediaws__DeleteProfileResponse &mediaws__DeleteProfileResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurations(_mediaws__GetVideoSourceConfigurations *mediaws__GetVideoSourceConfigurations, _mediaws__GetVideoSourceConfigurationsResponse &mediaws__GetVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurations(_mediaws__GetVideoEncoderConfigurations *mediaws__GetVideoEncoderConfigurations, _mediaws__GetVideoEncoderConfigurationsResponse &mediaws__GetVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurations(_mediaws__GetAudioSourceConfigurations *mediaws__GetAudioSourceConfigurations, _mediaws__GetAudioSourceConfigurationsResponse &mediaws__GetAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurations(_mediaws__GetAudioEncoderConfigurations *mediaws__GetAudioEncoderConfigurations, _mediaws__GetAudioEncoderConfigurationsResponse &mediaws__GetAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfigurations(_mediaws__GetVideoAnalyticsConfigurations *mediaws__GetVideoAnalyticsConfigurations, _mediaws__GetVideoAnalyticsConfigurationsResponse &mediaws__GetVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurations(_mediaws__GetMetadataConfigurations *mediaws__GetMetadataConfigurations, _mediaws__GetMetadataConfigurationsResponse &mediaws__GetMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurations(_mediaws__GetAudioOutputConfigurations *mediaws__GetAudioOutputConfigurations, _mediaws__GetAudioOutputConfigurationsResponse &mediaws__GetAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurations(_mediaws__GetAudioDecoderConfigurations *mediaws__GetAudioDecoderConfigurations, _mediaws__GetAudioDecoderConfigurationsResponse &mediaws__GetAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfiguration(_mediaws__GetVideoSourceConfiguration *mediaws__GetVideoSourceConfiguration, _mediaws__GetVideoSourceConfigurationResponse &mediaws__GetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfiguration(_mediaws__GetVideoEncoderConfiguration *mediaws__GetVideoEncoderConfiguration, _mediaws__GetVideoEncoderConfigurationResponse &mediaws__GetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfiguration(_mediaws__GetAudioSourceConfiguration *mediaws__GetAudioSourceConfiguration, _mediaws__GetAudioSourceConfigurationResponse &mediaws__GetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfiguration(_mediaws__GetAudioEncoderConfiguration *mediaws__GetAudioEncoderConfiguration, _mediaws__GetAudioEncoderConfigurationResponse &mediaws__GetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoAnalyticsConfiguration(_mediaws__GetVideoAnalyticsConfiguration *mediaws__GetVideoAnalyticsConfiguration, _mediaws__GetVideoAnalyticsConfigurationResponse &mediaws__GetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfiguration(_mediaws__GetMetadataConfiguration *mediaws__GetMetadataConfiguration, _mediaws__GetMetadataConfigurationResponse &mediaws__GetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfiguration(_mediaws__GetAudioOutputConfiguration *mediaws__GetAudioOutputConfiguration, _mediaws__GetAudioOutputConfigurationResponse &mediaws__GetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfiguration(_mediaws__GetAudioDecoderConfiguration *mediaws__GetAudioDecoderConfiguration, _mediaws__GetAudioDecoderConfigurationResponse &mediaws__GetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoEncoderConfigurations(_mediaws__GetCompatibleVideoEncoderConfigurations *mediaws__GetCompatibleVideoEncoderConfigurations, _mediaws__GetCompatibleVideoEncoderConfigurationsResponse &mediaws__GetCompatibleVideoEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoSourceConfigurations(_mediaws__GetCompatibleVideoSourceConfigurations *mediaws__GetCompatibleVideoSourceConfigurations, _mediaws__GetCompatibleVideoSourceConfigurationsResponse &mediaws__GetCompatibleVideoSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioEncoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioEncoderConfigurations(_mediaws__GetCompatibleAudioEncoderConfigurations *mediaws__GetCompatibleAudioEncoderConfigurations, _mediaws__GetCompatibleAudioEncoderConfigurationsResponse &mediaws__GetCompatibleAudioEncoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioSourceConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioSourceConfigurations(_mediaws__GetCompatibleAudioSourceConfigurations *mediaws__GetCompatibleAudioSourceConfigurations, _mediaws__GetCompatibleAudioSourceConfigurationsResponse &mediaws__GetCompatibleAudioSourceConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleVideoAnalyticsConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleVideoAnalyticsConfigurations(_mediaws__GetCompatibleVideoAnalyticsConfigurations *mediaws__GetCompatibleVideoAnalyticsConfigurations, _mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse &mediaws__GetCompatibleVideoAnalyticsConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleMetadataConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleMetadataConfigurations(_mediaws__GetCompatibleMetadataConfigurations *mediaws__GetCompatibleMetadataConfigurations, _mediaws__GetCompatibleMetadataConfigurationsResponse &mediaws__GetCompatibleMetadataConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioOutputConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioOutputConfigurations(_mediaws__GetCompatibleAudioOutputConfigurations *mediaws__GetCompatibleAudioOutputConfigurations, _mediaws__GetCompatibleAudioOutputConfigurationsResponse &mediaws__GetCompatibleAudioOutputConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleAudioDecoderConfigurations' (returns error code or SOAP_OK)
int MediaBindingService::GetCompatibleAudioDecoderConfigurations(_mediaws__GetCompatibleAudioDecoderConfigurations *mediaws__GetCompatibleAudioDecoderConfigurations, _mediaws__GetCompatibleAudioDecoderConfigurationsResponse &mediaws__GetCompatibleAudioDecoderConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceConfiguration(_mediaws__SetVideoSourceConfiguration *mediaws__SetVideoSourceConfiguration, _mediaws__SetVideoSourceConfigurationResponse &mediaws__SetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoEncoderConfiguration(_mediaws__SetVideoEncoderConfiguration *mediaws__SetVideoEncoderConfiguration, _mediaws__SetVideoEncoderConfigurationResponse &mediaws__SetVideoEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioSourceConfiguration(_mediaws__SetAudioSourceConfiguration *mediaws__SetAudioSourceConfiguration, _mediaws__SetAudioSourceConfigurationResponse &mediaws__SetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioEncoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioEncoderConfiguration(_mediaws__SetAudioEncoderConfiguration *mediaws__SetAudioEncoderConfiguration, _mediaws__SetAudioEncoderConfigurationResponse &mediaws__SetAudioEncoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoAnalyticsConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoAnalyticsConfiguration(_mediaws__SetVideoAnalyticsConfiguration *mediaws__SetVideoAnalyticsConfiguration, _mediaws__SetVideoAnalyticsConfigurationResponse &mediaws__SetVideoAnalyticsConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetMetadataConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetMetadataConfiguration(_mediaws__SetMetadataConfiguration *mediaws__SetMetadataConfiguration, _mediaws__SetMetadataConfigurationResponse &mediaws__SetMetadataConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioOutputConfiguration(_mediaws__SetAudioOutputConfiguration *mediaws__SetAudioOutputConfiguration, _mediaws__SetAudioOutputConfigurationResponse &mediaws__SetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioDecoderConfiguration' (returns error code or SOAP_OK)
int MediaBindingService::SetAudioDecoderConfiguration(_mediaws__SetAudioDecoderConfiguration *mediaws__SetAudioDecoderConfiguration, _mediaws__SetAudioDecoderConfigurationResponse &mediaws__SetAudioDecoderConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceConfigurationOptions(_mediaws__GetVideoSourceConfigurationOptions *mediaws__GetVideoSourceConfigurationOptions, _mediaws__GetVideoSourceConfigurationOptionsResponse &mediaws__GetVideoSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoEncoderConfigurationOptions(_mediaws__GetVideoEncoderConfigurationOptions *mediaws__GetVideoEncoderConfigurationOptions, _mediaws__GetVideoEncoderConfigurationOptionsResponse &mediaws__GetVideoEncoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioSourceConfigurationOptions(_mediaws__GetAudioSourceConfigurationOptions *mediaws__GetAudioSourceConfigurationOptions, _mediaws__GetAudioSourceConfigurationOptionsResponse &mediaws__GetAudioSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioEncoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioEncoderConfigurationOptions(_mediaws__GetAudioEncoderConfigurationOptions *mediaws__GetAudioEncoderConfigurationOptions, _mediaws__GetAudioEncoderConfigurationOptionsResponse &mediaws__GetAudioEncoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetMetadataConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetMetadataConfigurationOptions(_mediaws__GetMetadataConfigurationOptions *mediaws__GetMetadataConfigurationOptions, _mediaws__GetMetadataConfigurationOptionsResponse &mediaws__GetMetadataConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioOutputConfigurationOptions(_mediaws__GetAudioOutputConfigurationOptions *mediaws__GetAudioOutputConfigurationOptions, _mediaws__GetAudioOutputConfigurationOptionsResponse &mediaws__GetAudioOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioDecoderConfigurationOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetAudioDecoderConfigurationOptions(_mediaws__GetAudioDecoderConfigurationOptions *mediaws__GetAudioDecoderConfigurationOptions, _mediaws__GetAudioDecoderConfigurationOptionsResponse &mediaws__GetAudioDecoderConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetGuaranteedNumberOfVideoEncoderInstances' (returns error code or SOAP_OK)
int MediaBindingService::GetGuaranteedNumberOfVideoEncoderInstances(_mediaws__GetGuaranteedNumberOfVideoEncoderInstances *mediaws__GetGuaranteedNumberOfVideoEncoderInstances, _mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse &mediaws__GetGuaranteedNumberOfVideoEncoderInstancesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStreamUri' (returns error code or SOAP_OK)
int MediaBindingService::GetStreamUri(_mediaws__GetStreamUri *mediaws__GetStreamUri, _mediaws__GetStreamUriResponse &mediaws__GetStreamUriResponse) {
    return SOAP_OK;
}

/// Web service operation 'StartMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StartMulticastStreaming(_mediaws__StartMulticastStreaming *mediaws__StartMulticastStreaming, _mediaws__StartMulticastStreamingResponse &mediaws__StartMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'StopMulticastStreaming' (returns error code or SOAP_OK)
int MediaBindingService::StopMulticastStreaming(_mediaws__StopMulticastStreaming *mediaws__StopMulticastStreaming, _mediaws__StopMulticastStreamingResponse &mediaws__StopMulticastStreamingResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSynchronizationPoint' (returns error code or SOAP_OK)
int MediaBindingService::SetSynchronizationPoint(_mediaws__SetSynchronizationPoint *mediaws__SetSynchronizationPoint, _mediaws__SetSynchronizationPointResponse &mediaws__SetSynchronizationPointResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSnapshotUri' (returns error code or SOAP_OK)
int MediaBindingService::GetSnapshotUri(_mediaws__GetSnapshotUri *mediaws__GetSnapshotUri, _mediaws__GetSnapshotUriResponse &mediaws__GetSnapshotUriResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceModes' (returns error code or SOAP_OK)
int MediaBindingService::GetVideoSourceModes(_mediaws__GetVideoSourceModes *mediaws__GetVideoSourceModes, _mediaws__GetVideoSourceModesResponse &mediaws__GetVideoSourceModesResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceMode' (returns error code or SOAP_OK)
int MediaBindingService::SetVideoSourceMode(_mediaws__SetVideoSourceMode *mediaws__SetVideoSourceMode, _mediaws__SetVideoSourceModeResponse &mediaws__SetVideoSourceModeResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDs' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDs(_mediaws__GetOSDs *mediaws__GetOSDs, _mediaws__GetOSDsResponse &mediaws__GetOSDsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSD' (returns error code or SOAP_OK)
int MediaBindingService::GetOSD(_mediaws__GetOSD *mediaws__GetOSD, _mediaws__GetOSDResponse &mediaws__GetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetOSDOptions' (returns error code or SOAP_OK)
int MediaBindingService::GetOSDOptions(_mediaws__GetOSDOptions *mediaws__GetOSDOptions, _mediaws__GetOSDOptionsResponse &mediaws__GetOSDOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetOSD' (returns error code or SOAP_OK)
int MediaBindingService::SetOSD(_mediaws__SetOSD *mediaws__SetOSD, _mediaws__SetOSDResponse &mediaws__SetOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreateOSD' (returns error code or SOAP_OK)
int MediaBindingService::CreateOSD(_mediaws__CreateOSD *mediaws__CreateOSD, _mediaws__CreateOSDResponse &mediaws__CreateOSDResponse) {
    return SOAP_OK;
}

/// Web service operation 'DeleteOSD' (returns error code or SOAP_OK)
int MediaBindingService::DeleteOSD(_mediaws__DeleteOSD *mediaws__DeleteOSD, _mediaws__DeleteOSDResponse &mediaws__DeleteOSDResponse) {
    return SOAP_OK;
}
