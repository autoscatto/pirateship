/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#ifndef COMMANDLINE_H
#define COMMANDLINE_H

#include <QLineEdit>
#include <QEvent>
#include <QKeyEvent>
#include <QDebug>

class CommandLine : public QLineEdit
{
    Q_OBJECT
    Q_PROPERTY(bool retainCommand READ retainCommand WRITE setRetainCommand)
    Q_PROPERTY(unsigned int history READ history WRITE setHistory)
public:
    CommandLine(QWidget* parent=NULL);
    bool retainCommand() const;
    void setRetainCommand(bool retainCommand);
    unsigned int history();
    void setHistory(unsigned int value);

signals:
    void commandSent(QString);

protected:
    void keyPressEvent(QKeyEvent *e);

private:
    QStringList list;
    int listIndex;
    void displayIndex();
    bool propRetainCommand;
    unsigned int propHistory;

public slots:
    void addCommand();
};

#endif // COMMANDLINE_H
