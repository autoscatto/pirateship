
TARGET = hmc5843
TEMPLATE = lib
CONFIG += plugin
DEFINES += HMC5843_LIBRARY
SOURCES += hmc5843.cpp \
    controldialog.cpp
HEADERS += hmc5843.h \
    hmc5843_global.h \
    ../../pirateplugin.h \
    controldialog.h
INCLUDEPATH += ../..
DESTDIR = ../
FORMS += controldialog.ui
