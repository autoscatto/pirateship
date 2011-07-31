/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "connectdialog.h"
#include "ui_connectdialog.h"

ConnectDialog::ConnectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectDialog)
{
    ui->setupUi(this);

    // Enumerate ports

#ifdef Q_OS_UNIX
    QList<QextPortInfo> ports = QextSerialEnumerator::getPorts();
//    //QList<QextPortInfo> ports;// = QextSerialEnumerator().getPorts(); // Unfortunately this doesn't work
    foreach(QextPortInfo info, ports){
        ui->comboPort->addItem(info.portName, info.friendName);
    }
#elif (defined Q_OS_WIN)
    ui->comboPort->addItems(getSerialPorts());
#endif

    // Enumerate baudrates
    ui->comboBaudrate->addItem("100",BAUD110);
    ui->comboBaudrate->addItem("300",BAUD300);
    ui->comboBaudrate->addItem("600",BAUD600);
    ui->comboBaudrate->addItem("1200",BAUD1200);
    ui->comboBaudrate->addItem("2400",BAUD2400);
    ui->comboBaudrate->addItem("4800",BAUD4800);
    ui->comboBaudrate->addItem("9600",BAUD9600);
    ui->comboBaudrate->addItem("19200",BAUD19200);
    ui->comboBaudrate->addItem("38400",BAUD38400);
    ui->comboBaudrate->addItem("57600",BAUD57600);
    ui->comboBaudrate->addItem("115200",BAUD115200);
    ui->comboBaudrate->setCurrentIndex(ui->comboBaudrate->count()-1);

}

QString ConnectDialog::port()
{
    if (ui->comboPort->currentIndex()!= -1)
        return ui->comboPort->itemText(ui->comboPort->currentIndex());
    else
        return QString();
}

int ConnectDialog::baudrate()
{
    if (ui->comboBaudrate->currentIndex()!= -1)
        return ui->comboBaudrate->itemData(ui->comboBaudrate->currentIndex()).toInt();
    else
        return -1;
}

ConnectDialog::~ConnectDialog()
{
    delete ui;
}

void ConnectDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

#ifdef Q_OS_WIN
QStringList ConnectDialog::getSerialPorts()
{
    QStringList ports;
    QString name;

    //QString path("HARDWARE\\DEVICEMAP\\SERIALCOMM\\\\Device\\VCP0");
    QSettings settings("HKEY_LOCAL_MACHINE\\HARDWARE\\DEVICEMAP\\SERIALCOMM",
                      QSettings::NativeFormat);
    HKEY hkey;
    BYTE data[4096];

    RegOpenKeyEx(HKEY_LOCAL_MACHINE,
                 TEXT("HARDWARE\\DEVICEMAP\\SERIALCOMM"),
                 0,
                 KEY_QUERY_VALUE,
                 &hkey);

    DWORD cbData;
    DWORD dwRet;

    QString com_key;
    TCHAR com_key_w[4096];

    foreach(com_key, settings.childKeys()) {
        cbData = 4096;
        com_key.replace('/','\\');
        com_key.toWCharArray(com_key_w);
        com_key_w[com_key.size()]=0;
        com_key_w[com_key.size()+1]=0;
        dwRet = RegQueryValueEx( hkey,
                                 com_key_w,
                                 NULL,
                                 NULL,
                                 data,
                                 &cbData );

        if( dwRet == ERROR_SUCCESS ) {
            name = QString::fromWCharArray((wchar_t*)data);
            if (name.contains("COM")) {
                ports.append(name);
            }
        }
    }


    return ports;
}
#endif
