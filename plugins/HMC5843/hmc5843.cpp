#include "hmc5843.h"


HMC5843::HMC5843()
{
    qDebug() << "HMC5843 loaded";
    ui = NULL;
}

HMC5843::~HMC5843()
{
    qDebug() << "HMC5843 unloaded";
    if (ui) delete ui;
}

void HMC5843::toggled(const bool checked)
{
    qDebug() << "HMC5843::toggled >> checked:" << checked;
    if (checked) {
        ui = new ControlDialog();
        connect(ui, SIGNAL(read()), this, SLOT(read()));
        connect(ui, SIGNAL(test()), this, SLOT(test()));
        emit setFormat(0);
        emit setMode(4);
        emit setSupply(true);
        emit setPullup(true);
        ui->show();
    }
    else {
        ui->close();
        delete ui;
        ui = NULL;
    }
}


void HMC5843::setBuffer(QPlainTextEdit* txtbuffer)
{
    buffer = txtbuffer;
}

void HMC5843::dataReady()
{
    if (isReading && buffer) {
        QTextCursor cursor;
        buffer->moveCursor(QTextCursor::End);
        buffer->find("WRITE",QTextDocument::FindBackward);
        cursor = buffer->textCursor();
        if (isTesting) {
            cursor.movePosition(QTextCursor::Down);
            cursor.select(QTextCursor::LineUnderCursor);
            QStringList list = cursor.selectedText().split(" ");
            if (list.count() == 3) {
                if (list.at(1) == "0x10") {
                    QMessageBox::information(NULL, "Test sucessfully realized",
                                             "The HMC5843's self-test was sucessfully "
                                             "realized and returned the desired result.");
                }
            }
        }
        else {
            cursor.movePosition(QTextCursor::Up, QTextCursor::KeepAnchor, 6);
            QString text = cursor.selectedText();
            text.replace("ACK", "");
            text.replace("READ: ", "");
            text.replace("0x", "");
//            text.replace(text[3], "");
//            text.trimmed()
            text = text.simplified();
            QStringList list = text.split(" ");
            qDebug() << "HMC5843: " << list << int(qPrintable(text)[5])
                                            << int(qPrintable(text)[6])
                                            << int(qPrintable(text)[7]) << text;
            if (list.count()==6) {
                int x = (list[0]+list[1]).toInt(NULL, 16);
                int y = (list[2]+list[3]).toInt(NULL, 16);
                int z = (list[4]+list[5]).toInt(NULL, 16);
                ui->setValues(x,y,z);
            }
        }
    }
    isReading = false;
    isTesting = false;
}

void HMC5843::read()
{
    isReading = true;
    emit sendText("[0x3C 0x02 0x00][0x3D rrrrrr 0x3D]");
}

void HMC5843::test()
{
    isReading = true;
    isTesting = true;
    emit sendText("[0x3D rrrrrrrrrrrrr]");
}

Q_EXPORT_PLUGIN2(hmc5843, HMC5843)
