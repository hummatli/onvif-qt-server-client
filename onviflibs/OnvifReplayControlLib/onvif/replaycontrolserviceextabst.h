#ifndef REPLAYCONTROLSERVICEEXTABST_H
#define REPLAYCONTROLSERVICEEXTABST_H

#include "soap/onvifreplaycontrolH.h"

class ReplayControlServiceExtAbst
{
public:
    ReplayControlServiceExtAbst(){

    };

    /// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
    virtual	int GetServiceCapabilities(_replaycontrol__GetServiceCapabilities *replaycontrol__GetServiceCapabilities, _replaycontrol__GetServiceCapabilitiesResponse &replaycontrol__GetServiceCapabilitiesResponse)  = 0;

    /// Web service operation 'GetReplayUri' (returns error code or SOAP_OK)
    virtual	int GetReplayUri(_replaycontrol__GetReplayUri *replaycontrol__GetReplayUri, _replaycontrol__GetReplayUriResponse &replaycontrol__GetReplayUriResponse)  = 0;

    /// Web service operation 'GetReplayConfiguration' (returns error code or SOAP_OK)
    virtual	int GetReplayConfiguration(_replaycontrol__GetReplayConfiguration *replaycontrol__GetReplayConfiguration, _replaycontrol__GetReplayConfigurationResponse &replaycontrol__GetReplayConfigurationResponse)  = 0;

    /// Web service operation 'SetReplayConfiguration' (returns error code or SOAP_OK)
    virtual	int SetReplayConfiguration(_replaycontrol__SetReplayConfiguration *replaycontrol__SetReplayConfiguration, _replaycontrol__SetReplayConfigurationResponse &replaycontrol__SetReplayConfigurationResponse)  = 0;

};

#endif // REPLAYCONTROLSERVICEEXTABST_H
