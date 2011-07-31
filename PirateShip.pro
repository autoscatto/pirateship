#    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.
#
#    This file is part of PirateShip. See license.txt for
#	licensing details.



TARGET = PirateShip
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    connectdialog.cpp \
    commandline.cpp \
    uartdialog.cpp \
    spidialog.cpp \
    rawdialog.cpp \
    licensedialog.cpp
HEADERS += mainwindow.h \
    connectdialog.h \
    commandline.h \
    uartdialog.h \
    spidialog.h \
    rawdialog.h \
    pirateplugin.h \
    licensedialog.h
FORMS += mainwindow.ui \
    connectdialog.ui \
    uartdialog.ui \
    spidialog.ui \
    rawdialog.ui \
    licensedialog.ui
#CONFIG += static
INCLUDEPATH += ./QExtSerialPort/src

CONFIG(debug, debug|release): QMAKE_LIBDIR += ./debug/src/build
else: QMAKE_LIBDIR += ./release/src/build

CONFIG(debug, debug|release):LIBS += -lqextserialportd
else:LIBS += -lqextserialport

RESOURCES += pirateshiprc.qrc
TRANSLATIONS = pirateship_pt_BR.ts
win32:RC_FILE = pirateship.rc
SUBDIRS = QExtSerialPort\src \
    plugins\TestPlugin
