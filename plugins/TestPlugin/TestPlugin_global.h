#ifndef TESTPLUGIN_GLOBAL_H
#define TESTPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TESTPLUGIN_LIBRARY)
#  define TESTPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TESTPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TESTPLUGIN_GLOBAL_H
