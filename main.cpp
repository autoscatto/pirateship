/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include <QtGui/QApplication>
#include <QTranslator>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QT_REQUIRE_VERSION(argc, argv, "4.6")

    QApplication a(argc, argv);
    a.setApplicationName("PirateShip");
    a.setApplicationVersion("1.1");
    a.setOrganizationName("Ronan Paixao");
    a.setOrganizationDomain("ronan.dapaixao.com.br");

    QString locale = QLocale::system().name();

    QTranslator translator;
    translator.load(QString(":tr/pirateship_") + locale);
    a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}
