#ifndef DESCDEVICE
#define DESCDEVICE

struct DescDevice{
    int metadataversion;
    QString types;
    QString xAddrs;
    QString scopes;
};

Q_DECLARE_METATYPE(DescDevice)

#endif // DESCDEVICE

