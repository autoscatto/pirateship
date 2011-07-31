/********************************************************************************
** Form generated from reading UI file 'spidialog.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIDIALOG_H
#define UI_SPIDIALOG_H

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

class Ui_SPIDialog
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
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupPolarity;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioButton_18;
    QRadioButton *radioButton_17;
    QGroupBox *groupEdge;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupPhase;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QGroupBox *groupOutput;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_15;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SPIDialog)
    {
        if (SPIDialog->objectName().isEmpty())
            SPIDialog->setObjectName(QString::fromUtf8("SPIDialog"));
        SPIDialog->resize(508, 209);
        verticalLayout_7 = new QVBoxLayout(SPIDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupSpeed = new QGroupBox(SPIDialog);
        groupSpeed->setObjectName(QString::fromUtf8("groupSpeed"));
        verticalLayout = new QVBoxLayout(groupSpeed);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupSpeed);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setText(QString::fromUtf8("30 KHz"));
        radioButton->setChecked(true);
        radioButton->setProperty("Index", QVariant(1));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupSpeed);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setText(QString::fromUtf8("125 KHz"));
        radioButton_2->setProperty("Index", QVariant(2));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupSpeed);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setText(QString::fromUtf8("250 KHz"));
        radioButton_3->setProperty("Index", QVariant(3));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupSpeed);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setText(QString::fromUtf8("1 MHz"));
        radioButton_4->setProperty("Index", QVariant(4));

        verticalLayout->addWidget(radioButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(groupSpeed);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupPolarity = new QGroupBox(SPIDialog);
        groupPolarity->setObjectName(QString::fromUtf8("groupPolarity"));
        verticalLayout_8 = new QVBoxLayout(groupPolarity);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        radioButton_18 = new QRadioButton(groupPolarity);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));
        radioButton_18->setChecked(true);
        radioButton_18->setProperty("Index", QVariant(1));

        verticalLayout_8->addWidget(radioButton_18);

        radioButton_17 = new QRadioButton(groupPolarity);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setProperty("Index", QVariant(2));

        verticalLayout_8->addWidget(radioButton_17);


        verticalLayout_6->addWidget(groupPolarity);

        groupEdge = new QGroupBox(SPIDialog);
        groupEdge->setObjectName(QString::fromUtf8("groupEdge"));
        verticalLayout_2 = new QVBoxLayout(groupEdge);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_9 = new QRadioButton(groupEdge);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setChecked(true);
        radioButton_9->setProperty("Index", QVariant(1));

        verticalLayout_2->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupEdge);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setProperty("Index", QVariant(2));

        verticalLayout_2->addWidget(radioButton_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_6->addWidget(groupEdge);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupPhase = new QGroupBox(SPIDialog);
        groupPhase->setObjectName(QString::fromUtf8("groupPhase"));
        verticalLayout_3 = new QVBoxLayout(groupPhase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton_13 = new QRadioButton(groupPhase);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setChecked(true);
        radioButton_13->setProperty("Index", QVariant(1));

        verticalLayout_3->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(groupPhase);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setProperty("Index", QVariant(2));

        verticalLayout_3->addWidget(radioButton_14);


        verticalLayout_4->addWidget(groupPhase);

        groupOutput = new QGroupBox(SPIDialog);
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

        buttonBox = new QDialogButtonBox(SPIDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(SPIDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SPIDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SPIDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SPIDialog);
    } // setupUi

    void retranslateUi(QDialog *SPIDialog)
    {
        SPIDialog->setWindowTitle(QApplication::translate("SPIDialog", "SPI connection", 0, QApplication::UnicodeUTF8));
        groupSpeed->setTitle(QApplication::translate("SPIDialog", "Speed", 0, QApplication::UnicodeUTF8));
        groupPolarity->setTitle(QApplication::translate("SPIDialog", "Receive Polarity", 0, QApplication::UnicodeUTF8));
        radioButton_18->setText(QApplication::translate("SPIDialog", "Idle Low", 0, QApplication::UnicodeUTF8));
        radioButton_17->setText(QApplication::translate("SPIDialog", "Idle High", 0, QApplication::UnicodeUTF8));
        groupEdge->setTitle(QApplication::translate("SPIDialog", "Output Clock Edge", 0, QApplication::UnicodeUTF8));
        radioButton_9->setText(QApplication::translate("SPIDialog", "Idle to active", 0, QApplication::UnicodeUTF8));
        radioButton_10->setText(QApplication::translate("SPIDialog", "Active to idle", 0, QApplication::UnicodeUTF8));
        groupPhase->setTitle(QApplication::translate("SPIDialog", "Input Sample Phase", 0, QApplication::UnicodeUTF8));
        radioButton_13->setText(QApplication::translate("SPIDialog", "Middle", 0, QApplication::UnicodeUTF8));
        radioButton_14->setText(QApplication::translate("SPIDialog", "End", 0, QApplication::UnicodeUTF8));
        groupOutput->setTitle(QApplication::translate("SPIDialog", "Output type", 0, QApplication::UnicodeUTF8));
        radioButton_16->setText(QApplication::translate("SPIDialog", "Open drain (H=Hi-Z, L=GND)", 0, QApplication::UnicodeUTF8));
        radioButton_15->setText(QApplication::translate("SPIDialog", "Normal (H=3.3V, L=GND)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SPIDialog: public Ui_SPIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIDIALOG_H
