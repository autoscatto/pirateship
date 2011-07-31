/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "rawdialog.h"
#include "ui_rawdialog.h"

RawDialog::RawDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RawDialog)
{
    ui->setupUi(this);
    QObject* radio;
    groupSpeed = new QButtonGroup(this);
    foreach(radio, ui->groupSpeed->children()) {
        if (radio->objectName().contains("radio"))
            groupSpeed->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupOutput = new QButtonGroup(this);
    foreach(radio, ui->groupOutput->children()) {
        if (radio->objectName().contains("radio"))
            groupOutput->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
}

RawDialog::~RawDialog()
{
    delete ui;
}

void RawDialog::changeEvent(QEvent *e)
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

QList<int> RawDialog::getOptions()
{
    QList<int> options;
    options << groupSpeed->checkedId() << groupOutput->checkedId();
    return options;
}
