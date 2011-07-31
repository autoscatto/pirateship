/*
    PirateShip - Copyright (C) 2010-2011 Ronan Alves da Paixão.

    This file is part of PirateShip. See license.txt for
        licensing details.

*/

#include "commandline.h"

CommandLine::CommandLine(QWidget* parent):
        QLineEdit(parent),
        listIndex(0),
        propRetainCommand(false),
        propHistory(200)
{
    connect(this, SIGNAL(returnPressed()), SLOT(addCommand()));
}

void CommandLine::addCommand()
{
    if (!text().isEmpty()) {
        if (list.isEmpty() || list.last()!=text())
            list.append(text());
        listIndex = list.count()-1;
    }
    emit commandSent(text());
    if (!propRetainCommand)
        clear();
}

void CommandLine::keyPressEvent(QKeyEvent *e)
{
    QLineEdit::keyPressEvent(e);
    switch (e->key()) {
    case Qt::Key_Up:
        if (listIndex>0) {
            listIndex--;
        }
        displayIndex();
        break;
    case Qt::Key_Down:
        if (listIndex<list.count()-1) {
            listIndex++;
        }
        displayIndex();
        break;
    default:
        break;
    }
    qDebug() << "CommandLine change" << listIndex << list.count();
}

void CommandLine::displayIndex()
{
    if (listIndex<list.count())
        setText(list.at(listIndex));
}

bool CommandLine::retainCommand() const
{
    return propRetainCommand;
}

void CommandLine::setRetainCommand(bool retainCommand)
{
    propRetainCommand = retainCommand;
}

unsigned int CommandLine::history()
{
    return propHistory;
}

void CommandLine::setHistory(unsigned int value)
{
    propHistory = value;
}
