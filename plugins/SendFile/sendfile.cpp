#include "sendfile.h"


SendFile::SendFile()
{
    qDebug() << "SendFile loaded";
    ui = NULL;
}

SendFile::~SendFile()
{
    qDebug() << "SendFile unloaded";
    if (ui) delete ui;
}

void SendFile::toggled(const bool checked)
{
    qDebug() << "SendFile::toggled >> checked:" << checked;
    if (checked) {
        ui = new ControlDialog();
        connect(ui, SIGNAL(send(QString)), this, SLOT(send(QString)));
        ui->show();
    }
    else {
        ui->close();
        delete ui;
        ui = NULL;
    }
}

void SendFile::send(QString string)
{
    QTextStream stream(&string, QIODevice::ReadOnly | QIODevice::Text);
    QString line;
    do {
        line = stream.readLine();
        emit sendText(line);
    } while (!line.isNull());
}

void SendFile::setBuffer(QPlainTextEdit* buffer) {}
void SendFile::dataReady() {}

Q_EXPORT_PLUGIN2(sendfile, SendFile)
