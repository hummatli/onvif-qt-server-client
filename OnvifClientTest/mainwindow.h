#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "descdevice.h"
#include "discoveryobj.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    DiscoveryObj *discoveryObj = NULL;

private slots:

    void onDiscoveredDevice(DescDevice);

    void on_btnSendProb_clicked();

    void on_btnGetMediaURL_clicked();

    void on_btnGetDeviceInformation_clicked();

    void on_btnPTZTest_clicked();

    void on_btnReceiverTest_clicked();

    void on_btnEventTest_clicked();

    void on_btnAnalyticsTest_clicked();

    void on_btnVideoAnalyticsDeviceTest_clicked();

    void on_btnRecordingControlTest_clicked();

    void on_btnRecordingSearchTest_clicked();

    void on_btnReplayControlTest_clicked();

    void on_btnDisplayTest_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
