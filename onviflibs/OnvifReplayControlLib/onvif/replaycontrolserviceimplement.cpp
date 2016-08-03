#include "soap/onvifreplaycontrolReplayBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/replaycontrolservice.h"

ReplayControlServiceExtAbst * ReplayControlService::serviceExt = NULL;



/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int ReplayBindingService::GetServiceCapabilities(_replaycontrol__GetServiceCapabilities *replaycontrol__GetServiceCapabilities, _replaycontrol__GetServiceCapabilitiesResponse &replaycontrol__GetServiceCapabilitiesResponse) {
    if(ReplayControlService::serviceExt != NULL){
        return ReplayControlService::serviceExt->GetServiceCapabilities(replaycontrol__GetServiceCapabilities,replaycontrol__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "ReplayControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetReplayUri' (returns error code or SOAP_OK)
int ReplayBindingService::GetReplayUri(_replaycontrol__GetReplayUri *replaycontrol__GetReplayUri, _replaycontrol__GetReplayUriResponse &replaycontrol__GetReplayUriResponse){
    if(ReplayControlService::serviceExt != NULL){
        return ReplayControlService::serviceExt->GetReplayUri(replaycontrol__GetReplayUri,  replaycontrol__GetReplayUriResponse);
    } else {
        qDebug() << "ReplayControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetReplayConfiguration' (returns error code or SOAP_OK)
int ReplayBindingService::GetReplayConfiguration(_replaycontrol__GetReplayConfiguration *replaycontrol__GetReplayConfiguration, _replaycontrol__GetReplayConfigurationResponse &replaycontrol__GetReplayConfigurationResponse) {
    if(ReplayControlService::serviceExt != NULL){
        return ReplayControlService::serviceExt->GetReplayConfiguration( replaycontrol__GetReplayConfiguration, replaycontrol__GetReplayConfigurationResponse);
    } else {
        qDebug() << "ReplayControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetReplayConfiguration' (returns error code or SOAP_OK)
int ReplayBindingService::SetReplayConfiguration(_replaycontrol__SetReplayConfiguration *replaycontrol__SetReplayConfiguration, _replaycontrol__SetReplayConfigurationResponse &replaycontrol__SetReplayConfigurationResponse) {
    if(ReplayControlService::serviceExt != NULL){
        return ReplayControlService::serviceExt->SetReplayConfiguration( replaycontrol__SetReplayConfiguration, replaycontrol__SetReplayConfigurationResponse);
    } else {
        qDebug() << "ReplayControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
