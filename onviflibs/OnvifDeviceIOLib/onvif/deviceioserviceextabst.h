#ifndef DEVICEIOSERVICEEXTABST_H
#define DEVICEIOSERVICEEXTABST_H

#include "soap/onvifdeviceioH.h"

class DeviceIOServiceExtAbst
{
public:
    DeviceIOServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_deviceio__GetServiceCapabilities *deviceio__GetServiceCapabilities, _deviceio__GetServiceCapabilitiesResponse &deviceio__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
    virtual	int GetRelayOutputOptions(_deviceio__GetRelayOutputOptions *deviceio__GetRelayOutputOptions, _deviceio__GetRelayOutputOptionsResponse &deviceio__GetRelayOutputOptionsResponse)  = 0;

    /// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
    virtual	int GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse)  = 0;

    /// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse)  = 0;

    /// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
    virtual	int GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse)  = 0;

    /// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
    virtual	int GetVideoOutputs(_deviceio__GetVideoOutputs *deviceio__GetVideoOutputs, _deviceio__GetVideoOutputsResponse &deviceio__GetVideoOutputsResponse)  = 0;

    /// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfiguration(_deviceio__GetVideoSourceConfiguration *deviceio__GetVideoSourceConfiguration, _deviceio__GetVideoSourceConfigurationResponse &deviceio__GetVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int GetVideoOutputConfiguration(_deviceio__GetVideoOutputConfiguration *deviceio__GetVideoOutputConfiguration, _deviceio__GetVideoOutputConfigurationResponse &deviceio__GetVideoOutputConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfiguration(_deviceio__GetAudioSourceConfiguration *deviceio__GetAudioSourceConfiguration, _deviceio__GetAudioSourceConfigurationResponse &deviceio__GetAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfiguration(_deviceio__GetAudioOutputConfiguration *deviceio__GetAudioOutputConfiguration, _deviceio__GetAudioOutputConfigurationResponse &deviceio__GetAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoSourceConfiguration(_deviceio__SetVideoSourceConfiguration *deviceio__SetVideoSourceConfiguration, _deviceio__SetVideoSourceConfigurationResponse &deviceio__SetVideoSourceConfigurationResponse)  = 0;

    /// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int SetVideoOutputConfiguration(_deviceio__SetVideoOutputConfiguration *deviceio__SetVideoOutputConfiguration, _deviceio__SetVideoOutputConfigurationResponse &deviceio__SetVideoOutputConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioSourceConfiguration(_deviceio__SetAudioSourceConfiguration *deviceio__SetAudioSourceConfiguration, _deviceio__SetAudioSourceConfigurationResponse &deviceio__SetAudioSourceConfigurationResponse)  = 0;

    /// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
    virtual	int SetAudioOutputConfiguration(_deviceio__SetAudioOutputConfiguration *deviceio__SetAudioOutputConfiguration, _deviceio__SetAudioOutputConfigurationResponse &deviceio__SetAudioOutputConfigurationResponse)  = 0;

    /// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoSourceConfigurationOptions(_deviceio__GetVideoSourceConfigurationOptions *deviceio__GetVideoSourceConfigurationOptions, _deviceio__GetVideoSourceConfigurationOptionsResponse &deviceio__GetVideoSourceConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetVideoOutputConfigurationOptions(_deviceio__GetVideoOutputConfigurationOptions *deviceio__GetVideoOutputConfigurationOptions, _deviceio__GetVideoOutputConfigurationOptionsResponse &deviceio__GetVideoOutputConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioSourceConfigurationOptions(_deviceio__GetAudioSourceConfigurationOptions *deviceio__GetAudioSourceConfigurationOptions, _deviceio__GetAudioSourceConfigurationOptionsResponse &deviceio__GetAudioSourceConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetAudioOutputConfigurationOptions(_deviceio__GetAudioOutputConfigurationOptions *deviceio__GetAudioOutputConfigurationOptions, _deviceio__GetAudioOutputConfigurationOptionsResponse &deviceio__GetAudioOutputConfigurationOptionsResponse)  = 0;

    /// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
    virtual	int GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse)  = 0;

    /// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputSettings(_deviceio__SetRelayOutputSettings *deviceio__SetRelayOutputSettings, _deviceio__SetRelayOutputSettingsResponse &deviceio__SetRelayOutputSettingsResponse)  = 0;

    /// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
    virtual	int SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse)  = 0;

    /// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
    virtual	int GetDigitalInputs(_deviceio__GetDigitalInputs *deviceio__GetDigitalInputs, _deviceio__GetDigitalInputsResponse &deviceio__GetDigitalInputsResponse)  = 0;

    /// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
    virtual	int GetSerialPorts(_deviceio__GetSerialPorts *deviceio__GetSerialPorts, _deviceio__GetSerialPortsResponse &deviceio__GetSerialPortsResponse)  = 0;

    /// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
    virtual	int GetSerialPortConfiguration(_deviceio__GetSerialPortConfiguration *deviceio__GetSerialPortConfiguration, _deviceio__GetSerialPortConfigurationResponse &deviceio__GetSerialPortConfigurationResponse)  = 0;

    /// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
    virtual	int SetSerialPortConfiguration(_deviceio__SetSerialPortConfiguration *deviceio__SetSerialPortConfiguration, _deviceio__SetSerialPortConfigurationResponse &deviceio__SetSerialPortConfigurationResponse)  = 0;

    /// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
    virtual	int GetSerialPortConfigurationOptions(_deviceio__GetSerialPortConfigurationOptions *deviceio__GetSerialPortConfigurationOptions, _deviceio__GetSerialPortConfigurationOptionsResponse &deviceio__GetSerialPortConfigurationOptionsResponse)  = 0;

    /// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
    virtual	int SendReceiveSerialCommand(_deviceio__SendReceiveSerialCommand *deviceio__SendReceiveSerialCommand, _deviceio__SendReceiveSerialCommandResponse &deviceio__SendReceiveSerialCommandResponse)  = 0;


};

#endif // DEVICEIOSERVICEEXTABST_H
