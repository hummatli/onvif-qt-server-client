#include "ptzserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifptzPTZBindingProxy.h"

PTZServiceExt::PTZServiceExt() : PTZServiceExtAbst()
{

}

/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int PTZServiceExt::GetServiceCapabilities(_ptzws__GetServiceCapabilities *ptzws__GetServiceCapabilities, _ptzws__GetServiceCapabilitiesResponse &ptzws__GetServiceCapabilitiesResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetConfigurations' (returns error code or SOAP_OK)
int PTZServiceExt::GetConfigurations(_ptzws__GetConfigurations *ptzws__GetConfigurations, _ptzws__GetConfigurationsResponse &ptzws__GetConfigurationsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetPresets' (returns error code or SOAP_OK)
int PTZServiceExt::GetPresets(_ptzws__GetPresets *ptzws__GetPresets, _ptzws__GetPresetsResponse &ptzws__GetPresetsResponse) {
    qDebug() << "PTZ Service GetPresets  in NVT profile = " << ptzws__GetPresets->ProfileToken.data() << "\n";

    return SOAP_OK;
}

/// Web service operation 'SetPreset' (returns error code or SOAP_OK)
int PTZServiceExt::SetPreset(_ptzws__SetPreset *ptzws__SetPreset, _ptzws__SetPresetResponse &ptzws__SetPresetResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemovePreset' (returns error code or SOAP_OK)
int PTZServiceExt::RemovePreset(_ptzws__RemovePreset *ptzws__RemovePreset, _ptzws__RemovePresetResponse &ptzws__RemovePresetResponse) {
    return SOAP_OK;
}

/// Web service operation 'GotoPreset' (returns error code or SOAP_OK)
int PTZServiceExt::GotoPreset(_ptzws__GotoPreset *ptzws__GotoPreset, _ptzws__GotoPresetResponse &ptzws__GotoPresetResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
int PTZServiceExt::GetStatus(_ptzws__GetStatus *ptzws__GetStatus, _ptzws__GetStatusResponse &ptzws__GetStatusResponse) {
    qDebug() << "PTZ Service GetStatus  in NVT profile = " << ptzws__GetStatus->ProfileToken.data() << "\n";
    ptzws__GetStatusResponse.PTZStatus = new tt__PTZStatus;

    ptzws__GetStatusResponse.PTZStatus->Position = new tt__PTZVector;
    ptzws__GetStatusResponse.PTZStatus->Position->PanTilt = new tt__Vector2D;
    ptzws__GetStatusResponse.PTZStatus->Position->PanTilt->space = new std::string;
    ptzws__GetStatusResponse.PTZStatus->Position->PanTilt->space->assign("http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace");
    ptzws__GetStatusResponse.PTZStatus->Position->PanTilt->x = 0;
    ptzws__GetStatusResponse.PTZStatus->Position->PanTilt->y = 0;

    ptzws__GetStatusResponse.PTZStatus->Position->Zoom = new tt__Vector1D;
    ptzws__GetStatusResponse.PTZStatus->Position->Zoom->space = new std::string;
    ptzws__GetStatusResponse.PTZStatus->Position->Zoom->space->assign("http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace");
    ptzws__GetStatusResponse.PTZStatus->Position->Zoom->x = 0;

    ptzws__GetStatusResponse.PTZStatus->MoveStatus = new tt__PTZMoveStatus;
    tt__MoveStatus statusIdle = tt__MoveStatus__IDLE;
    ptzws__GetStatusResponse.PTZStatus->MoveStatus->PanTilt = &statusIdle;
    ptzws__GetStatusResponse.PTZStatus->MoveStatus->Zoom = &statusIdle;

    //ptzws__GetStatusResponse.PTZStatus->UtcTime = ;

    return SOAP_OK;
}

/// Web service operation 'GetConfiguration' (returns error code or SOAP_OK)
int PTZServiceExt::GetConfiguration(_ptzws__GetConfiguration *ptzws__GetConfiguration, _ptzws__GetConfigurationResponse &ptzws__GetConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetNodes' (returns error code or SOAP_OK)
int PTZServiceExt::GetNodes(_ptzws__GetNodes *ptzws__GetNodes, _ptzws__GetNodesResponse &ptzws__GetNodesResponse) {
    qDebug() << "PTZ service in GetNodes NVT\n" ;

    tt__PTZNode * ptzNode = new tt__PTZNode;
    ptzNode->FixedHomePosition = 0;
    ptzNode->Name = new std::string;
    ptzNode->Name->assign("PTZNode_Channel1");
    ptzNode->SupportedPTZSpaces = new tt__PTZSpaces;

    tt__Space2DDescription * space1 = new tt__Space2DDescription;
    space1->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
    space1->XRange = new tt__FloatRange;
    space1->XRange->Min = -1;
    space1->XRange->Max = 1;
    space1->YRange = new tt__FloatRange;
    space1->YRange->Min = -1;
    space1->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->AbsolutePanTiltPositionSpace.push_back(space1);

    tt__Space1DDescription * space2 = new tt__Space1DDescription;
    space2->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
    space2->XRange = new tt__FloatRange;
    space2->XRange->Min = 0;
    space2->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->AbsoluteZoomPositionSpace.push_back(space2);

    tt__Space2DDescription * space3 = new tt__Space2DDescription;
    space3->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace";
    space3->XRange = new tt__FloatRange;
    space3->XRange->Min = -1;
    space3->XRange->Max = 1;
    space3->YRange = new tt__FloatRange;
    space3->YRange->Min = -1;
    space3->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->RelativePanTiltTranslationSpace.push_back(space3);


    tt__Space1DDescription * space4 = new tt__Space1DDescription;
    space4->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace";
    space4->XRange = new tt__FloatRange;
    space4->XRange->Min = -1;
    space4->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->RelativeZoomTranslationSpace.push_back(space4);


    tt__Space2DDescription * space5 = new tt__Space2DDescription;
    space5->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace";
    space5->XRange = new tt__FloatRange;
    space5->XRange->Min = -1;
    space5->XRange->Max = 1;
    space5->YRange = new tt__FloatRange;
    space5->YRange->Min = -1;
    space5->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ContinuousPanTiltVelocitySpace.push_back(space5);

    tt__Space1DDescription * space6 = new tt__Space1DDescription;
    space6->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace";
    space6->XRange = new tt__FloatRange;
    space6->XRange->Min = -1;
    space6->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ContinuousZoomVelocitySpace.push_back(space6);

    tt__Space1DDescription * space7 = new tt__Space1DDescription;
    space7->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace";
    space7->XRange = new tt__FloatRange;
    space7->XRange->Min = 0;
    space7->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->PanTiltSpeedSpace.push_back(space7);

    tt__Space1DDescription * space8 = new tt__Space1DDescription;
    space8->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace";
    space8->XRange = new tt__FloatRange;
    space8->XRange->Min = 0;
    space8->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ZoomSpeedSpace.push_back(space8);

    ptzNode->MaximumNumberOfPresets = 80;
    ptzNode->HomeSupported = true;

    ptzNode->Extension = new tt__PTZNodeExtension;
    ptzNode->Extension->SupportedPresetTour = new tt__PTZPresetTourSupported;
    ptzNode->Extension->SupportedPresetTour->MaximumNumberOfPresetTours = 8;
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Start);
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Stop);
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Pause);

    ptzws__GetNodesResponse.PTZNode.push_back(ptzNode);

    return SOAP_OK;
}

/// Web service operation 'GetNode' (returns error code or SOAP_OK)
int PTZServiceExt::GetNode(_ptzws__GetNode *ptzws__GetNode, _ptzws__GetNodeResponse &ptzws__GetNodeResponse) {
    qDebug() << "PTZ service in GetNode NVT \n" ;

    tt__PTZNode *ptzNode = new tt__PTZNode;
    ptzNode->FixedHomePosition = 0;
    ptzNode->Name = new std::string;
    ptzNode->Name->assign("PTZNode_Channel1");
    ptzNode->SupportedPTZSpaces = new tt__PTZSpaces;

    tt__Space2DDescription * space1 = new tt__Space2DDescription;
    space1->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/PositionGenericSpace";
    space1->XRange = new tt__FloatRange;
    space1->XRange->Min = -1;
    space1->XRange->Max = 1;
    space1->YRange = new tt__FloatRange;
    space1->YRange->Min = -1;
    space1->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->AbsolutePanTiltPositionSpace.push_back(space1);

    tt__Space1DDescription * space2 = new tt__Space1DDescription;
    space2->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/PositionGenericSpace";
    space2->XRange = new tt__FloatRange;
    space2->XRange->Min = 0;
    space2->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->AbsoluteZoomPositionSpace.push_back(space2);

    tt__Space2DDescription * space3 = new tt__Space2DDescription;
    space3->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/TranslationGenericSpace";
    space3->XRange = new tt__FloatRange;
    space3->XRange->Min = -1;
    space3->XRange->Max = 1;
    space3->YRange = new tt__FloatRange;
    space3->YRange->Min = -1;
    space3->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->RelativePanTiltTranslationSpace.push_back(space3);


    tt__Space1DDescription * space4 = new tt__Space1DDescription;
    space4->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/TranslationGenericSpace";
    space4->XRange = new tt__FloatRange;
    space4->XRange->Min = -1;
    space4->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->RelativeZoomTranslationSpace.push_back(space4);


    tt__Space2DDescription * space5 = new tt__Space2DDescription;
    space5->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/VelocityGenericSpace";
    space5->XRange = new tt__FloatRange;
    space5->XRange->Min = -1;
    space5->XRange->Max = 1;
    space5->YRange = new tt__FloatRange;
    space5->YRange->Min = -1;
    space5->YRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ContinuousPanTiltVelocitySpace.push_back(space5);

    tt__Space1DDescription * space6 = new tt__Space1DDescription;
    space6->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/VelocityGenericSpace";
    space6->XRange = new tt__FloatRange;
    space6->XRange->Min = -1;
    space6->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ContinuousZoomVelocitySpace.push_back(space6);

    tt__Space1DDescription * space7 = new tt__Space1DDescription;
    space7->URI = "http://www.onvif.org/ver10/tptz/PanTiltSpaces/GenericSpeedSpace";
    space7->XRange = new tt__FloatRange;
    space7->XRange->Min = 0;
    space7->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->PanTiltSpeedSpace.push_back(space7);

    tt__Space1DDescription * space8 = new tt__Space1DDescription;
    space8->URI = "http://www.onvif.org/ver10/tptz/ZoomSpaces/ZoomGenericSpeedSpace";
    space8->XRange = new tt__FloatRange;
    space8->XRange->Min = 0;
    space8->XRange->Max = 1;
    ptzNode->SupportedPTZSpaces->ZoomSpeedSpace.push_back(space8);

    ptzNode->MaximumNumberOfPresets = 80;
    ptzNode->HomeSupported = true;

    ptzNode->Extension = new tt__PTZNodeExtension;
    ptzNode->Extension->SupportedPresetTour = new tt__PTZPresetTourSupported;
    ptzNode->Extension->SupportedPresetTour->MaximumNumberOfPresetTours = 8;
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Start);
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Stop);
    ptzNode->Extension->SupportedPresetTour->PTZPresetTourOperation.push_back(tt__PTZPresetTourOperation__Pause);

    ptzws__GetNodeResponse.PTZNode = ptzNode;
    return SOAP_OK;
}

/// Web service operation 'SetConfiguration' (returns error code or SOAP_OK)
int PTZServiceExt::SetConfiguration(_ptzws__SetConfiguration *ptzws__SetConfiguration, _ptzws__SetConfigurationResponse &ptzws__SetConfigurationResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetConfigurationOptions' (returns error code or SOAP_OK)
int PTZServiceExt::GetConfigurationOptions(_ptzws__GetConfigurationOptions *ptzws__GetConfigurationOptions, _ptzws__GetConfigurationOptionsResponse &ptzws__GetConfigurationOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'GotoHomePosition' (returns error code or SOAP_OK)
int PTZServiceExt::GotoHomePosition(_ptzws__GotoHomePosition *ptzws__GotoHomePosition, _ptzws__GotoHomePositionResponse &ptzws__GotoHomePositionResponse) {
    qDebug() << "PTZ service in GotoHomePosition NVT profile token = " << ptzws__GotoHomePosition->ProfileToken.data() << "\n" ;

    //send to cam start

    PTZBindingProxy p;

    _ptzws__GotoHomePosition in;
    in.ProfileToken = "MediaProfile000";
    _ptzws__GotoHomePositionResponse out;

    QString devServiceURL = QString("http://172.16.6.90/onvif/ptz_service");

    qDebug() << "PTZ control url " << devServiceURL.toStdString().data() ;

    if (p.GotoHomePosition(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "GotoHomePosition ok\n";
    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);

    }
    //send to cam end

    return SOAP_OK;
}

/// Web service operation 'SetHomePosition' (returns error code or SOAP_OK)
int PTZServiceExt::SetHomePosition(_ptzws__SetHomePosition *ptzws__SetHomePosition, _ptzws__SetHomePositionResponse &ptzws__SetHomePositionResponse) {
    return SOAP_OK;
}

/// Web service operation 'ContinuousMove' (returns error code or SOAP_OK)
int PTZServiceExt::ContinuousMove(_ptzws__ContinuousMove *ptzws__ContinuousMove, _ptzws__ContinuousMoveResponse &ptzws__ContinuousMoveResponse) {

    qDebug() << "PTZ service in ContinuousMove NVT profile token = " << ptzws__ContinuousMove->ProfileToken.data() << "\n" ;


    //send to cam start

    PTZBindingProxy p;

    _ptzws__ContinuousMove in;
    in = *ptzws__ContinuousMove;
    in.ProfileToken = "MediaProfile000";
    _ptzws__ContinuousMoveResponse out;

    QString devServiceURL = QString("http://172.16.6.90/onvif/ptz_service");

    qDebug() << "PTZ control url " << devServiceURL.toStdString().data() ;

    if (p.ContinuousMove(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "ContinuousMove ok\n";
    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);

    }
    //send to cam end

    return SOAP_OK;
}

/// Web service operation 'RelativeMove' (returns error code or SOAP_OK)
int PTZServiceExt::RelativeMove(_ptzws__RelativeMove *ptzws__RelativeMove, _ptzws__RelativeMoveResponse &ptzws__RelativeMoveResponse) {
    return SOAP_OK;
}

/// Web service operation 'SendAuxiliaryCommand' (returns error code or SOAP_OK)
int PTZServiceExt::SendAuxiliaryCommand(_ptzws__SendAuxiliaryCommand *ptzws__SendAuxiliaryCommand, _ptzws__SendAuxiliaryCommandResponse &ptzws__SendAuxiliaryCommandResponse) {
    return SOAP_OK;
}

/// Web service operation 'AbsoluteMove' (returns error code or SOAP_OK)
int PTZServiceExt::AbsoluteMove(_ptzws__AbsoluteMove *ptzws__AbsoluteMove, _ptzws__AbsoluteMoveResponse &ptzws__AbsoluteMoveResponse) {
    return SOAP_OK;
}

/// Web service operation 'Stop' (returns error code or SOAP_OK)
int PTZServiceExt::Stop(_ptzws__Stop *ptzws__Stop, _ptzws__StopResponse &ptzws__StopResponse) {
    qDebug() << "PTZ service in Stop NVT profile token = " << ptzws__Stop->ProfileToken.data() << "\n" ;

    PTZBindingProxy p;

    _ptzws__Stop in;
    in = *ptzws__Stop;
    in.ProfileToken = "MediaProfile000";
    _ptzws__StopResponse out;

    QString devServiceURL = QString("http://172.16.6.90/onvif/ptz_service");

    qDebug() << "PTZ control url " << devServiceURL.toStdString().data() ;

    if (p.Stop(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        qDebug() << "Stop ok\n";
    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);

    }
    //send to cam end

    return SOAP_OK;
}

/// Web service operation 'GetPresetTours' (returns error code or SOAP_OK)
int PTZServiceExt::GetPresetTours(_ptzws__GetPresetTours *ptzws__GetPresetTours, _ptzws__GetPresetToursResponse &ptzws__GetPresetToursResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetPresetTour' (returns error code or SOAP_OK)
int PTZServiceExt::GetPresetTour(_ptzws__GetPresetTour *ptzws__GetPresetTour, _ptzws__GetPresetTourResponse &ptzws__GetPresetTourResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetPresetTourOptions' (returns error code or SOAP_OK)
int PTZServiceExt::GetPresetTourOptions(_ptzws__GetPresetTourOptions *ptzws__GetPresetTourOptions, _ptzws__GetPresetTourOptionsResponse &ptzws__GetPresetTourOptionsResponse) {
    return SOAP_OK;
}

/// Web service operation 'CreatePresetTour' (returns error code or SOAP_OK)
int PTZServiceExt::CreatePresetTour(_ptzws__CreatePresetTour *ptzws__CreatePresetTour, _ptzws__CreatePresetTourResponse &ptzws__CreatePresetTourResponse) {
    return SOAP_OK;
}

/// Web service operation 'ModifyPresetTour' (returns error code or SOAP_OK)
int PTZServiceExt::ModifyPresetTour(_ptzws__ModifyPresetTour *ptzws__ModifyPresetTour, _ptzws__ModifyPresetTourResponse &ptzws__ModifyPresetTourResponse) {
    return SOAP_OK;
}

/// Web service operation 'OperatePresetTour' (returns error code or SOAP_OK)
int PTZServiceExt::OperatePresetTour(_ptzws__OperatePresetTour *ptzws__OperatePresetTour, _ptzws__OperatePresetTourResponse &ptzws__OperatePresetTourResponse) {
    return SOAP_OK;
}

/// Web service operation 'RemovePresetTour' (returns error code or SOAP_OK)
int PTZServiceExt::RemovePresetTour(_ptzws__RemovePresetTour *ptzws__RemovePresetTour, _ptzws__RemovePresetTourResponse &ptzws__RemovePresetTourResponse) {
    return SOAP_OK;
}

/// Web service operation 'GetCompatibleConfigurations' (returns error code or SOAP_OK)
int PTZServiceExt::GetCompatibleConfigurations(_ptzws__GetCompatibleConfigurations *ptzws__GetCompatibleConfigurations, _ptzws__GetCompatibleConfigurationsResponse &ptzws__GetCompatibleConfigurationsResponse) {
    return SOAP_OK;
}
