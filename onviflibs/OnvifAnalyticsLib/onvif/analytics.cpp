#include "analytics.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifanalytics.nsmap"
#include "soap/onvifanalyticsRuleEngineBindingProxy.h"

Analytics::Analytics()
{

}

Analytics::~Analytics()
{

}
void Analytics::getGetServiceCapabilities(QString devServiceURL) {

    qDebug() << "Analytics service test: getGetServiceCapabilities";

    RuleEngineBindingProxy d;

    _analyticsws__GetServiceCapabilities in;
    _analyticsws__GetServiceCapabilitiesResponse out;

    if (d.GetServiceCapabilities(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        if(out.Capabilities != NULL){
            qDebug() << out.Capabilities->AnalyticsModuleSupport;
            qDebug() << out.Capabilities->CellBasedSceneDescriptionSupported;
            qDebug() << out.Capabilities->RuleSupport;
        }

    } else {
        //error
        d.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return ;
}

