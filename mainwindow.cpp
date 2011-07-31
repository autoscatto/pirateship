/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    checkVoltage(false)
{
    // Configure timers
    commandTimer = new QTimer(this);
    commandTimer->setObjectName("commandTimer");

    serialTimer = new QTimer(this);
    serialTimer->setSingleShot(true);
    serialTimer->setInterval(1000);
    serialTimer->setObjectName("serialTimer");

    // Initialize UI
    ui->setupUi(this);
    buildLegend();
    outAppend("");

    // Initialize serial port
    port = NULL;
    lblSerial = new QLabel();
    statusBar()->addPermanentWidget(lblSerial);

    // Sort QRadioButtons
    groupMode = new QButtonGroup(this);
    groupMode->addButton(ui->radioHiZ,1);
    groupMode->addButton(ui->radio1wire,2);
    groupMode->addButton(ui->radioUART,3);
    groupMode->addButton(ui->radioI2C,4);
    groupMode->addButton(ui->radioSPI,5);
    groupMode->addButton(ui->radioJTAG,6);
    groupMode->addButton(ui->radioRaw2Wire,7);
    groupMode->addButton(ui->radioRaw3Wire,8);
    groupMode->addButton(ui->radioPCKeyboard,9);
    groupMode->addButton(ui->radioLCD,10);

    groupFormat = new QButtonGroup(this);
    groupFormat->addButton(ui->radioHex,1);
    groupFormat->addButton(ui->radioDec,2);
    groupFormat->addButton(ui->radioBin,3);
    groupFormat->addButton(ui->radioRaw,4);

    // Configure serial state machine
    machine = new QStateMachine(this);

    serialStateReady = new QState();
    serialStateReady->setObjectName(tr("Serial ready"));
    serialStateSending = new QState();
    serialStateSending->setObjectName(tr("Serial sending"));
    serialStateWaiting = new QState();
    serialStateWaiting->setObjectName(tr("Serial waiting"));

    serialStateReady->addTransition(this,SIGNAL(serialSend()),serialStateSending);
    serialStateSending->addTransition(this, SIGNAL(serialWait()), serialStateWaiting);
    serialStateWaiting->addTransition(this, SIGNAL(serialReady()), serialStateReady);
    serialStateWaiting->addTransition(this, SIGNAL(serialSendMore()), serialStateSending);

    connect(serialStateReady, SIGNAL(entered()), SLOT(showStatus()));
    connect(serialStateSending, SIGNAL(entered()), SLOT(showStatus()));
    connect(serialStateWaiting, SIGNAL(entered()), SLOT(showStatus()));
    connect(serialStateSending, SIGNAL(entered()),SLOT(serialSendQueue()));
    connect(serialStateReady, SIGNAL(entered()), SLOT(findVoltage()));
    connect(serialStateWaiting, SIGNAL(entered()), serialTimer, SLOT(start()));
    connect(serialStateReady, SIGNAL(entered()), serialTimer, SLOT(stop()));

    machine->addState(serialStateReady);
    machine->addState(serialStateSending);
    machine->addState(serialStateWaiting);

    machine->setInitialState(serialStateReady);
    machine->start();

    // Load Plugins;
    loadPlugins();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

int MainWindow::Connect()
{
    ConnectDialog* conn = new ConnectDialog(this);
    int retval = conn->exec();
    if (retval) {
#ifdef Q_OS_WIN
        emit Connect(conn->port(), conn->baudrate());
#elif defined(Q_OS_UNIX)
        emit Connect(conn->port().prepend("/dev/"), conn->baudrate());
#endif
    }
    return retval;
}

void MainWindow::Connect(QString portname, int baudrate)
{
    Disconnect();
    this->port = new QextSerialPort(portname, QextSerialPort::EventDriven);
    port->setBaudRate((BaudRateType)baudrate);
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setDataBits(DATA_8);
    port->setStopBits(STOP_2);

    if (port->open(QIODevice::ReadWrite) == true) {
        connect(port, SIGNAL(readyRead()), this, SLOT(onDataAvailable()));
//        connect(port, SIGNAL(dsrChanged(bool)), this, SLOT(onDsrChanged(bool)));
        ui->btnConnect->setChecked(true);
//        if (!(port->lineStatus() & LS_DSR))
//            qDebug() << "warning: device is not turned on";
        qDebug() << "listening for data on" << port->portName();
    }
    else {
        qDebug() << tr("Failed to open device. Error: %1").arg(port->errorString());
        QMessageBox::critical(this,tr("Error"),tr("Failed to open device. Error: %1").arg(port->errorString()));
        delete port;
        port = NULL;
    }
}

void MainWindow::Disconnect()
{
    ui->btnConnect->setChecked(false);
    if (port) {
        port->close();
        port = NULL;
        qDebug() << tr("Disconnected");
        emit serialReady();
    }
}

void MainWindow::onDataAvailable() {
//    qDebug() << "Data Available";
    int avail = port->bytesAvailable();
    if( avail > 0 ) {
        QByteArray data;
        data.resize(avail);
        int read = port->read(data.data(), data.size());
        if( read > 0 ) {
            processNewData(data);
        }
    }
}

void MainWindow::processNewData(QByteArray data)
{
//    qDebug() << "processNewData" << data.endsWith("\r\n");
    outAppend(QString(data));
    if (data.endsWith('>') || data.endsWith("rt\r\n") || data.endsWith("ts.\r\n")) {
        emit dataReady();
//        qDebug() << "Prompt";
        if (queue.isEmpty())
            emit serialReady();
        else
            emit serialSendMore();
    }
//    qDebug() << "processNewData:" << data;
}

void MainWindow::sendText(QString str)
{
    qDebug() << "MainWindow::sendText: " << str.toLatin1();
    if (str.isNull()) {
        ui->txtSend->addCommand();
        return;
    }
    if (ui->actionErase_buffer_on_new_command->isChecked())
        ui->txtOutput->clear();

    if (port) {
        QByteArray data;
        data = str.toLatin1();
        data.append('\r');
        qDebug() << "sendText" << ui->txtSend->text() << data;
        queue << data;
        emit serialSend();
    }
    else {
        outAppend(tr("\nConnect to a device first.\n"));
        ui->radioHiZ->setChecked(true);
    }
}

void MainWindow::on_btnConnect_clicked(bool checked)
{
    qDebug() << "Connect" << checked;
    if (checked) {
        Connect();
        if (port==NULL) ui->btnConnect->setChecked(false);
    }
    else
        Disconnect();
}

void MainWindow::on_btnConnect_toggled(bool checked)
{
    if (checked)
        ui->btnConnect->setText(tr("Disco&nnect"));
    else
        ui->btnConnect->setText(tr("Co&nnect"));
}

void MainWindow::on_actionAbout_triggered()
{
    QString aboutText(tr("<p><b>%1</b></p>"
                         "<a href='http://ronan.dapaixao.com.br/artigo/PirateShip'>"
                         "http://ronan.dapaixao.com.br/artigo/PirateShip</a></p>"
                         "<p>Copyright 2010 Ronan Paixão</p>"
                         "<p>Licensed under the terms of the Ronan License</p>"
                         "<p>The program is provided AS IS with NO WARRANTY OF ANY KIND, "
                         "INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND "
                         "FITNESS FOR A PARTICULAR PURPOSE.</p>"
                         ));
    QString name(ui->centralWidget->parentWidget()->windowTitle());
//    QMessageBox::about(this, tr("About %1").arg(name),name+"\n\n"+aboutText);
    QMessageBox::about(this, tr("About %1").arg(name),aboutText.arg(name));
}

void MainWindow::on_actionLicense_triggered()
{
    LicenseDialog licdiag(this);
    licdiag.exec();
}

void MainWindow::modeSelected(int id)
{
    if (!port) {
        outAppend(tr("\nConnect to a device first.\n"));
        ui->radioHiZ->setChecked(true);
        return;
    }
    if (id==-1) {
        qDebug() << "Mode checked: " << groupMode->checkedId() << groupMode->checkedButton()->text();
        id = groupMode->checkedId();
    }
    else {
        if (id != groupMode->checkedId()) {
            QAbstractButton* b = groupMode->button(id);
            if (b) b->setChecked(true);
        }
    }
    ui->btnPowerSupply->setChecked(false);
    ui->btnPowerSupply->setText(tr("Power &Supply OFF"));
    switch(id) {
    case 2: // 1-wire
        ui->lblMOSI->setText("OWD");
        ui->lblCLK->setText("");
        ui->lblMISO->setText("");
        ui->lblCS->setText("");
        sendText("m\r2");
        break;
    case 3: { // UART
        UARTDialog uart(this);
        int retval = uart.exec();
        if (retval && port) {
            qDebug() << "UART" << uart.getOptions();
            QList<int> options(uart.getOptions());
            sendText(QString("m\r3"));
            sendText(QString::number(options[0]));
            sendText(QString::number(options[1]));
            sendText(QString::number(options[2]));
            sendText(QString::number(options[3]));
            sendText(QString::number(options[4]));
            ui->lblMOSI->setText("Tx");
            ui->lblCLK->setText("");
            ui->lblMISO->setText("Rx");
            ui->lblCS->setText("");
        }
        else {
            qDebug() << tr("UART cancelled");
            ui->radioHiZ->setChecked(true);
            modeSelected(-1);
            return;
        }
        break; }
    case 4: { //I2C
        QStringList items;
        items << "~50KHz" << "~100KHz" << "~400KHz";

        bool ok;
        QString item = QInputDialog::getItem(this, tr("Select I2C Speed"),
                                             tr("Speed:"), items, 0, false, &ok);
        if (ok && (items.indexOf(item)>=0)) {
            sendText(QString("m\r4"));
            sendText(QString::number(items.indexOf(item)+1));
            ui->lblMOSI->setText("SDA");
            ui->lblCLK->setText("SCL");
            ui->lblMISO->setText("");
            ui->lblCS->setText("");
        }
        else {
            qDebug() << tr("I2C cancelled");
            ui->radioHiZ->setChecked(true);
            modeSelected(-1);
            return;
        }
        }
        break;
    case 5: { // SPI
            SPIDialog spi(this);
            int retval = spi.exec();
            if (retval) {
                qDebug() << "SPI" << spi.getOptions();
                QList<int> options(spi.getOptions());
                sendText(QString("m\r5"));
                sendText(QString::number(options[0]));
                sendText(QString::number(options[1]));
                sendText(QString::number(options[2]));
                sendText(QString::number(options[3]));
                sendText(QString::number(options[4]));
                ui->lblMOSI->setText("MOSI");
                ui->lblCLK->setText("CLK");
                ui->lblMISO->setText("MISO");
                ui->lblCS->setText("CS");
            }
            else {
                qDebug() << tr("SPI cancelled");
                ui->radioHiZ->setChecked(true);
                modeSelected(-1);
                return;
            }
        }
        break;
    case 6: { //JTAG
        QStringList items;
        items << tr("Open drain (H=Hi-Z, L=GND)") << tr("Normal (H=3.3V, L=GND)");

        bool ok;
        QString item = QInputDialog::getItem(this, tr("Select JTAG output type"),
                                             tr("Output type:"), items, 0, false, &ok);
        if (ok && (items.indexOf(item)>=0)) {
            sendText(QString("m\r6"));
            sendText(QString::number(items.indexOf(item)+1));
            ui->lblMOSI->setText("TDI");
            ui->lblCLK->setText("TCK");
            ui->lblMISO->setText("TDO");
            ui->lblCS->setText("TMS");
        }
        else {
            qDebug() << tr("JTAG cancelled");
            ui->radioHiZ->setChecked(true);
            modeSelected(-1);
            return;
        }
        }
        break;
    case 7: // Raw 2-wire
    case 8: // Raw 3-wire
        {
            RawDialog raw(this);
            int retval = raw.exec();
            if (retval) {
                qDebug() << "Raw" << raw.getOptions();
                QList<int> options(raw.getOptions());
                sendText(QString("m"));
                sendText(QString::number(id));
                sendText(QString::number(options[0]));
                sendText(QString::number(options[1]));
            }
            else {
                qDebug() << tr("Raw cancelled");
                ui->radioHiZ->setChecked(true);
                modeSelected(-1);
                return;
            }
        }
    default: // others
        ui->lblMOSI->setText("MOSI");
        ui->lblCLK->setText("CLK");
        ui->lblMISO->setText("MISO");
        ui->lblCS->setText("CS");
        if (id>0 && id != 7 && id!=8) {
            sendText(QString("m\r%1").arg(id));
        }
        if (id==10)
            sendText("1");
        break;
    }
}

void MainWindow::changeRetain(bool retain)
{
    ui->txtSend->setRetainCommand(retain);
}

void MainWindow::on_actionAuto_send_command_toggled(bool checked)
{
    if (checked) {
        bool ok;
        int interval = QInputDialog::getInt(this, tr("Sending interval"),
                                     tr("Interval (ms):"), 1000, 100, 50000, 100, &ok);
        if (ok) {
            ui->actionRetain_last_command->setChecked(true);
            commandTimer->start(interval);
        }
    }
    else
        commandTimer->stop();
}

void MainWindow::on_actionClear_buffer_triggered()
{
    ui->txtOutput->clear();
}

void MainWindow::on_commandTimer_timeout()
{
    sendText();
}

void MainWindow::on_serialTimer_timeout()
{
    qDebug() << "serial timeout";
    if (queue.isEmpty())
        emit serialReady();
    else
        emit serialSendMore();
}

void MainWindow::buildLegend(int index)
{
    QPixmap pixmap(30,15);
    if (index==1 || index==3) { // V3 Inverted or V2 Inverted
        pixmap.fill(Qt::black);
        ui->lblBrown->setPixmap(pixmap);
        pixmap.fill(Qt::white);
        ui->lblRed->setPixmap(pixmap);
        pixmap.fill(Qt::gray);
        ui->lblOrange->setPixmap(pixmap);
        pixmap.fill(QColor(163,73,164));
        ui->lblYellow->setPixmap(pixmap);
        pixmap.fill(Qt::blue);
        ui->lblGreen->setPixmap(pixmap);
        pixmap.fill(Qt::green);
        ui->lblBlue->setPixmap(pixmap);
        pixmap.fill(Qt::yellow);
        ui->lblPurple->setPixmap(pixmap);
        pixmap.fill(QColor(255,128,0));
        ui->lblGray->setPixmap(pixmap);
        pixmap.fill(Qt::red);
        ui->lblWhite->setPixmap(pixmap);
        pixmap.fill(QColor(128,64,0));
        ui->lblBlack->setPixmap(pixmap);
    }
    else { // V3 Common or V2 Common
        pixmap.fill(Qt::black);
        ui->lblBlack->setPixmap(pixmap);
        pixmap.fill(Qt::white);
        ui->lblWhite->setPixmap(pixmap);
        pixmap.fill(Qt::gray);
        ui->lblGray->setPixmap(pixmap);
        pixmap.fill(QColor(163,73,164));
        ui->lblPurple->setPixmap(pixmap);
        pixmap.fill(Qt::blue);
        ui->lblBlue->setPixmap(pixmap);
        pixmap.fill(Qt::green);
        ui->lblGreen->setPixmap(pixmap);
        pixmap.fill(Qt::yellow);
        ui->lblYellow->setPixmap(pixmap);
        pixmap.fill(QColor(255,128,0));
        ui->lblOrange->setPixmap(pixmap);
        pixmap.fill(Qt::red);
        ui->lblRed->setPixmap(pixmap);
        pixmap.fill(QColor(128,64,0));
        ui->lblBrown->setPixmap(pixmap);
    }
    if (index==0 || index==1) { // V3 Common or V3 Inverted
        ui->lbl3v3->setText(tr("+3V3"));
        ui->lbl3v3_2->setText(tr("+3V3"));
        ui->lblADC->setText(tr("ADC"));
        ui->lblADC_2->setText(tr("ADC"));
        ui->lbl5v->setText(tr("+5V"));
        ui->lbl5v_2->setText(tr("+5V"));
        ui->lblVPU->setText(tr("Vpu"));
        ui->lblVPU_2->setText(tr("Vpu"));
    }
    else { // V2 common or V2 Inverted
        ui->lbl3v3->setText(tr("ADC"));
        ui->lbl3v3_2->setText(tr("ADC"));
        ui->lblADC->setText(tr("+3V3"));
        ui->lblADC_2->setText(tr("+3V3"));
        ui->lbl5v->setText(tr("Vpu"));
        ui->lbl5v_2->setText(tr("Vpu"));
        ui->lblVPU->setText(tr("+5V"));
        ui->lblVPU_2->setText(tr("+5V"));
    }
}

void MainWindow::on_actionStatus_Info_triggered()
{
    sendText("I");
}

void MainWindow::formatSelected(int id)
{
    if (id==-1) {
        qDebug() << "Format checked: " << groupFormat->checkedId() << groupFormat->checkedButton()->text();
        id = groupFormat->checkedId();
    }
    if (id>0) {
        sendText(QString("O\r%1").arg(id));
    }
}

void MainWindow::on_btnPowerSupply_toggled(bool checked)
{
    if (checked) {
        if (groupMode->checkedId()!=1) {
            ui->btnPowerSupply->setText(tr("Power &Supply ON"));
            sendText("W");
        }
        else {
            ui->btnPowerSupply->setChecked(false);
            outAppend(tr("\nA mode must be set for power supply operation\n"));
        }
    }
    else {
        ui->btnPowerSupply->setText(tr("Power &Supply OFF"));
        if (groupMode->checkedId()!=1) {
            sendText("w");
        }
    }
}

void MainWindow::serialSendQueue()
{
    if (!queue.isEmpty()) {
        QByteArray data(queue.takeFirst());
        port->write(data);
        emit serialWait();
    }
    else
        emit serialReady();
}

void MainWindow::on_btnPullup_toggled(bool checked)
{
    if (checked) {
        if (groupMode->checkedId()!=1) {
            ui->btnPullup->setText(tr("&Pullup resistors ON"));
            sendText("P\r2");
        }
        else {
            ui->btnPullup->setChecked(false);
            outAppend(tr("\nPullup activation not available in this mode\n"));
        }
    }
    else {
        if (groupMode->checkedId()!=1) {
            ui->btnPullup->setText(tr("&Pullup resistors OFF"));
            sendText("P\r1");
        }
    }
}

void MainWindow::on_btnVoltages_clicked()
{
    checkVoltage = true;
    sendText("V");
    if (!port) return;
}

void MainWindow::findVoltage()
{
    qDebug() << "findVoltage" << checkVoltage;
    if (checkVoltage) {
        checkVoltage = false;
        ui->txtOutput->moveCursor(QTextCursor::End);
        if (ui->txtOutput->find("Voltage",QTextDocument::FindBackward)) {
            qDebug() << "Select" << ui->txtOutput->textCursor().atEnd();
            QTextCursor cursor = ui->txtOutput->textCursor();
            cursor.select(QTextCursor::LineUnderCursor);
            QStringList valuestr = cursor.selectedText().split(" |");
            if (valuestr.count()<3) return;
            qDebug() << "Values" << valuestr << valuestr[0].split(": ")[2]
                    << valuestr[1].split(": ")[1] << valuestr[2].split(": ")[1];
            ui->label5V->setText(valuestr[0].split(": ")[2]);
            ui->label3V3->setText(valuestr[1].split(": ")[1]);
            ui->labelVPullup->setText(valuestr[2].split(": ")[1]);
        }
    }
}

void MainWindow::outAppend(QString text)
{
    ui->txtOutput->moveCursor(QTextCursor::End);
    ui->txtOutput->textCursor().insertText(text);
    ui->txtOutput->moveCursor(QTextCursor::End);
}

void MainWindow::on_actionCommand_help_triggered()
{
    sendText("?");
}

void MainWindow::on_actionSelf_Test_triggered()
{
    sendText("~");
    if (port) {
        ui->dockHeader->show();
        ui->lbl5v_2->setStyleSheet("background-color:rgb(85, 255, 0)");
        ui->lblVPU_2->setStyleSheet("background-color:rgb(85, 255, 0)");
        ui->lbl3v3_2->setStyleSheet("background-color: rgb(85, 170, 0);");
        ui->lblADC_2->setStyleSheet("background-color: rgb(85, 170, 0);");
        QMessageBox::information(this,tr("Self-test"),tr("Beginning self-test\nDisconnect any devices\nConnect (Vpu to +5V) and (ADC to +3.3V) like shown in the header dock\nPress OK when ready"));
        sendText("");
        sendText("");
        ui->lbl5v_2->setStyleSheet("");
        ui->lblVPU_2->setStyleSheet("");
        ui->lbl3v3_2->setStyleSheet("");
        ui->lblADC_2->setStyleSheet("");
    }
}

void MainWindow::showStatus()
{
    foreach(QAbstractState* state, machine->configuration()) {
        lblSerial->setText(state->objectName());
    }
}

void MainWindow::on_actionBus_Pirate_Manual_triggered()
{
    QDesktopServices::openUrl(QUrl("http://dangerousprototypes.com/bus-pirate-manual/"));
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

bool MainWindow::loadPlugins()
{
    QDir pluginsDir(qApp->applicationDirPath());
#if defined(Q_OS_WIN)
    if (pluginsDir.dirName().toLower() == "debug" || pluginsDir.dirName().toLower() == "release")
        pluginsDir.cdUp();
#elif defined(Q_OS_MAC)
    if (pluginsDir.dirName() == "MacOS") {
        pluginsDir.cdUp();
        pluginsDir.cdUp();
        pluginsDir.cdUp();
    }
#endif
    pluginsDir.cd("plugins");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        qDebug() << "LoadPlugins: testing " << pluginsDir.absoluteFilePath(fileName);
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        qDebug() << "plugin file found:" << fileName << plugin;
        if (plugin) {
            PiratePlugin* new_plugin;
            new_plugin = qobject_cast<PiratePlugin *>(plugin);
            if (new_plugin) {
                plugins.append(new_plugin);
                QAction* plugin_action = new QAction(new_plugin->name(),this);
                plugin_action->setCheckable(true);
                ui->menuPlugins->addAction(plugin_action);
                new_plugin->setBuffer(ui->txtOutput);
                connect(plugin_action, SIGNAL(toggled(bool)), new_plugin, SLOT(toggled(bool)));
                connect(this, SIGNAL(dataReady()), new_plugin, SLOT(dataReady()));
                connect(new_plugin, SIGNAL(sendText(QString)), this, SLOT(sendText(QString)));
                connect(new_plugin, SIGNAL(setFormat(int)), this, SLOT(formatSelected(int)));
                connect(new_plugin, SIGNAL(setMode(int)), this, SLOT(modeSelected(int)));
                connect(new_plugin, SIGNAL(setSupply(bool)), ui->btnPowerSupply, SLOT(setChecked(bool)));
                connect(new_plugin, SIGNAL(setPullup(bool)), ui->btnPullup, SLOT(setChecked(bool)));
                qDebug() << "Plugin loaded: " << new_plugin->name();
//                return true;
            }
            else
                delete new_plugin;
        }
    }

    return false;
}

void MainWindow::on_actionVersions_triggered()
{
    QListWidget *listWidget = new QListWidget();
    foreach(PiratePlugin* plugin, plugins) {
        new QListWidgetItem(plugin->name()+ tr(" -- Version: ") + plugin->version()+QString(" -- API: ") + QString::number(plugin->api()),listWidget);
    }
    listWidget->show();
}
