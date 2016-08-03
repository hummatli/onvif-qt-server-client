#include "soap/onvifrecordingsearchSearchBindingService.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "onvif/recordingsearchservice.h"

RecordingSearchServiceExtAbst * RecordingSearchService::serviceExt = NULL;


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int SearchBindingService::GetServiceCapabilities(_recordingsearch__GetServiceCapabilities *recordingsearch__GetServiceCapabilities, _recordingsearch__GetServiceCapabilitiesResponse &recordingsearch__GetServiceCapabilitiesResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetServiceCapabilities(recordingsearch__GetServiceCapabilities, recordingsearch__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingSummary' (returns error code or SOAP_OK)
int SearchBindingService::GetRecordingSummary(_recordingsearch__GetRecordingSummary *recordingsearch__GetRecordingSummary, _recordingsearch__GetRecordingSummaryResponse &recordingsearch__GetRecordingSummaryResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetRecordingSummary( recordingsearch__GetRecordingSummary,  recordingsearch__GetRecordingSummaryResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingInformation' (returns error code or SOAP_OK)
int SearchBindingService::GetRecordingInformation(_recordingsearch__GetRecordingInformation *recordingsearch__GetRecordingInformation, _recordingsearch__GetRecordingInformationResponse &recordingsearch__GetRecordingInformationResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetRecordingInformation( recordingsearch__GetRecordingInformation,  recordingsearch__GetRecordingInformationResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMediaAttributes' (returns error code or SOAP_OK)
int SearchBindingService::GetMediaAttributes(_recordingsearch__GetMediaAttributes *recordingsearch__GetMediaAttributes, _recordingsearch__GetMediaAttributesResponse &recordingsearch__GetMediaAttributesResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetMediaAttributes( recordingsearch__GetMediaAttributes, recordingsearch__GetMediaAttributesResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'FindRecordings' (returns error code or SOAP_OK)
int SearchBindingService::FindRecordings(_recordingsearch__FindRecordings *recordingsearch__FindRecordings, _recordingsearch__FindRecordingsResponse &recordingsearch__FindRecordingsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->FindRecordings( recordingsearch__FindRecordings, recordingsearch__FindRecordingsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetRecordingSearchResults' (returns error code or SOAP_OK)
int SearchBindingService::GetRecordingSearchResults(_recordingsearch__GetRecordingSearchResults *recordingsearch__GetRecordingSearchResults, _recordingsearch__GetRecordingSearchResultsResponse &recordingsearch__GetRecordingSearchResultsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetRecordingSearchResults( recordingsearch__GetRecordingSearchResults, recordingsearch__GetRecordingSearchResultsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'FindEvents' (returns error code or SOAP_OK)
int SearchBindingService::FindEvents(_recordingsearch__FindEvents *recordingsearch__FindEvents, _recordingsearch__FindEventsResponse &recordingsearch__FindEventsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->FindEvents( recordingsearch__FindEvents, recordingsearch__FindEventsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetEventSearchResults' (returns error code or SOAP_OK)
int SearchBindingService::GetEventSearchResults(_recordingsearch__GetEventSearchResults *recordingsearch__GetEventSearchResults, _recordingsearch__GetEventSearchResultsResponse &recordingsearch__GetEventSearchResultsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetEventSearchResults( recordingsearch__GetEventSearchResults, recordingsearch__GetEventSearchResultsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'FindPTZPosition' (returns error code or SOAP_OK)
int SearchBindingService::FindPTZPosition(_recordingsearch__FindPTZPosition *recordingsearch__FindPTZPosition, _recordingsearch__FindPTZPositionResponse &recordingsearch__FindPTZPositionResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->FindPTZPosition( recordingsearch__FindPTZPosition,  recordingsearch__FindPTZPositionResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetPTZPositionSearchResults' (returns error code or SOAP_OK)
int SearchBindingService::GetPTZPositionSearchResults(_recordingsearch__GetPTZPositionSearchResults *recordingsearch__GetPTZPositionSearchResults, _recordingsearch__GetPTZPositionSearchResultsResponse &recordingsearch__GetPTZPositionSearchResultsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetPTZPositionSearchResults( recordingsearch__GetPTZPositionSearchResults,  recordingsearch__GetPTZPositionSearchResultsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetSearchState' (returns error code or SOAP_OK)
int SearchBindingService::GetSearchState(_recordingsearch__GetSearchState *recordingsearch__GetSearchState, _recordingsearch__GetSearchStateResponse &recordingsearch__GetSearchStateResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetSearchState(recordingsearch__GetSearchState,  recordingsearch__GetSearchStateResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'EndSearch' (returns error code or SOAP_OK)
int SearchBindingService::EndSearch(_recordingsearch__EndSearch *recordingsearch__EndSearch, _recordingsearch__EndSearchResponse &recordingsearch__EndSearchResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->EndSearch( recordingsearch__EndSearch, recordingsearch__EndSearchResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'FindMetadata' (returns error code or SOAP_OK)
int SearchBindingService::FindMetadata(_recordingsearch__FindMetadata *recordingsearch__FindMetadata, _recordingsearch__FindMetadataResponse &recordingsearch__FindMetadataResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->FindMetadata( recordingsearch__FindMetadata, recordingsearch__FindMetadataResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'GetMetadataSearchResults' (returns error code or SOAP_OK)
int SearchBindingService::GetMetadataSearchResults(_recordingsearch__GetMetadataSearchResults *recordingsearch__GetMetadataSearchResults, _recordingsearch__GetMetadataSearchResultsResponse &recordingsearch__GetMetadataSearchResultsResponse) {
    if(RecordingSearchService::serviceExt != NULL){
        return RecordingSearchService::serviceExt->GetMetadataSearchResults( recordingsearch__GetMetadataSearchResults,  recordingsearch__GetMetadataSearchResultsResponse);
    } else {
        qDebug() << "RecordingSearchService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
