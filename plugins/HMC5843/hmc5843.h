#ifndef HMC5843_H
#define HMC5843_H

#include "hmc5843_global.h"
#include <QDebug>
#include <pirateplugin.h>
#include <QObject>
#include <QMessageBox>
#include "controldialog.h"

class HMC5843SHARED_EXPORT HMC5843 : public PiratePlugin {
    Q_OBJECT
    Q_INTERFACES(PiratePlugin)
public:
    HMC5843();
    ~HMC5843();
    QString name() const {return QString("HMC5843 Plugin");};
    QString version() const {return "1.0";};
    int api() const {return 2;};
    void setBuffer(QPlainTextEdit* txtbuffer);

private:
    QPlainTextEdit* buffer;
    ControlDialog* ui;
    bool isTesting;
    bool isReading;

public slots:
    void toggled(const bool checked);
    void dataReady();
    void read();
    void test();
};

#endif // HMC5843_H
