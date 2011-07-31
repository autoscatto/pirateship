#include "controldialog.h"
#include "ui_controldialog.h"

ControlDialog::ControlDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlDialog)
{
    ui->setupUi(this);
}

ControlDialog::~ControlDialog()
{
    delete ui;
}

void ControlDialog::changeEvent(QEvent *e)
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

void ControlDialog::on_btnOpen_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                tr("Open File"),
                                (ui->lblFile->property("hasFile").toBool() ? ui->lblFile->text() : ""),
                                tr("All Files (*);;Text Files (*.txt)"));
    if (!filename.isEmpty()) {
        ui->lblFile->setText(filename);
        QFile file(filename);
        file.open(QIODevice::ReadOnly);
        ui->txtFile->setPlainText(file.readAll());
        ui->txtFile->moveCursor(QTextCursor::Start);
        file.close();
    }
}

void ControlDialog::on_btnSave_clicked()
{

    QString filename = QFileDialog::getSaveFileName(this,
                                tr("Save File"),
                                (ui->lblFile->property("hasFile").toBool() ? ui->lblFile->text() : ""),
                                tr("All Files (*);;Text Files (*.txt)"));
    if (!filename.isEmpty()) {
        ui->lblFile->setText(filename);
        QFile file(filename);
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        file.write(ui->txtFile->toPlainText().toLatin1());
    }
}

void ControlDialog::on_btnSend_clicked()
{
    emit send(ui->txtFile->toPlainText());
}

void ControlDialog::on_txtFile_copyAvailable(bool b)
{
    ui->btnSendSelected->setEnabled(b);
}

void ControlDialog::on_btnSendSelected_clicked()
{
    emit send(ui->txtFile->textCursor().selectedText());
}
