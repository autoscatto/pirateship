/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "spidialog.h"
#include "ui_spidialog.h"

SPIDialog::SPIDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SPIDialog)
{
    ui->setupUi(this);
    QObject* radio;
    groupSpeed = new QButtonGroup(this);
    foreach(radio, ui->groupSpeed->children()) {
        if (radio->objectName().contains("radio"))
            groupSpeed->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupPolarity = new QButtonGroup(this);
    foreach(radio, ui->groupPolarity->children()) {
        if (radio->objectName().contains("radio"))
            groupPolarity->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupEdge = new QButtonGroup(this);
    foreach(radio, ui->groupEdge->children()) {
        if (radio->objectName().contains("radio"))
            groupEdge->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupPhase = new QButtonGroup(this);
    foreach(radio, ui->groupPhase->children()) {
        if (radio->objectName().contains("radio"))
            groupPhase->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
    groupOutput = new QButtonGroup(this);
    foreach(radio, ui->groupOutput->children()) {
        if (radio->objectName().contains("radio"))
            groupOutput->addButton((QRadioButton*)radio, radio->property("Index").toInt());
    }
}

SPIDialog::~SPIDialog()
{
    delete ui;
}

void SPIDialog::changeEvent(QEvent *e)
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

QList<int> SPIDialog::getOptions()
{
    QList<int> options;
    options << groupSpeed->checkedId() << groupPolarity->checkedId() << groupEdge->checkedId() <<
            groupPhase->checkedId() << groupOutput->checkedId();
    return options;
}
