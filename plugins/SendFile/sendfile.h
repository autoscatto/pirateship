#ifndef SendFile_H
#define SendFile_H

#include "sendfile_global.h"
#include <QDebug>
#include <pirateplugin.h>
#include <QObject>
#include <QMessageBox>
#include "controldialog.h"

class SENDFILESHARED_EXPORT SendFile : public PiratePlugin {
    Q_OBJECT
    Q_INTERFACES(PiratePlugin)
public:
    SendFile();
    ~SendFile();
    QString name() const {return QString("SendFile Plugin");};
    QString version() const {return "1.0";};
    int api() const {return 2;};
    void setBuffer(QPlainTextEdit* buffer);

private:
    ControlDialog* ui;

public slots:
    void toggled(const bool checked);
    void send(QString string);
    void dataReady();
};

#endif // SendFile_H
