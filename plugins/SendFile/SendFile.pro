
TARGET = sendfile
TEMPLATE = lib
CONFIG += plugin
DEFINES += SENDFILE_LIBRARY
SOURCES += sendfile.cpp \
    controldialog.cpp
HEADERS += sendfile.h \
    sendfile_global.h \
    ../../pirateplugin.h \
    controldialog.h
INCLUDEPATH += ../..
DESTDIR = ../
FORMS += controldialog.ui
