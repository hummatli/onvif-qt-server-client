#include "deviceioserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>

DeviceIOServiceExt::DeviceIOServiceExt() : DeviceIOServiceExtAbst()
{

}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetServiceCapabilities(_deviceio__GetServiceCapabilities *deviceio__GetServiceCapabilities, _deviceio__GetServiceCapabilitiesResponse &deviceio__GetServiceCapabilitiesResponse){
    qDebug() << "Device IO Servcie in NVT\n";
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetRelayOutputOptions(_deviceio__GetRelayOutputOptions *deviceio__GetRelayOutputOptions, _deviceio__GetRelayOutputOptionsResponse &deviceio__GetRelayOutputOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSources' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioSources(_mediaws__GetAudioSources *mediaws__GetAudioSources, _mediaws__GetAudioSourcesResponse &mediaws__GetAudioSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputs' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioOutputs(_mediaws__GetAudioOutputs *mediaws__GetAudioOutputs, _mediaws__GetAudioOutputsResponse &mediaws__GetAudioOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSources' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoSources(_mediaws__GetVideoSources *mediaws__GetVideoSources, _mediaws__GetVideoSourcesResponse &mediaws__GetVideoSourcesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputs' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoOutputs(_deviceio__GetVideoOutputs *deviceio__GetVideoOutputs, _deviceio__GetVideoOutputsResponse &deviceio__GetVideoOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoSourceConfiguration(_deviceio__GetVideoSourceConfiguration *deviceio__GetVideoSourceConfiguration, _deviceio__GetVideoSourceConfigurationResponse &deviceio__GetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoOutputConfiguration(_deviceio__GetVideoOutputConfiguration *deviceio__GetVideoOutputConfiguration, _deviceio__GetVideoOutputConfigurationResponse &deviceio__GetVideoOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioSourceConfiguration(_deviceio__GetAudioSourceConfiguration *deviceio__GetAudioSourceConfiguration, _deviceio__GetAudioSourceConfigurationResponse &deviceio__GetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioOutputConfiguration(_deviceio__GetAudioOutputConfiguration *deviceio__GetAudioOutputConfiguration, _deviceio__GetAudioOutputConfigurationResponse &deviceio__GetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetVideoSourceConfiguration(_deviceio__SetVideoSourceConfiguration *deviceio__SetVideoSourceConfiguration, _deviceio__SetVideoSourceConfigurationResponse &deviceio__SetVideoSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetVideoOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetVideoOutputConfiguration(_deviceio__SetVideoOutputConfiguration *deviceio__SetVideoOutputConfiguration, _deviceio__SetVideoOutputConfigurationResponse &deviceio__SetVideoOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioSourceConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetAudioSourceConfiguration(_deviceio__SetAudioSourceConfiguration *deviceio__SetAudioSourceConfiguration, _deviceio__SetAudioSourceConfigurationResponse &deviceio__SetAudioSourceConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetAudioOutputConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetAudioOutputConfiguration(_deviceio__SetAudioOutputConfiguration *deviceio__SetAudioOutputConfiguration, _deviceio__SetAudioOutputConfigurationResponse &deviceio__SetAudioOutputConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoSourceConfigurationOptions(_deviceio__GetVideoSourceConfigurationOptions *deviceio__GetVideoSourceConfigurationOptions, _deviceio__GetVideoSourceConfigurationOptionsResponse &deviceio__GetVideoSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetVideoOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetVideoOutputConfigurationOptions(_deviceio__GetVideoOutputConfigurationOptions *deviceio__GetVideoOutputConfigurationOptions, _deviceio__GetVideoOutputConfigurationOptionsResponse &deviceio__GetVideoOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioSourceConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioSourceConfigurationOptions(_deviceio__GetAudioSourceConfigurationOptions *deviceio__GetAudioSourceConfigurationOptions, _deviceio__GetAudioSourceConfigurationOptionsResponse &deviceio__GetAudioSourceConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetAudioOutputConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetAudioOutputConfigurationOptions(_deviceio__GetAudioOutputConfigurationOptions *deviceio__GetAudioOutputConfigurationOptions, _deviceio__GetAudioOutputConfigurationOptionsResponse &deviceio__GetAudioOutputConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetRelayOutputs' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetRelayOutputs(_devicews__GetRelayOutputs *devicews__GetRelayOutputs, _devicews__GetRelayOutputsResponse &devicews__GetRelayOutputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputSettings' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetRelayOutputSettings(_deviceio__SetRelayOutputSettings *deviceio__SetRelayOutputSettings, _deviceio__SetRelayOutputSettingsResponse &deviceio__SetRelayOutputSettingsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetRelayOutputState' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetRelayOutputState(_devicews__SetRelayOutputState *devicews__SetRelayOutputState, _devicews__SetRelayOutputStateResponse &devicews__SetRelayOutputStateResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetDigitalInputs' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetDigitalInputs(_deviceio__GetDigitalInputs *deviceio__GetDigitalInputs, _deviceio__GetDigitalInputsResponse &deviceio__GetDigitalInputsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPorts' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetSerialPorts(_deviceio__GetSerialPorts *deviceio__GetSerialPorts, _deviceio__GetSerialPortsResponse &deviceio__GetSerialPortsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetSerialPortConfiguration(_deviceio__GetSerialPortConfiguration *deviceio__GetSerialPortConfiguration, _deviceio__GetSerialPortConfigurationResponse &deviceio__GetSerialPortConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'SetSerialPortConfiguration' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SetSerialPortConfiguration(_deviceio__SetSerialPortConfiguration *deviceio__SetSerialPortConfiguration, _deviceio__SetSerialPortConfigurationResponse &deviceio__SetSerialPortConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetSerialPortConfigurationOptions' (returns error code or SOAP_OK)
int DeviceIOServiceExt::GetSerialPortConfigurationOptions(_deviceio__GetSerialPortConfigurationOptions *deviceio__GetSerialPortConfigurationOptions, _deviceio__GetSerialPortConfigurationOptionsResponse &deviceio__GetSerialPortConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'SendReceiveSerialCommand' (returns error code or SOAP_OK)
int DeviceIOServiceExt::SendReceiveSerialCommand(_deviceio__SendReceiveSerialCommand *deviceio__SendReceiveSerialCommand, _deviceio__SendReceiveSerialCommandResponse &deviceio__SendReceiveSerialCommandResponse) {
    return SOAP_OK;
}


