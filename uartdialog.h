/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef UARTDIALOG_H
#define UARTDIALOG_H

#include <QDialog>
#include <QButtonGroup>
#include <QDebug>

namespace Ui {
    class UARTDialog;
}

class UARTDialog : public QDialog {
    Q_OBJECT
public:
    UARTDialog(QWidget *parent = 0);
    ~UARTDialog();
    QList<int> getOptions();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::UARTDialog *ui;
    QButtonGroup* groupSpeed;
    QButtonGroup* groupParity;
    QButtonGroup* groupStop;
    QButtonGroup* groupPolarity;
    QButtonGroup* groupOutput;
};

#endif // UARTDIALOG_H
