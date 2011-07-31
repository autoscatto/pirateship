/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 2. Nov 23:32:11 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "commandline.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStatus_Info;
    QAction *actionSelf_Test;
    QAction *actionConnect;
    QAction *action_Disconnect;
    QAction *actionBus_Pirate_Manual;
    QAction *actionAbout;
    QAction *actionWire_colors;
    QAction *actionRetain_last_command;
    QAction *actionAuto_send_command;
    QAction *actionErase_buffer_on_new_command;
    QAction *actionClear_buffer;
    QAction *actionCommand_help;
    QAction *actionShow_wires;
    QAction *actionShow_header;
    QAction *actionExit;
    QAction *actionAbout_Qt;
    QAction *actionVersions;
    QAction *actionLicense;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QWidget *radioMode;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblMode;
    QRadioButton *radioHiZ;
    QRadioButton *radio1wire;
    QRadioButton *radioUART;
    QRadioButton *radioI2C;
    QRadioButton *radioSPI;
    QRadioButton *radioJTAG;
    QRadioButton *radioRaw2Wire;
    QRadioButton *radioRaw3Wire;
    QRadioButton *radioPCKeyboard;
    QRadioButton *radioLCD;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblFormat;
    QRadioButton *radioHex;
    QRadioButton *radioDec;
    QRadioButton *radioBin;
    QRadioButton *radioRaw;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnVoltages;
    QLabel *label_5;
    QLabel *label5V;
    QLabel *label_6;
    QLabel *label3V3;
    QLabel *label_3;
    QLabel *labelVPullup;
    QPushButton *btnPowerSupply;
    QPushButton *btnPullup;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    CommandLine *txtSend;
    QPushButton *pushButton;
    QPushButton *btnClear;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *txtOutput;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCommand;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QMenu *menuPlugins;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWires;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboColors;
    QFormLayout *formLayout;
    QLabel *lblGND;
    QLabel *lblBrown;
    QLabel *lbl3v3;
    QLabel *lblRed;
    QLabel *lbl5v;
    QLabel *lblOrange;
    QLabel *lblADC;
    QLabel *lblYellow;
    QLabel *lblVPU;
    QLabel *lblGreen;
    QLabel *lblAUX;
    QLabel *lblBlue;
    QLabel *lblCLK;
    QLabel *lblPurple;
    QLabel *lblMOSI;
    QLabel *lblGray;
    QLabel *lblCS;
    QLabel *lblWhite;
    QLabel *lblMISO;
    QLabel *lblBlack;
    QDockWidget *dockHeader;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout;
    QLabel *lbl5v_2;
    QLabel *lblADC_2;
    QLabel *lblVPU_2;
    QLabel *lblAUX_2;
    QLabel *lblCLK_2;
    QLabel *lblMOSI_2;
    QLabel *lblCS_2;
    QLabel *lblMISO_2;
    QLabel *lbl3v3_2;
    QLabel *lblGND_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(907, 525);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/media/PirateShip.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionStatus_Info = new QAction(MainWindow);
        actionStatus_Info->setObjectName(QString::fromUtf8("actionStatus_Info"));
        actionSelf_Test = new QAction(MainWindow);
        actionSelf_Test->setObjectName(QString::fromUtf8("actionSelf_Test"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        action_Disconnect = new QAction(MainWindow);
        action_Disconnect->setObjectName(QString::fromUtf8("action_Disconnect"));
        actionBus_Pirate_Manual = new QAction(MainWindow);
        actionBus_Pirate_Manual->setObjectName(QString::fromUtf8("actionBus_Pirate_Manual"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionWire_colors = new QAction(MainWindow);
        actionWire_colors->setObjectName(QString::fromUtf8("actionWire_colors"));
        actionRetain_last_command = new QAction(MainWindow);
        actionRetain_last_command->setObjectName(QString::fromUtf8("actionRetain_last_command"));
        actionRetain_last_command->setCheckable(true);
        actionAuto_send_command = new QAction(MainWindow);
        actionAuto_send_command->setObjectName(QString::fromUtf8("actionAuto_send_command"));
        actionAuto_send_command->setCheckable(true);
        actionErase_buffer_on_new_command = new QAction(MainWindow);
        actionErase_buffer_on_new_command->setObjectName(QString::fromUtf8("actionErase_buffer_on_new_command"));
        actionErase_buffer_on_new_command->setCheckable(true);
        actionClear_buffer = new QAction(MainWindow);
        actionClear_buffer->setObjectName(QString::fromUtf8("actionClear_buffer"));
        actionCommand_help = new QAction(MainWindow);
        actionCommand_help->setObjectName(QString::fromUtf8("actionCommand_help"));
        actionShow_wires = new QAction(MainWindow);
        actionShow_wires->setObjectName(QString::fromUtf8("actionShow_wires"));
        actionShow_header = new QAction(MainWindow);
        actionShow_header->setObjectName(QString::fromUtf8("actionShow_header"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionVersions = new QAction(MainWindow);
        actionVersions->setObjectName(QString::fromUtf8("actionVersions"));
        actionLicense = new QAction(MainWindow);
        actionLicense->setObjectName(QString::fromUtf8("actionLicense"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(centralWidget);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setCheckable(true);

        horizontalLayout->addWidget(btnConnect);

        radioMode = new QWidget(centralWidget);
        radioMode->setObjectName(QString::fromUtf8("radioMode"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioMode->sizePolicy().hasHeightForWidth());
        radioMode->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(radioMode);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        lblMode = new QLabel(radioMode);
        lblMode->setObjectName(QString::fromUtf8("lblMode"));

        horizontalLayout_6->addWidget(lblMode);

        radioHiZ = new QRadioButton(radioMode);
        radioHiZ->setObjectName(QString::fromUtf8("radioHiZ"));
        radioHiZ->setChecked(true);

        horizontalLayout_6->addWidget(radioHiZ);

        radio1wire = new QRadioButton(radioMode);
        radio1wire->setObjectName(QString::fromUtf8("radio1wire"));

        horizontalLayout_6->addWidget(radio1wire);

        radioUART = new QRadioButton(radioMode);
        radioUART->setObjectName(QString::fromUtf8("radioUART"));

        horizontalLayout_6->addWidget(radioUART);

        radioI2C = new QRadioButton(radioMode);
        radioI2C->setObjectName(QString::fromUtf8("radioI2C"));

        horizontalLayout_6->addWidget(radioI2C);

        radioSPI = new QRadioButton(radioMode);
        radioSPI->setObjectName(QString::fromUtf8("radioSPI"));

        horizontalLayout_6->addWidget(radioSPI);

        radioJTAG = new QRadioButton(radioMode);
        radioJTAG->setObjectName(QString::fromUtf8("radioJTAG"));

        horizontalLayout_6->addWidget(radioJTAG);

        radioRaw2Wire = new QRadioButton(radioMode);
        radioRaw2Wire->setObjectName(QString::fromUtf8("radioRaw2Wire"));

        horizontalLayout_6->addWidget(radioRaw2Wire);

        radioRaw3Wire = new QRadioButton(radioMode);
        radioRaw3Wire->setObjectName(QString::fromUtf8("radioRaw3Wire"));

        horizontalLayout_6->addWidget(radioRaw3Wire);

        radioPCKeyboard = new QRadioButton(radioMode);
        radioPCKeyboard->setObjectName(QString::fromUtf8("radioPCKeyboard"));

        horizontalLayout_6->addWidget(radioPCKeyboard);

        radioLCD = new QRadioButton(radioMode);
        radioLCD->setObjectName(QString::fromUtf8("radioLCD"));

        horizontalLayout_6->addWidget(radioLCD);


        horizontalLayout->addWidget(radioMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 0));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(9, 0, 9, 0);
        lblFormat = new QLabel(widget_2);
        lblFormat->setObjectName(QString::fromUtf8("lblFormat"));

        horizontalLayout_7->addWidget(lblFormat);

        radioHex = new QRadioButton(widget_2);
        radioHex->setObjectName(QString::fromUtf8("radioHex"));
        radioHex->setChecked(true);

        horizontalLayout_7->addWidget(radioHex);

        radioDec = new QRadioButton(widget_2);
        radioDec->setObjectName(QString::fromUtf8("radioDec"));

        horizontalLayout_7->addWidget(radioDec);

        radioBin = new QRadioButton(widget_2);
        radioBin->setObjectName(QString::fromUtf8("radioBin"));

        horizontalLayout_7->addWidget(radioBin);

        radioRaw = new QRadioButton(widget_2);
        radioRaw->setObjectName(QString::fromUtf8("radioRaw"));

        horizontalLayout_7->addWidget(radioRaw);


        horizontalLayout_3->addWidget(widget_2);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnVoltages = new QPushButton(centralWidget);
        btnVoltages->setObjectName(QString::fromUtf8("btnVoltages"));

        horizontalLayout_4->addWidget(btnVoltages);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setText(QString::fromUtf8("5V:"));

        horizontalLayout_4->addWidget(label_5);

        label5V = new QLabel(centralWidget);
        label5V->setObjectName(QString::fromUtf8("label5V"));
        label5V->setText(QString::fromUtf8("0.0"));

        horizontalLayout_4->addWidget(label5V);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setText(QString::fromUtf8("3.3V:"));

        horizontalLayout_4->addWidget(label_6);

        label3V3 = new QLabel(centralWidget);
        label3V3->setObjectName(QString::fromUtf8("label3V3"));
        label3V3->setText(QString::fromUtf8("0.0"));

        horizontalLayout_4->addWidget(label3V3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setText(QString::fromUtf8("Vpullup:"));

        horizontalLayout_4->addWidget(label_3);

        labelVPullup = new QLabel(centralWidget);
        labelVPullup->setObjectName(QString::fromUtf8("labelVPullup"));
        labelVPullup->setText(QString::fromUtf8("0.0"));

        horizontalLayout_4->addWidget(labelVPullup);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        btnPowerSupply = new QPushButton(centralWidget);
        btnPowerSupply->setObjectName(QString::fromUtf8("btnPowerSupply"));
        btnPowerSupply->setCheckable(true);

        horizontalLayout_2->addWidget(btnPowerSupply);

        btnPullup = new QPushButton(centralWidget);
        btnPullup->setObjectName(QString::fromUtf8("btnPullup"));
        btnPullup->setCheckable(true);

        horizontalLayout_2->addWidget(btnPullup);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        txtSend = new CommandLine(centralWidget);
        txtSend->setObjectName(QString::fromUtf8("txtSend"));

        horizontalLayout_5->addWidget(txtSend);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoDefault(true);
        pushButton->setDefault(true);
        pushButton->setFlat(false);

        horizontalLayout_5->addWidget(pushButton);

        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_5->addWidget(btnClear);


        verticalLayout_2->addLayout(horizontalLayout_5);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 782, 357));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtOutput = new QPlainTextEdit(scrollAreaWidgetContents);
        txtOutput->setObjectName(QString::fromUtf8("txtOutput"));

        verticalLayout->addWidget(txtOutput);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuCommand = new QMenu(menuBar);
        menuCommand->setObjectName(QString::fromUtf8("menuCommand"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWires = new QDockWidget(MainWindow);
        dockWires->setObjectName(QString::fromUtf8("dockWires"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboColors = new QComboBox(dockWidgetContents);
        comboColors->setObjectName(QString::fromUtf8("comboColors"));

        verticalLayout_3->addWidget(comboColors);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        lblGND = new QLabel(dockWidgetContents);
        lblGND->setObjectName(QString::fromUtf8("lblGND"));
        lblGND->setText(QString::fromUtf8("GND"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblGND);

        lblBrown = new QLabel(dockWidgetContents);
        lblBrown->setObjectName(QString::fromUtf8("lblBrown"));
        lblBrown->setMaximumSize(QSize(30, 16777215));
        lblBrown->setFrameShape(QFrame::Box);
        lblBrown->setText(QString::fromUtf8("Brown"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblBrown);

        lbl3v3 = new QLabel(dockWidgetContents);
        lbl3v3->setObjectName(QString::fromUtf8("lbl3v3"));
        lbl3v3->setText(QString::fromUtf8("+3V3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lbl3v3);

        lblRed = new QLabel(dockWidgetContents);
        lblRed->setObjectName(QString::fromUtf8("lblRed"));
        lblRed->setMaximumSize(QSize(30, 16777215));
        lblRed->setFrameShape(QFrame::Box);
        lblRed->setText(QString::fromUtf8("Red"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblRed);

        lbl5v = new QLabel(dockWidgetContents);
        lbl5v->setObjectName(QString::fromUtf8("lbl5v"));
        lbl5v->setText(QString::fromUtf8("+5V"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl5v);

        lblOrange = new QLabel(dockWidgetContents);
        lblOrange->setObjectName(QString::fromUtf8("lblOrange"));
        lblOrange->setMaximumSize(QSize(30, 16777215));
        lblOrange->setFrameShape(QFrame::Box);
        lblOrange->setText(QString::fromUtf8("Orange"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblOrange);

        lblADC = new QLabel(dockWidgetContents);
        lblADC->setObjectName(QString::fromUtf8("lblADC"));
        lblADC->setText(QString::fromUtf8("ADC"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lblADC);

        lblYellow = new QLabel(dockWidgetContents);
        lblYellow->setObjectName(QString::fromUtf8("lblYellow"));
        lblYellow->setMaximumSize(QSize(30, 16777215));
        lblYellow->setFrameShape(QFrame::Box);
        lblYellow->setText(QString::fromUtf8("Yellow"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblYellow);

        lblVPU = new QLabel(dockWidgetContents);
        lblVPU->setObjectName(QString::fromUtf8("lblVPU"));
        lblVPU->setText(QString::fromUtf8("Vpu"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblVPU);

        lblGreen = new QLabel(dockWidgetContents);
        lblGreen->setObjectName(QString::fromUtf8("lblGreen"));
        lblGreen->setMaximumSize(QSize(30, 16777215));
        lblGreen->setFrameShape(QFrame::Box);
        lblGreen->setText(QString::fromUtf8("Green"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lblGreen);

        lblAUX = new QLabel(dockWidgetContents);
        lblAUX->setObjectName(QString::fromUtf8("lblAUX"));
        lblAUX->setText(QString::fromUtf8("AUX"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lblAUX);

        lblBlue = new QLabel(dockWidgetContents);
        lblBlue->setObjectName(QString::fromUtf8("lblBlue"));
        lblBlue->setMaximumSize(QSize(30, 16777215));
        lblBlue->setFrameShape(QFrame::Box);
        lblBlue->setText(QString::fromUtf8("Blue"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lblBlue);

        lblCLK = new QLabel(dockWidgetContents);
        lblCLK->setObjectName(QString::fromUtf8("lblCLK"));
        lblCLK->setText(QString::fromUtf8("CLK"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lblCLK);

        lblPurple = new QLabel(dockWidgetContents);
        lblPurple->setObjectName(QString::fromUtf8("lblPurple"));
        lblPurple->setMaximumSize(QSize(30, 16777215));
        lblPurple->setFrameShape(QFrame::Box);
        lblPurple->setText(QString::fromUtf8("Purple"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lblPurple);

        lblMOSI = new QLabel(dockWidgetContents);
        lblMOSI->setObjectName(QString::fromUtf8("lblMOSI"));
        lblMOSI->setText(QString::fromUtf8("MOSI"));

        formLayout->setWidget(7, QFormLayout::LabelRole, lblMOSI);

        lblGray = new QLabel(dockWidgetContents);
        lblGray->setObjectName(QString::fromUtf8("lblGray"));
        lblGray->setMaximumSize(QSize(30, 16777215));
        lblGray->setFrameShape(QFrame::Box);
        lblGray->setText(QString::fromUtf8("Gray"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lblGray);

        lblCS = new QLabel(dockWidgetContents);
        lblCS->setObjectName(QString::fromUtf8("lblCS"));
        lblCS->setText(QString::fromUtf8("CS"));

        formLayout->setWidget(8, QFormLayout::LabelRole, lblCS);

        lblWhite = new QLabel(dockWidgetContents);
        lblWhite->setObjectName(QString::fromUtf8("lblWhite"));
        lblWhite->setMaximumSize(QSize(30, 16777215));
        lblWhite->setFrameShape(QFrame::Box);
        lblWhite->setText(QString::fromUtf8("White"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lblWhite);

        lblMISO = new QLabel(dockWidgetContents);
        lblMISO->setObjectName(QString::fromUtf8("lblMISO"));
        lblMISO->setText(QString::fromUtf8("MISO"));

        formLayout->setWidget(9, QFormLayout::LabelRole, lblMISO);

        lblBlack = new QLabel(dockWidgetContents);
        lblBlack->setObjectName(QString::fromUtf8("lblBlack"));
        lblBlack->setMaximumSize(QSize(30, 16777215));
        lblBlack->setFrameShape(QFrame::Box);
        lblBlack->setText(QString::fromUtf8("Black"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lblBlack);


        verticalLayout_3->addLayout(formLayout);

        dockWires->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWires);
        dockHeader = new QDockWidget(MainWindow);
        dockHeader->setObjectName(QString::fromUtf8("dockHeader"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout = new QGridLayout(dockWidgetContents_2);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 1, -1, -1);
        lbl5v_2 = new QLabel(dockWidgetContents_2);
        lbl5v_2->setObjectName(QString::fromUtf8("lbl5v_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl5v_2->sizePolicy().hasHeightForWidth());
        lbl5v_2->setSizePolicy(sizePolicy1);
        lbl5v_2->setFrameShape(QFrame::Box);
        lbl5v_2->setFrameShadow(QFrame::Plain);
        lbl5v_2->setText(QString::fromUtf8("+5V"));

        gridLayout->addWidget(lbl5v_2, 1, 0, 1, 1);

        lblADC_2 = new QLabel(dockWidgetContents_2);
        lblADC_2->setObjectName(QString::fromUtf8("lblADC_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblADC_2->sizePolicy().hasHeightForWidth());
        lblADC_2->setSizePolicy(sizePolicy2);
        lblADC_2->setFrameShape(QFrame::Box);
        lblADC_2->setFrameShadow(QFrame::Plain);
        lblADC_2->setText(QString::fromUtf8("ADC"));

        gridLayout->addWidget(lblADC_2, 1, 1, 1, 1);

        lblVPU_2 = new QLabel(dockWidgetContents_2);
        lblVPU_2->setObjectName(QString::fromUtf8("lblVPU_2"));
        sizePolicy1.setHeightForWidth(lblVPU_2->sizePolicy().hasHeightForWidth());
        lblVPU_2->setSizePolicy(sizePolicy1);
        lblVPU_2->setFrameShape(QFrame::Box);
        lblVPU_2->setFrameShadow(QFrame::Plain);
        lblVPU_2->setText(QString::fromUtf8("Vpu"));

        gridLayout->addWidget(lblVPU_2, 2, 0, 1, 1);

        lblAUX_2 = new QLabel(dockWidgetContents_2);
        lblAUX_2->setObjectName(QString::fromUtf8("lblAUX_2"));
        sizePolicy2.setHeightForWidth(lblAUX_2->sizePolicy().hasHeightForWidth());
        lblAUX_2->setSizePolicy(sizePolicy2);
        lblAUX_2->setFrameShape(QFrame::Box);
        lblAUX_2->setFrameShadow(QFrame::Plain);
        lblAUX_2->setText(QString::fromUtf8("AUX"));

        gridLayout->addWidget(lblAUX_2, 2, 1, 1, 1);

        lblCLK_2 = new QLabel(dockWidgetContents_2);
        lblCLK_2->setObjectName(QString::fromUtf8("lblCLK_2"));
        sizePolicy1.setHeightForWidth(lblCLK_2->sizePolicy().hasHeightForWidth());
        lblCLK_2->setSizePolicy(sizePolicy1);
        lblCLK_2->setFrameShape(QFrame::Box);
        lblCLK_2->setFrameShadow(QFrame::Plain);
        lblCLK_2->setText(QString::fromUtf8("CLK"));

        gridLayout->addWidget(lblCLK_2, 3, 0, 1, 1);

        lblMOSI_2 = new QLabel(dockWidgetContents_2);
        lblMOSI_2->setObjectName(QString::fromUtf8("lblMOSI_2"));
        sizePolicy2.setHeightForWidth(lblMOSI_2->sizePolicy().hasHeightForWidth());
        lblMOSI_2->setSizePolicy(sizePolicy2);
        lblMOSI_2->setFrameShape(QFrame::Box);
        lblMOSI_2->setFrameShadow(QFrame::Plain);
        lblMOSI_2->setText(QString::fromUtf8("MOSI"));

        gridLayout->addWidget(lblMOSI_2, 3, 1, 1, 1);

        lblCS_2 = new QLabel(dockWidgetContents_2);
        lblCS_2->setObjectName(QString::fromUtf8("lblCS_2"));
        sizePolicy1.setHeightForWidth(lblCS_2->sizePolicy().hasHeightForWidth());
        lblCS_2->setSizePolicy(sizePolicy1);
        lblCS_2->setFrameShape(QFrame::Box);
        lblCS_2->setFrameShadow(QFrame::Plain);
        lblCS_2->setText(QString::fromUtf8("CS"));

        gridLayout->addWidget(lblCS_2, 4, 0, 1, 1);

        lblMISO_2 = new QLabel(dockWidgetContents_2);
        lblMISO_2->setObjectName(QString::fromUtf8("lblMISO_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblMISO_2->sizePolicy().hasHeightForWidth());
        lblMISO_2->setSizePolicy(sizePolicy3);
        lblMISO_2->setFrameShape(QFrame::Box);
        lblMISO_2->setFrameShadow(QFrame::Plain);
        lblMISO_2->setText(QString::fromUtf8("MISO"));

        gridLayout->addWidget(lblMISO_2, 4, 1, 1, 1);

        lbl3v3_2 = new QLabel(dockWidgetContents_2);
        lbl3v3_2->setObjectName(QString::fromUtf8("lbl3v3_2"));
        sizePolicy2.setHeightForWidth(lbl3v3_2->sizePolicy().hasHeightForWidth());
        lbl3v3_2->setSizePolicy(sizePolicy2);
        lbl3v3_2->setFrameShape(QFrame::Box);
        lbl3v3_2->setFrameShadow(QFrame::Plain);
        lbl3v3_2->setText(QString::fromUtf8("+3V3"));

        gridLayout->addWidget(lbl3v3_2, 0, 1, 1, 1);

        lblGND_2 = new QLabel(dockWidgetContents_2);
        lblGND_2->setObjectName(QString::fromUtf8("lblGND_2"));
        sizePolicy1.setHeightForWidth(lblGND_2->sizePolicy().hasHeightForWidth());
        lblGND_2->setSizePolicy(sizePolicy1);
        lblGND_2->setFrameShape(QFrame::Box);
        lblGND_2->setFrameShadow(QFrame::Plain);
        lblGND_2->setText(QString::fromUtf8("GND"));

        gridLayout->addWidget(lblGND_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        dockHeader->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockHeader);
#ifndef QT_NO_SHORTCUT
        lblMode->setBuddy(radioHiZ);
        lblFormat->setBuddy(radioHex);
        label->setBuddy(txtSend);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCommand->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionConnect);
        menuFile->addAction(action_Disconnect);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuCommand->addAction(actionStatus_Info);
        menuCommand->addAction(actionSelf_Test);
        menuCommand->addAction(actionCommand_help);
        menuHelp->addAction(actionBus_Pirate_Manual);
        menuHelp->addAction(actionShow_wires);
        menuHelp->addAction(actionShow_header);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Qt);
        menuHelp->addAction(actionLicense);
        menuHelp->addAction(actionAbout);
        menuOptions->addAction(actionRetain_last_command);
        menuOptions->addAction(actionAuto_send_command);
        menuOptions->addAction(actionErase_buffer_on_new_command);
        menuOptions->addAction(actionClear_buffer);
        menuPlugins->addAction(actionVersions);
        menuPlugins->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionConnect, SIGNAL(triggered()), MainWindow, SLOT(Connect()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(sendText()));
        QObject::connect(radioHiZ, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radio1wire, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioUART, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioI2C, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioSPI, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioJTAG, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioRaw2Wire, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioRaw3Wire, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioPCKeyboard, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(radioLCD, SIGNAL(clicked()), MainWindow, SLOT(modeSelected()));
        QObject::connect(actionRetain_last_command, SIGNAL(toggled(bool)), MainWindow, SLOT(changeRetain(bool)));
        QObject::connect(txtSend, SIGNAL(commandSent(QString)), MainWindow, SLOT(sendText(QString)));
        QObject::connect(radioHex, SIGNAL(clicked()), MainWindow, SLOT(formatSelected()));
        QObject::connect(radioDec, SIGNAL(clicked()), MainWindow, SLOT(formatSelected()));
        QObject::connect(radioBin, SIGNAL(clicked()), MainWindow, SLOT(formatSelected()));
        QObject::connect(radioRaw, SIGNAL(clicked()), MainWindow, SLOT(formatSelected()));
        QObject::connect(btnClear, SIGNAL(clicked()), txtSend, SLOT(clear()));
        QObject::connect(action_Disconnect, SIGNAL(triggered()), MainWindow, SLOT(Disconnect()));
        QObject::connect(actionShow_wires, SIGNAL(triggered()), dockWires, SLOT(show()));
        QObject::connect(actionShow_header, SIGNAL(triggered()), dockHeader, SLOT(show()));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(comboColors, SIGNAL(currentIndexChanged(int)), MainWindow, SLOT(buildLegend(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PirateShip - Bus Pirate Frontend", 0, QApplication::UnicodeUTF8));
        actionStatus_Info->setText(QApplication::translate("MainWindow", "Status &Info", 0, QApplication::UnicodeUTF8));
        actionStatus_Info->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionSelf_Test->setText(QApplication::translate("MainWindow", "Self-&Test", 0, QApplication::UnicodeUTF8));
        actionSelf_Test->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("MainWindow", "&Connect", 0, QApplication::UnicodeUTF8));
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+C", 0, QApplication::UnicodeUTF8));
        action_Disconnect->setText(QApplication::translate("MainWindow", "&Disconnect", 0, QApplication::UnicodeUTF8));
        action_Disconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+D", 0, QApplication::UnicodeUTF8));
        actionBus_Pirate_Manual->setText(QApplication::translate("MainWindow", "&Bus Pirate Manual", 0, QApplication::UnicodeUTF8));
        actionBus_Pirate_Manual->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionWire_colors->setText(QApplication::translate("MainWindow", "Wire colors", 0, QApplication::UnicodeUTF8));
        actionWire_colors->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionRetain_last_command->setText(QApplication::translate("MainWindow", "&Retain last command", 0, QApplication::UnicodeUTF8));
        actionAuto_send_command->setText(QApplication::translate("MainWindow", "&Auto-send command", 0, QApplication::UnicodeUTF8));
        actionErase_buffer_on_new_command->setText(QApplication::translate("MainWindow", "&Erase buffer on new command", 0, QApplication::UnicodeUTF8));
        actionClear_buffer->setText(QApplication::translate("MainWindow", "&Clear buffer", 0, QApplication::UnicodeUTF8));
        actionClear_buffer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", 0, QApplication::UnicodeUTF8));
        actionCommand_help->setText(QApplication::translate("MainWindow", "Command &help", 0, QApplication::UnicodeUTF8));
        actionShow_wires->setText(QApplication::translate("MainWindow", "Show &wire colors", 0, QApplication::UnicodeUTF8));
        actionShow_wires->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionShow_header->setText(QApplication::translate("MainWindow", "Show &header", 0, QApplication::UnicodeUTF8));
        actionShow_header->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        actionVersions->setText(QApplication::translate("MainWindow", "&Versions", 0, QApplication::UnicodeUTF8));
        actionLicense->setText(QApplication::translate("MainWindow", "License", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("MainWindow", "Co&nnect", 0, QApplication::UnicodeUTF8));
        lblMode->setText(QApplication::translate("MainWindow", "&Mode:", 0, QApplication::UnicodeUTF8));
        radioHiZ->setText(QApplication::translate("MainWindow", "HiZ", 0, QApplication::UnicodeUTF8));
        radio1wire->setText(QApplication::translate("MainWindow", "1-Wire", 0, QApplication::UnicodeUTF8));
        radioUART->setText(QApplication::translate("MainWindow", "UART", 0, QApplication::UnicodeUTF8));
        radioI2C->setText(QApplication::translate("MainWindow", "I2C", 0, QApplication::UnicodeUTF8));
        radioSPI->setText(QApplication::translate("MainWindow", "SPI", 0, QApplication::UnicodeUTF8));
        radioJTAG->setText(QApplication::translate("MainWindow", "JTAG", 0, QApplication::UnicodeUTF8));
        radioRaw2Wire->setText(QApplication::translate("MainWindow", "Raw 2-Wire", 0, QApplication::UnicodeUTF8));
        radioRaw3Wire->setText(QApplication::translate("MainWindow", "Raw 3-Wire", 0, QApplication::UnicodeUTF8));
        radioPCKeyboard->setText(QApplication::translate("MainWindow", "PC Keyboard", 0, QApplication::UnicodeUTF8));
        radioLCD->setText(QApplication::translate("MainWindow", "LCD", 0, QApplication::UnicodeUTF8));
        lblFormat->setText(QApplication::translate("MainWindow", "Data &format:", 0, QApplication::UnicodeUTF8));
        radioHex->setText(QApplication::translate("MainWindow", "Hex", 0, QApplication::UnicodeUTF8));
        radioDec->setText(QApplication::translate("MainWindow", "Decimal", 0, QApplication::UnicodeUTF8));
        radioBin->setText(QApplication::translate("MainWindow", "Binary", 0, QApplication::UnicodeUTF8));
        radioRaw->setText(QApplication::translate("MainWindow", "Raw", 0, QApplication::UnicodeUTF8));
        btnVoltages->setText(QApplication::translate("MainWindow", "Check &Voltages", 0, QApplication::UnicodeUTF8));
        btnPowerSupply->setText(QApplication::translate("MainWindow", "Power &Supply OFF", 0, QApplication::UnicodeUTF8));
        btnPullup->setText(QApplication::translate("MainWindow", "&Pullup resistors OFF", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "&Command:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "&Send", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuCommand->setTitle(QApplication::translate("MainWindow", "Co&mmand", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        menuPlugins->setTitle(QApplication::translate("MainWindow", "Plu&gins", 0, QApplication::UnicodeUTF8));
        dockWires->setWindowTitle(QApplication::translate("MainWindow", "Wires", 0, QApplication::UnicodeUTF8));
        comboColors->clear();
        comboColors->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "V3 Common", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "V3 Inverted", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "V2 Common", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "V2 Inverted", 0, QApplication::UnicodeUTF8)
        );
        dockHeader->setWindowTitle(QApplication::translate("MainWindow", "Header (Right)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
