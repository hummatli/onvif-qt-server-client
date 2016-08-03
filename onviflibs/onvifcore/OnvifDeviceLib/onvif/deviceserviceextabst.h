#ifndef DEVICESERVICEEXTABST_H
#define DEVICESERVICEEXTABST_H

#include "soap/onvifdeviceH.h"

class DeviceServiceExtAbst
{
public:
    DeviceServiceExtAbst(){

    };

    /// Web service operation 'GetServices' (returns error code or SOAP_OK)
    virtual	int GetServices(_devicews__GetServices *devicews__GetServices, _devicews__GetServicesResponse &devicews__GetServicesResponse)  = 0;

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_devicews__GetServiceCapabilities *devicews__GetServiceCapabilities, _devicews__GetServiceCapabilitiesResponse &devicews__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetDeviceInformation' (returns error code or SOAP_OK)
    virtual	int GetDeviceInformation(_devicews__GetDeviceInformation *devicews__GetDeviceInformation, _devicews__GetDeviceInformationResponse &devicews__GetDeviceInformationResponse)  = 0;

    /// Web service operation 'SetSystemDateAndTime' (returns error code or SOAP_OK)
    virtual	int SetSystemDateAndTime(_devicews__SetSystemDateAndTime *devicews__SetSystemDateAndTime, _devicews__SetSystemDateAndTimeResponse &devicews__SetSystemDateAndTimeResponse)  = 0;

    /// Web service operation 'GetSystemDateAndTime' (returns error code or SOAP_OK)
    virtual	int GetSystemDateAndTime(_devicews__GetSystemDateAndTime *devicews__GetSystemDateAndTime, _devicews__GetSystemDateAndTimeResponse &devicews__GetSystemDateAndTimeResponse)  = 0;

    /// Web service operation 'SetSystemFactoryDefault' (returns error code or SOAP_OK)
    virtual	int SetSystemFactoryDefault(_devicews__SetSystemFactoryDefault *devicews__SetSystemFactoryDefault, _devicews__SetSystemFactoryDefaultResponse &devicews__SetSystemFactoryDefaultResponse)  = 0;

    /// Web service operation 'UpgradeSystemFirmware' (returns error code or SOAP_OK)
    virtual	int UpgradeSystemFirmware(_devicews__UpgradeSystemFirmware *devicews__UpgradeSystemFirmware, _devicews__UpgradeSystemFirmwareResponse &devicews__UpgradeSystemFirmwareResponse)  = 0;

    /// Web service operation 'SystemReboot' (returns error code or SOAP_OK)
    virtual	int SystemReboot(_devicews__SystemReboot *devicews__SystemReboot, _devicews__SystemRebootResponse &devicews__SystemRebootResponse)  = 0;

    /// Web service operation 'RestoreSystem' (returns error code or SOAP_OK)
    virtual	int RestoreSystem(_devicews__RestoreSystem *devicews__RestoreSystem, _devicews__RestoreSystemResponse &devicews__RestoreSystemResponse)  = 0;

    /// Web service operation 'GetSystemBackup' (returns error code or SOAP_OK)
    virtual	int GetSystemBackup(_devicews__GetSystemBackup *devicews__GetSystemBackup, _devicews__GetSystemBackupResponse &devicews__GetSystemBackupResponse)  = 0;

    /// Web service operation 'GetSystemLog' (returns error code or SOAP_OK)
    virtual	int GetSystemLog(_devicews__GetSystemLog *devicews__GetSystemLog, _devicews__GetSystemLogResponse &devicews__GetSystemLogResponse)  = 0;

    /// Web service operation 'GetSystemSupportInformation' (returns error code or SOAP_OK)
    virtual	int GetSystemSupportInformation(_devicews__GetSystemSupportInformation *devicews__GetSystemSupportInformation, _devicews__GetSystemSupportInformationResponse &devicews__GetSystemSupportInformationResponse)  = 0;

    /// Web service operation 'GetScopes' (returns error code or SOAP_OK)
    virtual	int GetScopes(_devicews__GetScopes *devicews__GetScopes, _devicews__GetScopesResponse &devicews__GetScopesResponse)  = 0;

    /// Web service operation 'SetScopes' (returns error code or SOAP_OK)
    virtual	int SetScopes(_devicews__SetScopes *devicews__SetScopes, _devicews__SetScopesResponse &devicews__SetScopesResponse)  = 0;

    /// Web service operation 'AddScopes' (returns error code or SOAP_OK)
    virtual	int AddScopes(_devicews__AddScopes *devicews__AddScopes, _devicews__AddScopesResponse &devicews__AddScopesResponse)  = 0;

    /// Web service operation 'RemoveScopes' (returns error code or SOAP_OK)
    virtual	int RemoveScopes(_devicews__RemoveScopes *devicews__RemoveScopes, _devicews__RemoveScopesResponse &devicews__RemoveScopesResponse)  = 0;

    /// Web service operation 'GetDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int GetDiscoveryMode(_devicews__GetDiscoveryMode *devicews__GetDiscoveryMode, _devicews__GetDiscoveryModeResponse &devicews__GetDiscoveryModeResponse)  = 0;

    /// Web service operation 'SetDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int SetDiscoveryMode(_devicews__SetDiscoveryMode *devicews__SetDiscoveryMode, _devicews__SetDiscoveryModeResponse &devicews__SetDiscoveryModeResponse)  = 0;

    /// Web service operation 'GetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int GetRemoteDiscoveryMode(_devicews__GetRemoteDiscoveryMode *devicews__GetRemoteDiscoveryMode, _devicews__GetRemoteDiscoveryModeResponse &devicews__GetRemoteDiscoveryModeResponse)  = 0;

    /// Web service operation 'SetRemoteDiscoveryMode' (returns error code or SOAP_OK)
    virtual	int SetRemoteDiscoveryMode(_devicews__SetRemoteDiscoveryMode *devicews__SetRemoteDiscoveryMode, _devicews__SetRemoteDiscoveryModeResponse &devicews__SetRemoteDiscoveryModeResponse)  = 0;

    /// Web service operation 'GetDPAddresses' (returns error code or SOAP_OK)
    virtual	int GetDPAddresses(_devicews__GetDPAddresses *devicews__GetDPAddresses, _devicews__GetDPAddressesResponse &devicews__GetDPAddressesResponse)  = 0;

    /// Web service operation 'GetEndpointReference' (returns error code or SOAP_OK)
    virtual	int GetEndpointReference(_devicews__GetEndpointReference *devicews__GetEndpointReference, _devicews__GetEndpointReferenceResponse &devicews__GetEndpointReferenceResponse)  = 0;

    /// Web service operation 'GetRemoteUser' (returns error code or SOAP_OK)
    virtual	int GetRemoteUser(_devicews__GetRemoteUser *devicews__GetRemoteUser, _devicews__GetRemoteUserResponse &devicews__GetRemoteUserResponse)  = 0;

    /// Web service operation 'SetRemoteUser' (returns error code or SOAP_OK)
    virtual	int SetRemoteUser(_devicews__SetRemoteUser *devicews__SetRemoteUser, _devicews__SetRemoteUserResponse &devicews__SetRemoteUserResponse)  = 0;

    /// Web service operation 'GetUsers' (returns error code or SOAP_OK)
    virtual	int GetUsers(_devicews__GetUsers *devicews__GetUsers, _devicews__GetUsersResponse &devicews__GetUsersResponse)  = 0;

    /// Web service operation 'CreateUsers' (returns error code or SOAP_OK)
    virtual	int CreateUsers(_devicews__CreateUsers *devicews__CreateUsers, _devicews__CreateUsersResponse &devicews__CreateUsersResponse)  = 0;

    /// Web service operation 'DeleteUsers' (returns error code or SOAP_OK)
    virtual	int DeleteUsers(_devicews__DeleteUsers *devicews__DeleteUsers, _devicews__DeleteUsersResponse &devicews__DeleteUsersResponse)  = 0;

    /// Web service operation 'SetUser' (returns error code or SOAP_OK)
    virtual	int SetUser(_devicews__SetUser *devicews__SetUser, _devicews__SetUserResponse &devicews__SetUserResponse)  = 0;

    /// Web service operation 'GetWsdlUrl' (returns error code or SOAP_OK)
    virtual	int GetWsdlUrl(_devicews__GetWsdlUrl *devicews__GetWsdlUrl, _devicews__GetWsdlUrlResponse &devicews__GetWsdlUrlResponse)  = 0;

    /// Web service operation 'GetCapabilities' (returns error code or SOAP_OK)
    virtual	int GetCapabilities(_devicews__GetCapabilities *devicews__GetCapabilities, _devicews__GetCapabilitiesResponse &devicews__GetCapabilitiesResponse)  = 0;

    /// Web service operation 'SetDPAddresses' (returns error code or SOAP_OK)
    virtual	int SetDPAddresses(_devicews__SetDPAddresses *devicews__SetDPAddresses, _devicews__SetDPAddressesResponse &devicews__SetDPAddressesResponse)  = 0;

    /// Web service operation 'GetHostname' (returns error code or SOAP_OK)
    virtual	int GetHostname(_devicews__GetHostname *devicews__GetHostname, _devicews__GetHostnameResponse &devicews__GetHostnameResponse)  = 0;

    /// Web service operation 'SetHostname' (returns error code or SOAP_OK)
    virtual	int SetHostname(_devicews__SetHostname *devicews__SetHostname, _devicews__SetHostnameResponse &devicews__SetHostnameResponse)  = 0;

    /// Web service operation 'SetHostnameFromDHCP' (returns error code or SOAP_OK)
    virtual	int SetHostnameFromDHCP(_devicews__SetHostnameFromDHCP *devicews__SetHostnameFromDHCP, _devicews__SetHostnameFromDHCPResponse &devicews__SetHostnameFromDHCPResponse)  = 0;

    /// Web service operation 'GetDNS' (returns error code or SOAP_OK)
    virtual	int GetDNS(_devicews__GetDNS *devicews__GetDNS, _devicews__GetDNSResponse &devicews__GetDNSResponse)  = 0;

    /// Web service operation 'SetDNS' (returns error code or SOAP_OK)
    virtual	int SetDNS(_devicews__SetDNS *devicews__SetDNS, _devicews__SetDNSResponse &devicews__SetDNSResponse)  = 0;

    /// Web service operation 'GetNTP' (returns error code or SOAP_OK)
    virtual	int GetNTP(_devicews__GetNTP *devicews__GetNTP, _devicews__GetNTPResponse &devicews__GetNTPResponse)  = 0;

    /// Web service operation 'SetNTP' (returns error code or SOAP_OK)
    virtual	int SetNTP(_devicews__SetNTP *devicews__SetNTP, _devicews__SetNTPResponse &devicews__SetNTPResponse)  = 0;

    /// Web service operation 'GetDynamicDNS' (returns error code or SOAP_OK)
    virtual	int GetDynamicDNS(_devicews__GetDynamicDNS *devicews__GetDynamicDNS, _devicews__GetDynamicDNSResponse &devicews__GetDynamicDNSResponse)  = 0;

    /// Web service operation 'SetDynamicDNS' (returns error code or SOAP_OK)
    virtual	int SetDynamicDNS(_devicews__SetDynamicDNS *devicews__SetDynamicDNS, _devicews__SetDynamicDNSResponse &devicews__SetDynamicDNSResponse)  = 0;

    /// Web service operation 'GetNetworkInterfaces' (returns error code or SOAP_OK)
    virtual	int GetNetworkInterfaces(_devicews__GetNetworkInterfaces *devicews__GetNetworkInterfaces, _devicews__GetNetworkInterfacesResponse &devicews__GetNetworkInterfacesResponse)  = 0;

    /// Web service operation 'SetNetworkInterfaces' (returns error code or SOAP_OK)
    virtual	int SetNetworkInterfaces(_devicews__SetNetworkInterfaces *devicews__SetNetworkInterfaces, _devicews__SetNetworkInterfacesResponse &devicews__SetNetworkInterfacesResponse)  = 0;

    /// Web service operation 'GetNetworkProtocols' (returns error code or SOAP_OK)
    virtual	int GetNetworkProtocols(_devicews__GetNetworkProtocols *devicews__GetNetworkProtocols, _devicews__GetNetworkProtocolsResponse &devicews__GetNetworkProtocolsResponse)  = 0;

    /// Web service operation 'SetNetworkProtocols' (returns error code or SOAP_OK)
    virtual	int SetNetworkProtocols(_devicews__SetNetworkProtocols *devicews__SetNetworkProtocols, _devicews__SetNetworkProtocolsResponse &devicews__SetNetworkProtocolsResponse)  = 0;

    /// Web service operation 'GetNetworkDefaultGateway' (returns error code or SOAP_OK)
    virtual	int GetNetworkDefaultGateway(_devicews__GetNetworkDefaultGateway *devicews__GetNetworkDefaultGateway, _devicews__GetNetworkDefaultGatewayResponse &devicews__GetNetworkDefaultGatewayResponse)  = 0;

    /// Web service operation 'SetNetworkDefaultGateway' (returns error code or SOAP_OK)
    virtual	int SetNetworkDefaultGateway(_devicews__SetNetworkDefaultGateway *devicews__SetNetworkDefaultGateway, _devicews__SetNetworkDefaultGatewayResponse &devicews__SetNetworkDefaultGatewayResponse)  = 0;

    /// Web service operation 'GetZeroConfiguration' (returns error code or SOAP_OK)
    virtual	int GetZeroConfiguration(_devicews__GetZeroConfiguration *devicews__GetZeroConfiguration, _devicews__GetZeroConfigurationResponse &devicews__GetZeroConfigurationResponse)  = 0;

    /// Web service operation 'SetZeroConfiguration' (returns error code or SOAP_OK)
    virtual	int SetZeroConfiguration(_devicews__SetZeroConfiguration *devicews__SetZeroConfiguration, _devicews__SetZeroConfigurationResponse &devicews__SetZeroConfigurationResponse)  = 0;

    /// Web service operation 'GetIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int GetIPAddressFilter(_devicews__GetIPAddressFilter *devicews__GetIPAddressFilter, _devicews__GetIPAddressFilterResponse &devicews__GetIPAddressFilterResponse)  = 0;

    /// Web service operation 'SetIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int SetIPAddressFilter(_devicews__SetIPAddressFilter *devicews__SetIPAddressFilter, _devicews__SetIPAddressFilterResponse &devicews__SetIPAddressFilterResponse)  = 0;

    /// Web service operation 'AddIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int AddIPAddressFilter(_devicews__AddIPAddressFilter *devicews__AddIPAddressFilter, _devicews__AddIPAddressFilterResponse &devicews__AddIPAddressFilterResponse)  = 0;

    /// Web service operation 'RemoveIPAddressFilter' (returns error code or SOAP_OK)
    virtual	int RemoveIPAddressFilter(_devicews__RemoveIPAddressFilter *devicews__RemoveIPAddressFilter, _devicews__RemoveIPAddressFilterResponse &devicews__RemoveIPAddressFilterResponse)  = 0;

    /// Web service operation 'GetAccessPolicy' (returns error code or SOAP_OK)
    virtual	int GetAccessPolicy(_devicews__GetAccessPolicy *devicews__GetAccessPolicy, _devicews__GetAccessPolicyResponse &devicews__GetAccessPolicyResponse)  = 0;

    /// Web service operation 'SetAccessPolicy' (returns error code or SOAP_OK)
    virtual	int SetAccessPolicy(_devicews__SetAccessPolicy *devicews__SetAccessPolicy, _devicews__SetAccessPolicyResponse &devicews__SetAccessPolicyResponse)  = 0;

    /// Web service operation 'CreateCertificate' (returns error code or SOAP_OK)
    virtual	int CreateCertificate(_devicews__CreateCertificate *devicews__CreateCertificate, _devicews__CreateCertificateResponse &devicews__CreateCertificateResponse)  = 0;

    /// Web service operation 'GetCertificates' (returns error code or SOAP_OK)
    virtual	int GetCertificates(_devicews__GetCertificates *devicews__GetCertificates, _devicews__GetCertificatesResponse &devicews__GetCertificatesResponse)  = 0;

    /// Web service operation 'GetCertificatesStatus' (returns error code or SOAP_OK)
    virtual	int GetCertificatesStatus(_devicews__GetCertificatesStatus *devicews__GetCertificatesStatus, _devicews__GetCertificatesStatusResponse &devicews__GetCertificatesStatusResponse)  = 0;

    /// Web service operation 'SetCertificatesStatus' (returns error code or SOAP_OK)
    virtual	int SetCertificatesStatus(_devicews__SetCertificatesStatus *devicews__SetCertificatesStatus, _devicews__SetCertificatesStatusResponse &devicews__SetCertificatesStatusResponse)  = 0;

    /// Web service operation 'DeleteCertificates' (returns error code or SOAP_OK)
    virtual	int DeleteCertificates(_devicews__DeleteCertificates *devicews__DeleteCertificates, _devicews__DeleteCertificatesResponse &devicews__DeleteCertificatesResponse)  = 0;

    /// Web service operation 'GetPkcs10Request' (returns error code or SOAP_OK)
    virtual	int GetPkcs10Request(_devicews__GetPkcs10Request *devicews__GetPkcs10Request, _devicews__GetPkcs10RequestResponse &devicews__GetPkcs10RequestResponse)  = 0;

    /// Web service operation 'LoadCertificates' (returns error code or SOAP_OK)
    virtual	int LoadCertificates(_devicews__LoadCertificates *devicews__LoadCertificates, _devicews__LoadCertificatesResponse &devicews__LoadCertificatesResponse)  = 0;

    /// Web service operation 'GetClientCertificateMode' (returns error code or SOAP_OK)
    virtual	int GetClientCertificateMode(_devicews__GetClientCertificateMode *devicews__GetClientCertificateMode, _devicews__GetClientCertificateModeResponse &devicews__GetClientCertificateModeResponse)  = 0;

    /// Web service operation 'SetClientCertificateMode' (returns error code or SOAP_OK)
    virtual	int SetClientCertificateMode(_devicews__SetClientCertificateMode *devicews__SetClientCertificateMode, _devicews__SetClientCertificateModeResponse &devicews__SetClientCertificateModeResponse)  = 0;

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    virtual	int GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse)  = 0;

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputSettings(_devicews__SetRelayOutputSettings *devicews__SetRelayOutputSettings, _devicews__SetRelayOutputSettingsResponse &devicews__SetRelayOutputSettingsResponse)  = 0;

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse)  = 0;

    /// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
    virtual	int SendAuxiliaryCommand(_devicews__SendAuxiliaryCommand *devicews__SendAuxiliaryCommand, _devicews__SendAuxiliaryCommandResponse &devicews__SendAuxiliaryCommandResponse)  = 0;

    /// Web service operation 'GetCACertificates' (returns error code or SOAP_OK)
    virtual	int GetCACertificates(_devicews__GetCACertificates *devicews__GetCACertificates, _devicews__GetCACertificatesResponse &devicews__GetCACertificatesResponse)  = 0;

    /// Web service operation 'LoadCertificateWithPrivateKey' (returns error code or SOAP_OK)
    virtual	int LoadCertificateWithPrivateKey(_devicews__LoadCertificateWithPrivateKey *devicews__LoadCertificateWithPrivateKey, _devicews__LoadCertificateWithPrivateKeyResponse &devicews__LoadCertificateWithPrivateKeyResponse)  = 0;

    /// Web service operation 'GetCertificateInformation' (returns error code or SOAP_OK)
    virtual	int GetCertificateInformation(_devicews__GetCertificateInformation *devicews__GetCertificateInformation, _devicews__GetCertificateInformationResponse &devicews__GetCertificateInformationResponse)  = 0;

    /// Web service operation 'LoadCACertificates' (returns error code or SOAP_OK)
    virtual	int LoadCACertificates(_devicews__LoadCACertificates *devicews__LoadCACertificates, _devicews__LoadCACertificatesResponse &devicews__LoadCACertificatesResponse)  = 0;

    /// Web service operation 'CreateDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int CreateDot1XConfiguration(_devicews__CreateDot1XConfiguration *devicews__CreateDot1XConfiguration, _devicews__CreateDot1XConfigurationResponse &devicews__CreateDot1XConfigurationResponse)  = 0;

    /// Web service operation 'SetDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int SetDot1XConfiguration(_devicews__SetDot1XConfiguration *devicews__SetDot1XConfiguration, _devicews__SetDot1XConfigurationResponse &devicews__SetDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int GetDot1XConfiguration(_devicews__GetDot1XConfiguration *devicews__GetDot1XConfiguration, _devicews__GetDot1XConfigurationResponse &devicews__GetDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot1XConfigurations' (returns error code or SOAP_OK)
    virtual	int GetDot1XConfigurations(_devicews__GetDot1XConfigurations *devicews__GetDot1XConfigurations, _devicews__GetDot1XConfigurationsResponse &devicews__GetDot1XConfigurationsResponse)  = 0;

    /// Web service operation 'DeleteDot1XConfiguration' (returns error code or SOAP_OK)
    virtual	int DeleteDot1XConfiguration(_devicews__DeleteDot1XConfiguration *devicews__DeleteDot1XConfiguration, _devicews__DeleteDot1XConfigurationResponse &devicews__DeleteDot1XConfigurationResponse)  = 0;

    /// Web service operation 'GetDot11Capabilities' (returns error code or SOAP_OK)
    virtual	int GetDot11Capabilities(_devicews__GetDot11Capabilities *devicews__GetDot11Capabilities, _devicews__GetDot11CapabilitiesResponse &devicews__GetDot11CapabilitiesResponse)  = 0;

    /// Web service operation 'GetDot11Status' (returns error code or SOAP_OK)
    virtual	int GetDot11Status(_devicews__GetDot11Status *devicews__GetDot11Status, _devicews__GetDot11StatusResponse &devicews__GetDot11StatusResponse)  = 0;

    /// Web service operation 'ScanAvailableDot11Networks' (returns error code or SOAP_OK)
    virtual	int ScanAvailableDot11Networks(_devicews__ScanAvailableDot11Networks *devicews__ScanAvailableDot11Networks, _devicews__ScanAvailableDot11NetworksResponse &devicews__ScanAvailableDot11NetworksResponse)  = 0;

    /// Web service operation 'GetSystemUris' (returns error code or SOAP_OK)
    virtual	int GetSystemUris(_devicews__GetSystemUris *devicews__GetSystemUris, _devicews__GetSystemUrisResponse &devicews__GetSystemUrisResponse)  = 0;

    /// Web service operation 'StartFirmwareUpgrade' (returns error code or SOAP_OK)
    virtual	int StartFirmwareUpgrade(_devicews__StartFirmwareUpgrade *devicews__StartFirmwareUpgrade, _devicews__StartFirmwareUpgradeResponse &devicews__StartFirmwareUpgradeResponse)  = 0;

    /// Web service operation 'StartSystemRestore' (returns error code or SOAP_OK)
    virtual	int StartSystemRestore(_devicews__StartSystemRestore *devicews__StartSystemRestore, _devicews__StartSystemRestoreResponse &devicews__StartSystemRestoreResponse)  = 0;

    /// Web service operation 'GetStorageConfigurations' (returns error code or SOAP_OK)
    virtual	int GetStorageConfigurations(_devicews__GetStorageConfigurations *devicews__GetStorageConfigurations, _devicews__GetStorageConfigurationsResponse &devicews__GetStorageConfigurationsResponse)  = 0;

    /// Web service operation 'CreateStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int CreateStorageConfiguration(_devicews__CreateStorageConfiguration *devicews__CreateStorageConfiguration, _devicews__CreateStorageConfigurationResponse &devicews__CreateStorageConfigurationResponse)  = 0;

    /// Web service operation 'GetStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int GetStorageConfiguration(_devicews__GetStorageConfiguration *devicews__GetStorageConfiguration, _devicews__GetStorageConfigurationResponse &devicews__GetStorageConfigurationResponse)  = 0;

    /// Web service operation 'SetStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int SetStorageConfiguration(_devicews__SetStorageConfiguration *devicews__SetStorageConfiguration, _devicews__SetStorageConfigurationResponse &devicews__SetStorageConfigurationResponse)  = 0;

    /// Web service operation 'DeleteStorageConfiguration' (returns error code or SOAP_OK)
    virtual	int DeleteStorageConfiguration(_devicews__DeleteStorageConfiguration *devicews__DeleteStorageConfiguration, _devicews__DeleteStorageConfigurationResponse &devicews__DeleteStorageConfigurationResponse)  = 0;

};

#endif // DEVICESERVICEEXTABST_H
