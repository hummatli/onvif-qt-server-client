#include "analyticsserviceext.h"
#include <QDebug>
#include <QObject>
#include <QString>

AnalyticsServiceExt::AnalyticsServiceExt() : AnalyticsServiceExtAbst()
{

}


/// Web service operation 'GetSupportedRules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::GetSupportedRules(_analyticsws__GetSupportedRules *analyticsws__GetSupportedRules, _analyticsws__GetSupportedRulesResponse &analyticsws__GetSupportedRulesResponse){
    return SOAP_OK;
}

/// Web service operation 'CreateRules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::CreateRules(_analyticsws__CreateRules *analyticsws__CreateRules, _analyticsws__CreateRulesResponse &analyticsws__CreateRulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'DeleteRules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::DeleteRules(_analyticsws__DeleteRules *analyticsws__DeleteRules, _analyticsws__DeleteRulesResponse &analyticsws__DeleteRulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetRules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::GetRules(_analyticsws__GetRules *analyticsws__GetRules, _analyticsws__GetRulesResponse &analyticsws__GetRulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'ModifyRules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::ModifyRules(_analyticsws__ModifyRules *analyticsws__ModifyRules, _analyticsws__ModifyRulesResponse &analyticsws__ModifyRulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
int AnalyticsServiceExt::GetServiceCapabilities(_analyticsws__GetServiceCapabilities *analyticsws__GetServiceCapabilities, _analyticsws__GetServiceCapabilitiesResponse &analyticsws__GetServiceCapabilitiesResponse) {
    qDebug() << "Analytics service GetServiceCapabilities in NVTTTT";
    return SOAP_OK;
}


/// Web service operation 'GetSupportedAnalyticsModules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::GetSupportedAnalyticsModules(_analyticsws__GetSupportedAnalyticsModules *analyticsws__GetSupportedAnalyticsModules, _analyticsws__GetSupportedAnalyticsModulesResponse &analyticsws__GetSupportedAnalyticsModulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'CreateAnalyticsModules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::CreateAnalyticsModules(_analyticsws__CreateAnalyticsModules *analyticsws__CreateAnalyticsModules, _analyticsws__CreateAnalyticsModulesResponse &analyticsws__CreateAnalyticsModulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'DeleteAnalyticsModules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::DeleteAnalyticsModules(_analyticsws__DeleteAnalyticsModules *analyticsws__DeleteAnalyticsModules, _analyticsws__DeleteAnalyticsModulesResponse &analyticsws__DeleteAnalyticsModulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'GetAnalyticsModules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::GetAnalyticsModules(_analyticsws__GetAnalyticsModules *analyticsws__GetAnalyticsModules, _analyticsws__GetAnalyticsModulesResponse &analyticsws__GetAnalyticsModulesResponse) {
    return SOAP_OK;
}


/// Web service operation 'ModifyAnalyticsModules' (returns error code or SOAP_OK)
int AnalyticsServiceExt::ModifyAnalyticsModules(_analyticsws__ModifyAnalyticsModules *analyticsws__ModifyAnalyticsModules, _analyticsws__ModifyAnalyticsModulesResponse &analyticsws__ModifyAnalyticsModulesResponse) {
    return SOAP_OK;
}

