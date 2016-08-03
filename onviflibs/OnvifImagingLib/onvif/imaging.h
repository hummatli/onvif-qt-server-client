#ifndef IMAGING_H
#define IMAGING_H

#include <QString>
#include <string>
class Imaging
{
public:
    Imaging();
    ~Imaging();

    static int  getGetServiceCapabilities(QString serviceURL);
};

#endif // IMAGING_H
