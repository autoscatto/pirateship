/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef PIRATEPLUGIN_H
#define PIRATEPLUGIN_H

#include <QObject>
#include <QString>
#include <QtPlugin>
#include <QMainWindow>
#include <QPlainTextEdit>

#define PLUGIN_API 2

class PiratePlugin : public QObject
{
    Q_OBJECT
public:
    virtual QString name() const = 0;
    virtual QString version() const = 0;
    virtual int api() const = 0;
    virtual void setBuffer(QPlainTextEdit* buffer) = 0;

signals:
    void sendText(QString);
    void setFormat(int);
    void setMode(int);
    void setSupply(bool);
    void setPullup(bool);

public slots:
    virtual void toggled(const bool checked) = 0;
    virtual void dataReady() = 0;
};

Q_DECLARE_INTERFACE(PiratePlugin,
                    "br.com.dapaixao.ronan.PirateShip.PiratePlugin/1.0");

#endif // PIRATEPLUGIN_H
