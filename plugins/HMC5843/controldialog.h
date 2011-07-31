#ifndef CONTROLDIALOG_H
#define CONTROLDIALOG_H

#include <QDialog>

namespace Ui {
    class ControlDialog;
}

class ControlDialog : public QDialog {
    Q_OBJECT
public:
    ControlDialog(QWidget *parent = 0);
    ~ControlDialog();
    void setValues(int x, int y, int z);

signals:
    void read();
    void test();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ControlDialog *ui;

private slots:
    void on_btnTest_clicked();
    void on_btnRead_clicked();
};

#endif // CONTROLDIALOG_H
