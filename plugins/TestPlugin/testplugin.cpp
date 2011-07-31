#include "testplugin.h"


TestPlugin::TestPlugin()
{
    qDebug() << "TestPlugin loaded";
}

TestPlugin::~TestPlugin()
{
    qDebug() << "TestPlugin unloaded";
}

void TestPlugin::toggled(const bool checked)
{
    qDebug() << "TestPlugin::toggled >> checked:" << checked;
}


void TestPlugin::setBuffer(QPlainTextEdit* buffer) {}
void TestPlugin::dataReady() {}

Q_EXPORT_PLUGIN2(testplugin, TestPlugin)
