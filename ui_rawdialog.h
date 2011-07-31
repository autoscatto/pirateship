/********************************************************************************
** Form generated from reading UI file 'rawdialog.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAWDIALOG_H
#define UI_RAWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RawDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupSpeed;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupOutput;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_15;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RawDialog)
    {
        if (RawDialog->objectName().isEmpty())
            RawDialog->setObjectName(QString::fromUtf8("RawDialog"));
        RawDialog->resize(298, 151);
        verticalLayout_7 = new QVBoxLayout(RawDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupSpeed = new QGroupBox(RawDialog);
        groupSpeed->setObjectName(QString::fromUtf8("groupSpeed"));
        verticalLayout = new QVBoxLayout(groupSpeed);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupSpeed);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setText(QString::fromUtf8("~50 KHz"));
        radioButton->setChecked(true);
        radioButton->setProperty("Index", QVariant(1));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupSpeed);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setText(QString::fromUtf8("~100 KHz"));
        radioButton_2->setProperty("Index", QVariant(2));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupSpeed);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setText(QString::fromUtf8("~400 KHz"));
        radioButton_3->setProperty("Index", QVariant(3));

        verticalLayout->addWidget(radioButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(groupSpeed);

        groupOutput = new QGroupBox(RawDialog);
        groupOutput->setObjectName(QString::fromUtf8("groupOutput"));
        verticalLayout_5 = new QVBoxLayout(groupOutput);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        radioButton_16 = new QRadioButton(groupOutput);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));
        radioButton_16->setChecked(true);
        radioButton_16->setProperty("Index", QVariant(1));

        verticalLayout_5->addWidget(radioButton_16);

        radioButton_15 = new QRadioButton(groupOutput);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setProperty("Index", QVariant(2));

        verticalLayout_5->addWidget(radioButton_15);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(groupOutput);


        verticalLayout_7->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RawDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(RawDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RawDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RawDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RawDialog);
    } // setupUi

    void retranslateUi(QDialog *RawDialog)
    {
        RawDialog->setWindowTitle(QApplication::translate("RawDialog", "Raw connection", 0, QApplication::UnicodeUTF8));
        groupSpeed->setTitle(QApplication::translate("RawDialog", "Speed", 0, QApplication::UnicodeUTF8));
        groupOutput->setTitle(QApplication::translate("RawDialog", "Output type", 0, QApplication::UnicodeUTF8));
        radioButton_16->setText(QApplication::translate("RawDialog", "Open drain (H=Hi-Z, L=GND)", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("RawDialog", "Normal (H=3.3V, L=GND)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RawDialog: public Ui_RawDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAWDIALOG_H
