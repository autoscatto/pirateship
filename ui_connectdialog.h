/********************************************************************************
** Form generated from reading UI file 'connectdialog.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTDIALOG_H
#define UI_CONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblPort;
    QLabel *lblBaudrate;
    QComboBox *comboPort;
    QComboBox *comboBaudrate;
    QDialogButtonBox *buttonBoxOKCancel;

    void setupUi(QDialog *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QString::fromUtf8("ConnectDialog"));
        ConnectDialog->resize(418, 108);
        verticalLayout = new QVBoxLayout(ConnectDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblPort = new QLabel(ConnectDialog);
        lblPort->setObjectName(QString::fromUtf8("lblPort"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblPort);

        lblBaudrate = new QLabel(ConnectDialog);
        lblBaudrate->setObjectName(QString::fromUtf8("lblBaudrate"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblBaudrate);

        comboPort = new QComboBox(ConnectDialog);
        comboPort->setObjectName(QString::fromUtf8("comboPort"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboPort);

        comboBaudrate = new QComboBox(ConnectDialog);
        comboBaudrate->setObjectName(QString::fromUtf8("comboBaudrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBaudrate);


        verticalLayout->addLayout(formLayout);

        buttonBoxOKCancel = new QDialogButtonBox(ConnectDialog);
        buttonBoxOKCancel->setObjectName(QString::fromUtf8("buttonBoxOKCancel"));
        buttonBoxOKCancel->setOrientation(Qt::Horizontal);
        buttonBoxOKCancel->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBoxOKCancel);


        retranslateUi(ConnectDialog);
        QObject::connect(buttonBoxOKCancel, SIGNAL(accepted()), ConnectDialog, SLOT(accept()));
        QObject::connect(buttonBoxOKCancel, SIGNAL(rejected()), ConnectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QApplication::translate("ConnectDialog", "Connect to serial port", 0, QApplication::UnicodeUTF8));
        lblPort->setText(QApplication::translate("ConnectDialog", "Port:", 0, QApplication::UnicodeUTF8));
        lblBaudrate->setText(QApplication::translate("ConnectDialog", "Baudrate:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTDIALOG_H
