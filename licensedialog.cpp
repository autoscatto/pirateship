/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "licensedialog.h"
#include "ui_licensedialog.h"

LicenseDialog::LicenseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LicenseDialog)
{
    ui->setupUi(this);
    QFile file(":/data/Ronan License.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    ui->txtRonan->append(QString(file.readAll()));
    ui->txtRonan->moveCursor(QTextCursor::Start);
    file.close();
    file.setFileName(":/data/GPLv2.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    ui->txtGPL->append(QString(file.readAll()));
    ui->txtGPL->moveCursor(QTextCursor::Start);
    file.close();
}

LicenseDialog::~LicenseDialog()
{
    delete ui;
}

void LicenseDialog::changeEvent(QEvent *e)
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
