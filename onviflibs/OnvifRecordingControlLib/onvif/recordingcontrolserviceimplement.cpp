#include "soap/onvifrecordingcontrolRecordingBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/recordingcontrolservice.h"

RecordingControlServiceExtAbst * RecordingControlService::serviceExt = NULL;


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int RecordingBindingService::GetServiceCapabilities(_recordingcontrol__GetServiceCapabilities *recordingcontrol__GetServiceCapabilities, _recordingcontrol__GetServiceCapabilitiesResponse &recordingcontrol__GetServiceCapabilitiesResponse){
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetServiceCapabilities(recordingcontrol__GetServiceCapabilities, recordingcontrol__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateRecording' (returns error code or SOAP_OK)
int RecordingBindingService::CreateRecording(_recordingcontrol__CreateRecording *recordingcontrol__CreateRecording, _recordingcontrol__CreateRecordingResponse &recordingcontrol__CreateRecordingResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->CreateRecording( recordingcontrol__CreateRecording,  recordingcontrol__CreateRecordingResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteRecording' (returns error code or SOAP_OK)
int RecordingBindingService::DeleteRecording(_recordingcontrol__DeleteRecording *recordingcontrol__DeleteRecording, _recordingcontrol__DeleteRecordingResponse &recordingcontrol__DeleteRecordingResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->DeleteRecording( recordingcontrol__DeleteRecording,  recordingcontrol__DeleteRecordingResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordings' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordings(_recordingcontrol__GetRecordings *recordingcontrol__GetRecordings, _recordingcontrol__GetRecordingsResponse &recordingcontrol__GetRecordingsResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordings( recordingcontrol__GetRecordings,  recordingcontrol__GetRecordingsResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRecordingConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::SetRecordingConfiguration(_recordingcontrol__SetRecordingConfiguration *recordingcontrol__SetRecordingConfiguration, _recordingcontrol__SetRecordingConfigurationResponse &recordingcontrol__SetRecordingConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->SetRecordingConfiguration( recordingcontrol__SetRecordingConfiguration, recordingcontrol__SetRecordingConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordingConfiguration(_recordingcontrol__GetRecordingConfiguration *recordingcontrol__GetRecordingConfiguration, _recordingcontrol__GetRecordingConfigurationResponse &recordingcontrol__GetRecordingConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordingConfiguration( recordingcontrol__GetRecordingConfiguration, recordingcontrol__GetRecordingConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingOptions' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordingOptions(_recordingcontrol__GetRecordingOptions *recordingcontrol__GetRecordingOptions, _recordingcontrol__GetRecordingOptionsResponse &recordingcontrol__GetRecordingOptionsResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordingOptions( recordingcontrol__GetRecordingOptions, recordingcontrol__GetRecordingOptionsResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateTrack' (returns error code or SOAP_OK)
int RecordingBindingService::CreateTrack(_recordingcontrol__CreateTrack *recordingcontrol__CreateTrack, _recordingcontrol__CreateTrackResponse &recordingcontrol__CreateTrackResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->CreateTrack( recordingcontrol__CreateTrack,  recordingcontrol__CreateTrackResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteTrack' (returns error code or SOAP_OK)
int RecordingBindingService::DeleteTrack(_recordingcontrol__DeleteTrack *recordingcontrol__DeleteTrack, _recordingcontrol__DeleteTrackResponse &recordingcontrol__DeleteTrackResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->DeleteTrack( recordingcontrol__DeleteTrack,  recordingcontrol__DeleteTrackResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetTrackConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::GetTrackConfiguration(_recordingcontrol__GetTrackConfiguration *recordingcontrol__GetTrackConfiguration, _recordingcontrol__GetTrackConfigurationResponse &recordingcontrol__GetTrackConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetTrackConfiguration( recordingcontrol__GetTrackConfiguration,  recordingcontrol__GetTrackConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetTrackConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::SetTrackConfiguration(_recordingcontrol__SetTrackConfiguration *recordingcontrol__SetTrackConfiguration, _recordingcontrol__SetTrackConfigurationResponse &recordingcontrol__SetTrackConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->SetTrackConfiguration( recordingcontrol__SetTrackConfiguration,  recordingcontrol__SetTrackConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateRecordingJob' (returns error code or SOAP_OK)
int RecordingBindingService::CreateRecordingJob(_recordingcontrol__CreateRecordingJob *recordingcontrol__CreateRecordingJob, _recordingcontrol__CreateRecordingJobResponse &recordingcontrol__CreateRecordingJobResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->CreateRecordingJob( recordingcontrol__CreateRecordingJob,  recordingcontrol__CreateRecordingJobResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'DeleteRecordingJob' (returns error code or SOAP_OK)
int RecordingBindingService::DeleteRecordingJob(_recordingcontrol__DeleteRecordingJob *recordingcontrol__DeleteRecordingJob, _recordingcontrol__DeleteRecordingJobResponse &recordingcontrol__DeleteRecordingJobResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->DeleteRecordingJob( recordingcontrol__DeleteRecordingJob,  recordingcontrol__DeleteRecordingJobResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingJobs' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordingJobs(_recordingcontrol__GetRecordingJobs *recordingcontrol__GetRecordingJobs, _recordingcontrol__GetRecordingJobsResponse &recordingcontrol__GetRecordingJobsResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordingJobs( recordingcontrol__GetRecordingJobs,  recordingcontrol__GetRecordingJobsResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRecordingJobConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::SetRecordingJobConfiguration(_recordingcontrol__SetRecordingJobConfiguration *recordingcontrol__SetRecordingJobConfiguration, _recordingcontrol__SetRecordingJobConfigurationResponse &recordingcontrol__SetRecordingJobConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->SetRecordingJobConfiguration( recordingcontrol__SetRecordingJobConfiguration,  recordingcontrol__SetRecordingJobConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingJobConfiguration' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordingJobConfiguration(_recordingcontrol__GetRecordingJobConfiguration *recordingcontrol__GetRecordingJobConfiguration, _recordingcontrol__GetRecordingJobConfigurationResponse &recordingcontrol__GetRecordingJobConfigurationResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordingJobConfiguration( recordingcontrol__GetRecordingJobConfiguration, recordingcontrol__GetRecordingJobConfigurationResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'SetRecordingJobMode' (returns error code or SOAP_OK)
int RecordingBindingService::SetRecordingJobMode(_recordingcontrol__SetRecordingJobMode *recordingcontrol__SetRecordingJobMode, _recordingcontrol__SetRecordingJobModeResponse &recordingcontrol__SetRecordingJobModeResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->SetRecordingJobMode( recordingcontrol__SetRecordingJobMode, recordingcontrol__SetRecordingJobModeResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingJobState' (returns error code or SOAP_OK)
int RecordingBindingService::GetRecordingJobState(_recordingcontrol__GetRecordingJobState *recordingcontrol__GetRecordingJobState, _recordingcontrol__GetRecordingJobStateResponse &recordingcontrol__GetRecordingJobStateResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetRecordingJobState( recordingcontrol__GetRecordingJobState, recordingcontrol__GetRecordingJobStateResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'ExportRecordedData' (returns error code or SOAP_OK)
int RecordingBindingService::ExportRecordedData(_recordingcontrol__ExportRecordedData *recordingcontrol__ExportRecordedData, _recordingcontrol__ExportRecordedDataResponse &recordingcontrol__ExportRecordedDataResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->ExportRecordedData( recordingcontrol__ExportRecordedData, recordingcontrol__ExportRecordedDataResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'StopExportRecordedData' (returns error code or SOAP_OK)
int RecordingBindingService::StopExportRecordedData(_recordingcontrol__StopExportRecordedData *recordingcontrol__StopExportRecordedData, _recordingcontrol__StopExportRecordedDataResponse &recordingcontrol__StopExportRecordedDataResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->StopExportRecordedData( recordingcontrol__StopExportRecordedData, recordingcontrol__StopExportRecordedDataResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetExportRecordedDataState' (returns error code or SOAP_OK)
int RecordingBindingService::GetExportRecordedDataState(_recordingcontrol__GetExportRecordedDataState *recordingcontrol__GetExportRecordedDataState, _recordingcontrol__GetExportRecordedDataStateResponse &recordingcontrol__GetExportRecordedDataStateResponse) {
    if(RecordingControlService::serviceExt != NULL){
        return RecordingControlService::serviceExt->GetExportRecordedDataState( recordingcontrol__GetExportRecordedDataState,  recordingcontrol__GetExportRecordedDataStateResponse);
    } else {
        qDebug() << "RecordingControlService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
