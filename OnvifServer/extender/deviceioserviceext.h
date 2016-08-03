#ifndef DEVICEIOSERVICEEXT_H
#define DEVICEIOSERVICEEXT_H
#include "onvif/deviceioserviceextabst.h"


class DeviceIOServiceExt : public DeviceIOServiceExtAbst
{
public:
    DeviceIOServiceExt();

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    int GetServiceCapabilities(_deviceio__GetServiceCapabilities *deviceio__GetServiceCapabilities, _deviceio__GetServiceCapabilitiesResponse &deviceio__GetServiceCapabilitiesResponse) ;

    /// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
    int GetRelayOutputOptions(_deviceio__GetRelayOutputOptions *deviceio__GetRelayOutputOptions, _deviceio__GetRelayOutputOptionsResponse &deviceio__GetRelayOutputOptionsResponse) ;

    /// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
    int GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) ;

    /// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
    int GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) ;

    /// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
    int GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) ;

    /// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
    int GetVideoOutputs(_deviceio__GetVideoOutputs *deviceio__GetVideoOutputs, _deviceio__GetVideoOutputsResponse &deviceio__GetVideoOutputsResponse) ;

    /// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int GetVideoSourceConfiguration(_deviceio__GetVideoSourceConfiguration *deviceio__GetVideoSourceConfiguration, _deviceio__GetVideoSourceConfigurationResponse &deviceio__GetVideoSourceConfigurationResponse) ;

    /// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
    int GetVideoOutputConfiguration(_deviceio__GetVideoOutputConfiguration *deviceio__GetVideoOutputConfiguration, _deviceio__GetVideoOutputConfigurationResponse &deviceio__GetVideoOutputConfigurationResponse) ;

    /// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int GetAudioSourceConfiguration(_deviceio__GetAudioSourceConfiguration *deviceio__GetAudioSourceConfiguration, _deviceio__GetAudioSourceConfigurationResponse &deviceio__GetAudioSourceConfigurationResponse) ;

    /// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int GetAudioOutputConfiguration(_deviceio__GetAudioOutputConfiguration *deviceio__GetAudioOutputConfiguration, _deviceio__GetAudioOutputConfigurationResponse &deviceio__GetAudioOutputConfigurationResponse) ;

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    int SetVideoSourceConfiguration(_deviceio__SetVideoSourceConfiguration *deviceio__SetVideoSourceConfiguration, _deviceio__SetVideoSourceConfigurationResponse &deviceio__SetVideoSourceConfigurationResponse) ;

    /// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
    int SetVideoOutputConfiguration(_deviceio__SetVideoOutputConfiguration *deviceio__SetVideoOutputConfiguration, _deviceio__SetVideoOutputConfigurationResponse &deviceio__SetVideoOutputConfigurationResponse) ;

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    int SetAudioSourceConfiguration(_deviceio__SetAudioSourceConfiguration *deviceio__SetAudioSourceConfiguration, _deviceio__SetAudioSourceConfigurationResponse &deviceio__SetAudioSourceConfigurationResponse) ;

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    int SetAudioOutputConfiguration(_deviceio__SetAudioOutputConfiguration *deviceio__SetAudioOutputConfiguration, _deviceio__SetAudioOutputConfigurationResponse &deviceio__SetAudioOutputConfigurationResponse) ;

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoSourceConfigurationOptions(_deviceio__GetVideoSourceConfigurationOptions *deviceio__GetVideoSourceConfigurationOptions, _deviceio__GetVideoSourceConfigurationOptionsResponse &deviceio__GetVideoSourceConfigurationOptionsResponse) ;

    /// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
    int GetVideoOutputConfigurationOptions(_deviceio__GetVideoOutputConfigurationOptions *deviceio__GetVideoOutputConfigurationOptions, _deviceio__GetVideoOutputConfigurationOptionsResponse &deviceio__GetVideoOutputConfigurationOptionsResponse) ;

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioSourceConfigurationOptions(_deviceio__GetAudioSourceConfigurationOptions *deviceio__GetAudioSourceConfigurationOptions, _deviceio__GetAudioSourceConfigurationOptionsResponse &deviceio__GetAudioSourceConfigurationOptionsResponse) ;

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    int GetAudioOutputConfigurationOptions(_deviceio__GetAudioOutputConfigurationOptions *deviceio__GetAudioOutputConfigurationOptions, _deviceio__GetAudioOutputConfigurationOptionsResponse &deviceio__GetAudioOutputConfigurationOptionsResponse) ;

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    int GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) ;

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    int SetRelayOutputSettings(_deviceio__SetRelayOutputSettings *deviceio__SetRelayOutputSettings, _deviceio__SetRelayOutputSettingsResponse &deviceio__SetRelayOutputSettingsResponse) ;

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    int SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) ;

    /// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
    int GetDigitalInputs(_deviceio__GetDigitalInputs *deviceio__GetDigitalInputs, _deviceio__GetDigitalInputsResponse &deviceio__GetDigitalInputsResponse) ;

    /// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
    int GetSerialPorts(_deviceio__GetSerialPorts *deviceio__GetSerialPorts, _deviceio__GetSerialPortsResponse &deviceio__GetSerialPortsResponse) ;

    /// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
    int GetSerialPortConfiguration(_deviceio__GetSerialPortConfiguration *deviceio__GetSerialPortConfiguration, _deviceio__GetSerialPortConfigurationResponse &deviceio__GetSerialPortConfigurationResponse) ;

    /// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
    int SetSerialPortConfiguration(_deviceio__SetSerialPortConfiguration *deviceio__SetSerialPortConfiguration, _deviceio__SetSerialPortConfigurationResponse &deviceio__SetSerialPortConfigurationResponse) ;

    /// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
    int GetSerialPortConfigurationOptions(_deviceio__GetSerialPortConfigurationOptions *deviceio__GetSerialPortConfigurationOptions, _deviceio__GetSerialPortConfigurationOptionsResponse &deviceio__GetSerialPortConfigurationOptionsResponse) ;

    /// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
    int SendReceiveSerialCommand(_deviceio__SendReceiveSerialCommand *deviceio__SendReceiveSerialCommand, _deviceio__SendReceiveSerialCommandResponse &deviceio__SendReceiveSerialCommandResponse) ;

};

#endif // DEVICEIOSERVICEEXT_H
