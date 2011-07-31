#ifndef CONTROLDIALOG_H
#define CONTROLDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <QDebug>

namespace Ui {
    class ControlDialog;
}

class ControlDialog : public QDialog {
    Q_OBJECT
public:
    ControlDialog(QWidget *parent = 0);
    ~ControlDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ControlDialog *ui;

signals:
    void send(QString string);

private slots:
    void on_btnSendSelected_clicked();
    void on_txtFile_copyAvailable(bool b);
    void on_btnSend_clicked();
    void on_btnSave_clicked();
    void on_btnOpen_clicked();
};

#endif // CONTROLDIALOG_H
