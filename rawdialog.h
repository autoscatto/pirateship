/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef RAWDIALOG_H
#define RAWDIALOG_H

#include <QDialog>
#include <QButtonGroup>
#include <QDebug>

namespace Ui {
    class RawDialog;
}

class RawDialog : public QDialog {
    Q_OBJECT
public:
    RawDialog(QWidget *parent = 0);
    ~RawDialog();
    QList<int> getOptions();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::RawDialog *ui;
    QButtonGroup* groupSpeed;
    QButtonGroup* groupOutput;
};

#endif // RAWDIALOG_H
