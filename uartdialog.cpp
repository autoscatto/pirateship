/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "uartdialog.h"
#include "ui_uartdialog.h"

UARTDialog::UARTDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UARTDialog)
{
    ui->setupUi(this);
    QObject* radio;
    groupSpeed = new QButtonGroup(this);
    foreach(radio, ui->groupSpeed->children()) {
        if (radio->objectName().contains("radio"))
            groupSpeed->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupParity = new QButtonGroup(this);
    foreach(radio, ui->groupParity->children()) {
        if (radio->objectName().contains("radio"))
            groupParity->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupStop = new QButtonGroup(this);
    foreach(radio, ui->groupStop->children()) {
        if (radio->objectName().contains("radio"))
            groupStop->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupPolarity = new QButtonGroup(this);
    foreach(radio, ui->groupPolarity->children()) {
        if (radio->objectName().contains("radio"))
            groupPolarity->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupOutput = new QButtonGroup(this);
    foreach(radio, ui->groupOutput->children()) {
        if (radio->objectName().contains("radio"))
            groupOutput->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
}

UARTDialog::~UARTDialog()
{
    delete ui;
}

void UARTDialog::changeEvent(QEvent *e)
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

QList<int> UARTDialog::getOptions()
{
    QList<int> options;
    options << groupSpeed->checkedId() << groupParity->checkedId() <<
            groupStop->checkedId() << groupPolarity->checkedId() << groupOutput->checkedId();
    return options;
}
