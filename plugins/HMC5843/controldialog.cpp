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

void ControlDialog::on_btnRead_clicked()
{
    emit read();
    ui->btnTest->setEnabled(false);
}

void ControlDialog::on_btnTest_clicked()
{
    emit test();
    ui->btnTest->setEnabled(false);
}

void ControlDialog::setValues(int x, int y, int z)
{
    if (x>0xF000) x |= 0xFFFFF000;
    if (y>0xF000) y |= 0xFFFFF000;
    if (z>0xF000) z |= 0xFFFFF000;
    ui->txtX->setText(QString::number(x));
    ui->txtY->setText(QString::number(y));
    ui->txtZ->setText(QString::number(z));
}
