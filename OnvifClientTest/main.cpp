#include "mainwindow.h"
#include <QApplication>
#include "device.h"
#include "ptz.h"
#include "discoveryobj.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
