/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef LICENSEDIALOG_H
#define LICENSEDIALOG_H

#include <QDialog>
#include <QFile>

namespace Ui {
    class LicenseDialog;
}

class LicenseDialog : public QDialog {
    Q_OBJECT
public:
    LicenseDialog(QWidget *parent = 0);
    ~LicenseDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LicenseDialog *ui;
};

#endif // LICENSEDIALOG_H
