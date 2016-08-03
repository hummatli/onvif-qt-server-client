#ifndef MEDIA_H
#define MEDIA_H

#include <QString>
#include <string>
class Media
{
public:
    Media();
    ~Media();

    static QVector<std::string>  getProfileTokens(QString devServiceURL);
    static std::string getStreamURL(QString devServiceURL, std::string profileToken);
};

#endif // MEDIA_H
