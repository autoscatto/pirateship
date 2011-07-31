/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Apr 24 15:17:54 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      26,   11,   11,   11, 0x05,
      39,   11,   11,   11, 0x05,
      56,   11,   11,   11, 0x05,
      69,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   11,   11,   11, 0x08,
     111,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     245,   11,   11,   11, 0x08,
     278,  270,   11,   11, 0x08,
     305,  270,   11,   11, 0x08,
     337,   11,   11,   11, 0x08,
     370,   11,   11,   11, 0x08,
     404,   11,   11,   11, 0x08,
     445,   11,   11,   11, 0x08,
     472,  270,   11,   11, 0x08,
     500,  270,   11,   11, 0x08,
     532,   11,  528,   11, 0x08,
     542,   11,   11,   11, 0x08,
     555,   11,   11,   11, 0x08,
     578,  573,   11,   11, 0x08,
     609,  605,   11,   11, 0x08,
     627,   11,   11,   11, 0x28,
     641,  638,   11,   11, 0x08,
     659,   11,   11,   11, 0x28,
     681,  674,   11,   11, 0x08,
     700,   11,   11,   11, 0x08,
     726,   11,   11,   11, 0x08,
     751,  638,   11,   11, 0x08,
     771,   11,   11,   11, 0x28,
     788,   11,   11,   11, 0x08,
     806,   11,   11,   11, 0x08,
     820,   11,   11,   11, 0x08,
     838,  833,   11,   11, 0x08,
     859,   11,   11,   11, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0serialReady()\0serialSend()\0"
    "serialSendMore()\0serialWait()\0dataReady()\0"
    "on_actionVersions_triggered()\0"
    "on_actionAbout_Qt_triggered()\0"
    "on_actionBus_Pirate_Manual_triggered()\0"
    "on_actionSelf_Test_triggered()\0"
    "on_actionCommand_help_triggered()\0"
    "on_btnVoltages_clicked()\0checked\0"
    "on_btnPullup_toggled(bool)\0"
    "on_btnPowerSupply_toggled(bool)\0"
    "on_actionStatus_Info_triggered()\0"
    "on_actionClear_buffer_triggered()\0"
    "on_actionAuto_send_command_toggled(bool)\0"
    "on_actionAbout_triggered()\0"
    "on_btnConnect_toggled(bool)\0"
    "on_btnConnect_clicked(bool)\0int\0"
    "Connect()\0Disconnect()\0onDataAvailable()\0"
    "data\0processNewData(QByteArray)\0str\0"
    "sendText(QString)\0sendText()\0id\0"
    "modeSelected(int)\0modeSelected()\0"
    "retain\0changeRetain(bool)\0"
    "on_commandTimer_timeout()\0"
    "on_serialTimer_timeout()\0formatSelected(int)\0"
    "formatSelected()\0serialSendQueue()\0"
    "findVoltage()\0showStatus()\0text\0"
    "buildLegend(QString)\0buildLegend()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: serialReady(); break;
        case 1: serialSend(); break;
        case 2: serialSendMore(); break;
        case 3: serialWait(); break;
        case 4: dataReady(); break;
        case 5: on_actionVersions_triggered(); break;
        case 6: on_actionAbout_Qt_triggered(); break;
        case 7: on_actionBus_Pirate_Manual_triggered(); break;
        case 8: on_actionSelf_Test_triggered(); break;
        case 9: on_actionCommand_help_triggered(); break;
        case 10: on_btnVoltages_clicked(); break;
        case 11: on_btnPullup_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: on_btnPowerSupply_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: on_actionStatus_Info_triggered(); break;
        case 14: on_actionClear_buffer_triggered(); break;
        case 15: on_actionAuto_send_command_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: on_actionAbout_triggered(); break;
        case 17: on_btnConnect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: on_btnConnect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: { int _r = Connect();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: Disconnect(); break;
        case 21: onDataAvailable(); break;
        case 22: processNewData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 23: sendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: sendText(); break;
        case 25: modeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: modeSelected(); break;
        case 27: changeRetain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: on_commandTimer_timeout(); break;
        case 29: on_serialTimer_timeout(); break;
        case 30: formatSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: formatSelected(); break;
        case 32: serialSendQueue(); break;
        case 33: findVoltage(); break;
        case 34: showStatus(); break;
        case 35: buildLegend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: buildLegend(); break;
        default: ;
        }
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::serialReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainWindow::serialSend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainWindow::serialSendMore()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainWindow::serialWait()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MainWindow::dataReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
