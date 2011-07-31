#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include "TestPlugin_global.h"
#include <QDebug>
#include <pirateplugin.h>
#include <QObject>

class TESTPLUGINSHARED_EXPORT TestPlugin : public PiratePlugin {
    Q_OBJECT
    Q_INTERFACES(PiratePlugin)
public:
    TestPlugin();
    ~TestPlugin();
    QString name() const {return QString("Test Plugin");};
    QString version() const {return "1.0.0";};
    int api() const {return 2;};
    void setBuffer(QPlainTextEdit* buffer);

public slots:
    void toggled(const bool checked);
    void dataReady();
};

#endif // TESTPLUGIN_H
