#include "media.h"
#include <QDebug>
#include <QObject>
#include <QString>
#include "soap/onvifmedia.nsmap"
#include "soap/onvifmediaMediaBindingProxy.h"

Media::Media()
{

}

Media::~Media()
{

}
QVector<std::string>  Media::getProfileTokens(QString devServiceURL) {

    QVector<std::string> tokens;
    qDebug() << "media service test: getProfileTokens";

    MediaBindingProxy p;

    _mediaws__GetProfiles in;
    _mediaws__GetProfilesResponse out;

    if (p.GetProfiles(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        std::vector<tt__Profile* >  profiles = out.Profiles;
        for(int i =0;i< profiles.size(); ++i){
            tokens.append(profiles.at(i)->token);
        }

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return tokens;
}


std::string Media::getStreamURL(QString devServiceURL, std::string profileToken) {

    std::string uri;
    qDebug() << "media service test: getStreamURL";

    MediaBindingProxy p;

    _mediaws__GetStreamUri in;
    _mediaws__GetStreamUriResponse out;

    in.ProfileToken = profileToken;

    if (p.GetStreamUri(devServiceURL.toStdString().data(), NULL, &in, out) == SOAP_OK) {
        //ok
        tt__MediaUri * mediaUri = out.MediaUri;
        uri = mediaUri->Uri;

    } else {
        //error
        p.soap_print_fault(stderr);
        //fflush(stderr);
    }

    return uri ;
}

