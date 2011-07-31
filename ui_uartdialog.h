/********************************************************************************
** Form generated from reading UI file 'uartdialog.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UARTDIALOG_H
#define UI_UARTDIALOG_H

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

class Ui_UARTDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupSpeed;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_19;
    QRadioButton *radioButton_20;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupParity;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupStop;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QGroupBox *groupPolarity;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_18;
    QRadioButton *radioButton_17;
    QGroupBox *groupOutput;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_15;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UARTDialog)
    {
        if (UARTDialog->objectName().isEmpty())
            UARTDialog->setObjectName(QString::fromUtf8("UARTDialog"));
        UARTDialog->resize(483, 312);
        verticalLayout_7 = new QVBoxLayout(UARTDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupSpeed = new QGroupBox(UARTDialog);
        groupSpeed->setObjectName(QString::fromUtf8("groupSpeed"));
        verticalLayout = new QVBoxLayout(groupSpeed);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupSpeed);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setText(QString::fromUtf8("300"));
        radioButton->setChecked(true);
        radioButton->setProperty("Index", QVariant(1));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupSpeed);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setText(QString::fromUtf8("1200"));
        radioButton_2->setProperty("Index", QVariant(2));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupSpeed);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setText(QString::fromUtf8("2400"));
        radioButton_3->setProperty("Index", QVariant(3));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupSpeed);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setText(QString::fromUtf8("4800"));
        radioButton_4->setProperty("Index", QVariant(4));

        verticalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupSpeed);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setText(QString::fromUtf8("9600"));
        radioButton_5->setProperty("Index", QVariant(5));

        verticalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupSpeed);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setText(QString::fromUtf8("19200"));
        radioButton_6->setProperty("Index", QVariant(6));

        verticalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupSpeed);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setText(QString::fromUtf8("38400"));
        radioButton_7->setProperty("Index", QVariant(7));

        verticalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupSpeed);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setText(QString::fromUtf8("57600"));
        radioButton_8->setProperty("Index", QVariant(8));

        verticalLayout->addWidget(radioButton_8);

        radioButton_19 = new QRadioButton(groupSpeed);
        radioButton_19->setObjectName(QString::fromUtf8("radioButton_19"));
        radioButton_19->setText(QString::fromUtf8("115200"));
        radioButton_19->setProperty("Index", QVariant(9));

        verticalLayout->addWidget(radioButton_19);

        radioButton_20 = new QRadioButton(groupSpeed);
        radioButton_20->setObjectName(QString::fromUtf8("radioButton_20"));
        radioButton_20->setText(QString::fromUtf8("31250 (MIDI)"));
        radioButton_20->setProperty("Index", QVariant(10));

        verticalLayout->addWidget(radioButton_20);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(groupSpeed);

        groupParity = new QGroupBox(UARTDialog);
        groupParity->setObjectName(QString::fromUtf8("groupParity"));
        verticalLayout_2 = new QVBoxLayout(groupParity);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_9 = new QRadioButton(groupParity);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setChecked(true);
        radioButton_9->setProperty("Index", QVariant(1));

        verticalLayout_2->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupParity);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setProperty("Index", QVariant(2));

        verticalLayout_2->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(groupParity);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setProperty("Index", QVariant(3));

        verticalLayout_2->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(groupParity);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setProperty("Index", QVariant(4));

        verticalLayout_2->addWidget(radioButton_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupParity);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupStop = new QGroupBox(UARTDialog);
        groupStop->setObjectName(QString::fromUtf8("groupStop"));
        verticalLayout_3 = new QVBoxLayout(groupStop);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton_13 = new QRadioButton(groupStop);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setText(QString::fromUtf8("1"));
        radioButton_13->setChecked(true);
        radioButton_13->setProperty("Index", QVariant(1));

        verticalLayout_3->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(groupStop);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setText(QString::fromUtf8("2"));
        radioButton_14->setProperty("Index", QVariant(2));

        verticalLayout_3->addWidget(radioButton_14);


        verticalLayout_4->addWidget(groupStop);

        groupPolarity = new QGroupBox(UARTDialog);
        groupPolarity->setObjectName(QString::fromUtf8("groupPolarity"));
        verticalLayout_6 = new QVBoxLayout(groupPolarity);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        radioButton_18 = new QRadioButton(groupPolarity);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));
        radioButton_18->setChecked(true);
        radioButton_18->setProperty("Index", QVariant(1));

        verticalLayout_6->addWidget(radioButton_18);

        radioButton_17 = new QRadioButton(groupPolarity);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setProperty("Index", QVariant(2));

        verticalLayout_6->addWidget(radioButton_17);


        verticalLayout_4->addWidget(groupPolarity);

        groupOutput = new QGroupBox(UARTDialog);
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


        verticalLayout_4->addWidget(groupOutput);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(UARTDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(UARTDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UARTDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UARTDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UARTDialog);
    } // setupUi

    void retranslateUi(QDialog *UARTDialog)
    {
        UARTDialog->setWindowTitle(QApplication::translate("UARTDialog", "UART connection", 0, QApplication::UnicodeUTF8));
        groupSpeed->setTitle(QApplication::translate("UARTDialog", "Speed (bps)", 0, QApplication::UnicodeUTF8));
        groupParity->setTitle(QApplication::translate("UARTDialog", "Data bits/parity", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("UARTDialog", "8, None", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("UARTDialog", "8, Even", 0, QApplication::UnicodeUTF8));
        radioButton_11->setText(QApplication::translate("UARTDialog", "8, Odd", 0, QApplication::UnicodeUTF8));
        radioButton_12->setText(QApplication::translate("UARTDialog", "9, None", 0, QApplication::UnicodeUTF8));
        groupStop->setTitle(QApplication::translate("UARTDialog", "Stop bits", 0, QApplication::UnicodeUTF8));
        groupPolarity->setTitle(QApplication::translate("UARTDialog", "Receive polarity", 0, QApplication::UnicodeUTF8));
        radioButton_18->setText(QApplication::translate("UARTDialog", "Idle 1", 0, QApplication::UnicodeUTF8));
        radioButton_17->setText(QApplication::translate("UARTDialog", "Idle 0", 0, QApplication::UnicodeUTF8));
        groupOutput->setTitle(QApplication::translate("UARTDialog", "Output type", 0, QApplication::UnicodeUTF8));
        radioButton_16->setText(QApplication::translate("UARTDialog", "Open drain (H=Hi-Z, L=GND)", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("UARTDialog", "Normal (H=3.3V, L=GND)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UARTDialog: public Ui_UARTDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTDIALOG_H
