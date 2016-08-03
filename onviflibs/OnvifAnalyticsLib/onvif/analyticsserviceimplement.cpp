#include "soap/onvifanalyticsRuleEngineBindingService.h"
#include <QDebug>
#include <QString>
#include "onvif/analyticsservice.h"

AnalyticsServiceExtAbst * AnalyticsService::serviceExt = NULL;


/// Web service operation 'GetSupportedRules' (returns error code or SOAP_OK)
int RuleEngineBindingService::GetSupportedRules(_analyticsws__GetSupportedRules *analyticsws__GetSupportedRules, _analyticsws__GetSupportedRulesResponse &analyticsws__GetSupportedRulesResponse){
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->GetSupportedRules(analyticsws__GetSupportedRules,analyticsws__GetSupportedRulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}

/// Web service operation 'CreateRules' (returns error code or SOAP_OK)
int RuleEngineBindingService::CreateRules(_analyticsws__CreateRules *analyticsws__CreateRules, _analyticsws__CreateRulesResponse &analyticsws__CreateRulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->CreateRules( analyticsws__CreateRules, analyticsws__CreateRulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DeleteRules' (returns error code or SOAP_OK)
int RuleEngineBindingService::DeleteRules(_analyticsws__DeleteRules *analyticsws__DeleteRules, _analyticsws__DeleteRulesResponse &analyticsws__DeleteRulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->DeleteRules( analyticsws__DeleteRules, analyticsws__DeleteRulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetRules' (returns error code or SOAP_OK)
int RuleEngineBindingService::GetRules(_analyticsws__GetRules *analyticsws__GetRules, _analyticsws__GetRulesResponse &analyticsws__GetRulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->GetRules( analyticsws__GetRules, analyticsws__GetRulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'ModifyRules' (returns error code or SOAP_OK)
int RuleEngineBindingService::ModifyRules(_analyticsws__ModifyRules *analyticsws__ModifyRules, _analyticsws__ModifyRulesResponse &analyticsws__ModifyRulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->ModifyRules( analyticsws__ModifyRules, analyticsws__ModifyRulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int RuleEngineBindingService::GetServiceCapabilities(_analyticsws__GetServiceCapabilities *analyticsws__GetServiceCapabilities, _analyticsws__GetServiceCapabilitiesResponse &analyticsws__GetServiceCapabilitiesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->GetServiceCapabilities( analyticsws__GetServiceCapabilities, analyticsws__GetServiceCapabilitiesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetSupportedAnalyticsModules' (returns error code or SOAP_OK)
int RuleEngineBindingService::GetSupportedAnalyticsModules(_analyticsws__GetSupportedAnalyticsModules *analyticsws__GetSupportedAnalyticsModules, _analyticsws__GetSupportedAnalyticsModulesResponse &analyticsws__GetSupportedAnalyticsModulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->GetSupportedAnalyticsModules( analyticsws__GetSupportedAnalyticsModules, analyticsws__GetSupportedAnalyticsModulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'CreateAnalyticsModules' (returns error code or SOAP_OK)
int RuleEngineBindingService::CreateAnalyticsModules(_analyticsws__CreateAnalyticsModules *analyticsws__CreateAnalyticsModules, _analyticsws__CreateAnalyticsModulesResponse &analyticsws__CreateAnalyticsModulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->CreateAnalyticsModules( analyticsws__CreateAnalyticsModules, analyticsws__CreateAnalyticsModulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'DeleteAnalyticsModules' (returns error code or SOAP_OK)
int RuleEngineBindingService::DeleteAnalyticsModules(_analyticsws__DeleteAnalyticsModules *analyticsws__DeleteAnalyticsModules, _analyticsws__DeleteAnalyticsModulesResponse &analyticsws__DeleteAnalyticsModulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->DeleteAnalyticsModules( analyticsws__DeleteAnalyticsModules, analyticsws__DeleteAnalyticsModulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'GetAnalyticsModules' (returns error code or SOAP_OK)
int RuleEngineBindingService::GetAnalyticsModules(_analyticsws__GetAnalyticsModules *analyticsws__GetAnalyticsModules, _analyticsws__GetAnalyticsModulesResponse &analyticsws__GetAnalyticsModulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->GetAnalyticsModules( analyticsws__GetAnalyticsModules, analyticsws__GetAnalyticsModulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}


/// Web service operation 'ModifyAnalyticsModules' (returns error code or SOAP_OK)
int RuleEngineBindingService::ModifyAnalyticsModules(_analyticsws__ModifyAnalyticsModules *analyticsws__ModifyAnalyticsModules, _analyticsws__ModifyAnalyticsModulesResponse &analyticsws__ModifyAnalyticsModulesResponse) {
    if(AnalyticsService::serviceExt != NULL){
        return AnalyticsService::serviceExt->ModifyAnalyticsModules( analyticsws__ModifyAnalyticsModules, analyticsws__ModifyAnalyticsModulesResponse);
    } else {
        qDebug() << "AnalyticsService::serviceExt is NULL\n";
        return SOAP_ERR;
    }
}
