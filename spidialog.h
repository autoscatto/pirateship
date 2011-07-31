/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef SPIDIALOG_H
#define SPIDIALOG_H

#include <QDialog>
#include <QButtonGroup>
#include <QDebug>

namespace Ui {
    class SPIDialog;
}

class SPIDialog : public QDialog {
    Q_OBJECT
public:
    SPIDialog(QWidget *parent = 0);
    ~SPIDialog();
    QList<int> getOptions();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::SPIDialog *ui;
    QButtonGroup* groupSpeed;
    QButtonGroup* groupPolarity;
    QButtonGroup* groupEdge;
    QButtonGroup* groupPhase;
    QButtonGroup* groupOutput;
};

#endif // SPIDIALOG_H
