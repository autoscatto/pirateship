/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
//#include <QtDebug>
//#include <QMessageBox>
//#include <QButtonGroup>
//#include <QInputDialog>
//#include <QTimer>
//#include <QStateMachine>
//#include <QState>
//#include <QDesktopServices>
//#include <QUrl>
#include <QtCore>
#include <QtGui>
#include "connectdialog.h"
#include "uartdialog.h"
#include "spidialog.h"
#include "rawdialog.h"
#include "pirateplugin.h"
#include "licensedialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Connect(QString portname, int baudrate);

protected:
    void changeEvent(QEvent *e);
    bool loadPlugins();

private:
    Ui::MainWindow *ui;
    QextSerialPort *port;
    QButtonGroup* groupMode;
    QButtonGroup* groupFormat;
    QTimer* commandTimer;
    QTimer* serialTimer;
    QStateMachine* machine;
    QState* serialStateReady;
    QState* serialStateSending;
    QState* serialStateWaiting;
    QList<QByteArray> queue;
    void outAppend(QString text);
    bool checkVoltage;
    QLabel* lblSerial;
    QList<PiratePlugin*> plugins;

private slots:
    void on_actionVersions_triggered();
    void on_actionAbout_Qt_triggered();
    void on_actionBus_Pirate_Manual_triggered();
    void on_actionSelf_Test_triggered();
    void on_actionCommand_help_triggered();
    void on_btnVoltages_clicked();
    void on_btnPullup_toggled(bool checked);
    void on_btnPowerSupply_toggled(bool checked);
    void on_actionStatus_Info_triggered();
    void on_actionClear_buffer_triggered();
    void on_actionAuto_send_command_toggled(bool );
    void on_actionAbout_triggered();
    void on_actionLicense_triggered();
    void on_btnConnect_toggled(bool checked);
    void on_btnConnect_clicked(bool checked);
    int  Connect();
    void Disconnect();
    void onDataAvailable();
    void processNewData(QByteArray data);
    void sendText(QString str=QString());
    void modeSelected(int id=-1);
    void changeRetain(bool retain);
    void on_commandTimer_timeout();
    void on_serialTimer_timeout();
    void formatSelected(int id=-1);
    void serialSendQueue();
    void findVoltage();
    void showStatus();
    void buildLegend(int index=0);

signals:
    void serialReady();
    void serialSend();
    void serialSendMore();
    void serialWait();
    void dataReady();
};

#endif // MAINWINDOW_H
