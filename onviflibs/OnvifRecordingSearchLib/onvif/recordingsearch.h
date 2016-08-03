#ifndef RECORDINGSEARCH_H
#define RECORDINGSEARCH_H

#include <QString>
#include <string>
class RecordingSearch
{
public:
    RecordingSearch();
    ~RecordingSearch();

    static void getGetServiceCapabilities(QString devServiceURL);
};

#endif // RECORDINGSEARCH_H
