#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "device.h"
#include <QDebug>
#include "media.h"
#include "ptz.h"
#include "receiver.h"
#include "event.h"
#include "analytics.h"
#include "videoanalyticsdevice.h"
#include "recordingcontrol.h"
#include "recordingsearch.h"
#include "replaycontrol.h"
#include "display.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int  _metadataVersion = 1;
    char* _xaddr="http://localhost/service";
    char* _type="\"http://schemas.xmlsoap.org/ws/2006/02/devprof\":device";
    char* _scope="scope";
    char* _endpoint="urn";
    discoveryObj = new DiscoveryObj(CLIENT_MODE, _metadataVersion, _xaddr, _type, _scope, _endpoint);
    connect(discoveryObj,SIGNAL(discoveredDevice(DescDevice)) ,this,SLOT(onDiscoveredDevice(DescDevice)));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onDiscoveredDevice(DescDevice dev)
{


    qDebug() << "\n**********************On dev found********************";
    qDebug() << "Dev found = " << dev.xAddrs;
    qDebug() << "Dev found scope = " << dev.scopes;


//    QString name;
//    char * pch = strstr((char*)dev.scopes.toStdString().data(), "OnvifVideoServer");
//    if(pch > NULL){
//        name = "OnvifVideoServer";
//    }
    //ui->onvifDevCB->addItem(dev.xAddrs + " " + name, QVariant::fromValue(dev));

    ui->onvifDevCB->addItem(dev.xAddrs + " " + dev.scopes, QVariant::fromValue(dev));
  }

void MainWindow::on_btnSendProb_clicked()
{
    qDebug() << "\n**********************Prob send********************";
    ui->onvifDevCB->clear();
    discoveryObj->sendProb();
}


void MainWindow::on_btnGetMediaURL_clicked()
{
    if(ui->onvifDevCB->currentIndex()>=0){

        qDebug() << "\n**********************Get media URL********************";

        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();

        qDebug() << "For device " << device.xAddrs;

        //QVector<std::string> tokens = Media::getProfileTokens(device.xAddrs);
        QVector<std::string> tokens = Media::getProfileTokens("http://172.16.6.143/onvif/media_service");
        //QVector<std::string> tokens = Media::getProfileTokens("http://127.0.0.1:8080");

        for(int j =0; j< tokens.size(); ++j){
            qDebug() << "Token  " << j << "= " << tokens.at(j).data();

        }
        if(tokens.size() > 0){
            //qDebug() <<"URL = "<<  Media::getStreamURL(device.xAddrs, tokens.at(0)).data();
            qDebug() <<"URL = "<<  Media::getStreamURL("http://172.16.6.143/onvif/media_service", tokens.at(0)).data();
        }
    }
}

void MainWindow::on_btnGetDeviceInformation_clicked()
{
    qDebug() << "\n**********************Get device info********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs;
        Device::getDeviceInformation(device.xAddrs);
        //Device::getDeviceInformation("http://127.0.0.1:8080");
    }
}

void MainWindow::on_btnPTZTest_clicked()
{
    qDebug() << "\n**********************PTZ test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        PTZ::getNodes(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }

}

void MainWindow::on_btnReceiverTest_clicked()
{
    qDebug() << "\n**********************Receiver test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        Receiver::getGetReceivers(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }
}

void MainWindow::on_btnEventTest_clicked()
{
    qDebug() << "\n**********************Event test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        Event::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }

}

void MainWindow::on_btnAnalyticsTest_clicked()
{
    qDebug() << "\n**********************Event test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        Analytics::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }
}

void MainWindow::on_btnVideoAnalyticsDeviceTest_clicked()
{
    qDebug() << "\n**********************Event test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        VideoAnalyticsDevice::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }

}


void MainWindow::on_btnRecordingControlTest_clicked()
{
    qDebug() << "\n**********************RecordingControl test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        RecordingControl::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }
}

void MainWindow::on_btnRecordingSearchTest_clicked()
{
    qDebug() << "\n**********************RecordingSearch test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        RecordingSearch::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }

}

void MainWindow::on_btnReplayControlTest_clicked()
{
    qDebug() << "\n**********************ReplayControl test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        ReplayControl::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }

}

void MainWindow::on_btnDisplayTest_clicked()
{
    qDebug() << "\n**********************Display test********************";

    if(ui->onvifDevCB->currentIndex()>=0){
        DescDevice device = ui->onvifDevCB->currentData().value<DescDevice>();
        qDebug() << "For device " << device.xAddrs ;
        //PTZ::getNodes("http://127.0.0.1:8080");
        Display::getGetServiceCapabilities(device.xAddrs);
        //PTZ::getStatus(device.xAddrs);
        //PTZ::goToPreset(device.xAddrs);
    }
}
