#ifndef DEVICESERVICEEXT_H
#define DEVICESERVICEEXT_H
#include "onvif/deviceserviceextabst.h"


class DeviceServiceExt : public DeviceServiceExtAbst
{
public:
    DeviceServiceExt();

    /// Web service operation 'GetServices' (returns error code or SOAP_OK)
    int GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse);

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse);

    /// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
    int GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse);

    /// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
    int SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse);

    /// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
    int GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse);

    /// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
    int SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse);

    /// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
    int UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse);

    /// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
    int SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse);

    /// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
    int RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse);

    /// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
    int GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse);

    /// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
    int GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse);

    /// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
    int GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse);

    /// Web service operation 'GetScopes' (returns error code or SOAP_OK)
    int GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse);

    /// Web service operation 'SetScopes' (returns error code or SOAP_OK)
    int SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse);

    /// Web service operation 'AddScopes' (returns error code or SOAP_OK)
    int AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse);

    /// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
    int RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse);

    /// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
    int GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse);

    /// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
    int SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse);

    /// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    int GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse);

    /// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    int SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse);

    /// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
    int GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse);

    /// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
    int GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse);

    /// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
    int GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse);

    /// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
    int SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse);

    /// Web service operation 'GetUsers' (returns error code or SOAP_OK)
    int GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse);

    /// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
    int CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse);

    /// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
    int DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse);

    /// Web service operation 'SetUser' (returns error code or SOAP_OK)
    int SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse);

    /// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
    int GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse);

    /// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
    int GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse);

    /// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
    int SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse);

    /// Web service operation 'GetHostname' (returns error code or SOAP_OK)
    int GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse);

    /// Web service operation 'SetHostname' (returns error code or SOAP_OK)
    int SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse);

    /// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
    int SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse);

    /// Web service operation 'GetDNS' (returns error code or SOAP_OK)
    int GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse);

    /// Web service operation 'SetDNS' (returns error code or SOAP_OK)
    int SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse);

    /// Web service operation 'GetNTP' (returns error code or SOAP_OK)
    int GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse);

    /// Web service operation 'SetNTP' (returns error code or SOAP_OK)
    int SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse);

    /// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
    int GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse);

    /// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
    int SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse);

    /// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
    int GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse);

    /// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
    int SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse);

    /// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
    int GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse);

    /// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
    int SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse);

    /// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
    int GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse);

    /// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
    int SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse);

    /// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
    int GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse);

    /// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
    int SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse);

    /// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
    int GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse);

    /// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
    int SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse);

    /// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
    int AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse);

    /// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
    int RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse);

    /// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
    int GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse);

    /// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
    int SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse);

    /// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
    int CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse);

    /// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
    int GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse);

    /// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
    int GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse);

    /// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
    int SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse);

    /// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
    int DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse);

    /// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
    int GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse);

    /// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
    int LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse);

    /// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
    int GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse);

    /// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
    int SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse);

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    int GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse);

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    int SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse);

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    int SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse);

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    int SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse);

    /// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
    int GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse);

    /// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
    int LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse);

    /// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
    int GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse);

    /// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
    int LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse);

    /// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
    int CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse);

    /// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
    int SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse);

    /// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
    int GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse);

    /// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
    int GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse);

    /// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
    int DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse);

    /// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
    int GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse);

    /// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
    int GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse);

    /// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
    int ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse);

    /// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
    int GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse);

    /// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
    int StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse);

    /// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
    int StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse);

    /// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
    int GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse);

    /// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
    int CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse);

    /// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
    int GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse);

    /// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
    int SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse);

    /// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
    int DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse);


};

#endif // DEVICESERVICEEXT_H
