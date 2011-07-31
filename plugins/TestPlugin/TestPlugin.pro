
TARGET = testplugin
TEMPLATE = lib
CONFIG += plugin
DEFINES += TESTPLUGIN_LIBRARY
SOURCES += testplugin.cpp
HEADERS += testplugin.h \
    TestPlugin_global.h \
    ../../pirateplugin.h
INCLUDEPATH += ../..
DESTDIR = ../
