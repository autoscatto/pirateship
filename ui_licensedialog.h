/********************************************************************************
** Form generated from reading UI file 'licensedialog.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEDIALOG_H
#define UI_LICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LicenseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *lblLicense;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTextEdit *txtRonan;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *txtGPL;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LicenseDialog)
    {
        if (LicenseDialog->objectName().isEmpty())
            LicenseDialog->setObjectName(QString::fromUtf8("LicenseDialog"));
        LicenseDialog->resize(507, 300);
        verticalLayout_2 = new QVBoxLayout(LicenseDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblLicense = new QLabel(LicenseDialog);
        lblLicense->setObjectName(QString::fromUtf8("lblLicense"));

        verticalLayout_2->addWidget(lblLicense);

        tabWidget = new QTabWidget(LicenseDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtRonan = new QTextEdit(tab);
        txtRonan->setObjectName(QString::fromUtf8("txtRonan"));
        txtRonan->setReadOnly(true);

        verticalLayout->addWidget(txtRonan);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        txtGPL = new QTextEdit(tab_2);
        txtGPL->setObjectName(QString::fromUtf8("txtGPL"));
        txtGPL->setReadOnly(true);

        verticalLayout_3->addWidget(txtGPL);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(LicenseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(LicenseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LicenseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LicenseDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *LicenseDialog)
    {
        LicenseDialog->setWindowTitle(QApplication::translate("LicenseDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lblLicense->setText(QApplication::translate("LicenseDialog", "This program is released under the terms of the Ronan License.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LicenseDialog", "Ronan License", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LicenseDialog", "GNU General Public License", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LicenseDialog: public Ui_LicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSEDIALOG_H
