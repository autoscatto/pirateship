/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef CONNECTDIALOG_H
#define CONNECTDIALOG_H

#include <QDialog>
#include <qextserialport.h>
#include <QSettings>

#ifdef Q_OS_UNIX
#include "qextserialenumerator.h"
#endif

namespace Ui {
    class ConnectDialog;
}

class ConnectDialog : public QDialog {
    Q_OBJECT
public:
    ConnectDialog(QWidget *parent = 0);
    ~ConnectDialog();
    QString port();
    int baudrate();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ConnectDialog *ui;
    QStringList getSerialPorts();
};

#endif // CONNECTDIALOG_H
