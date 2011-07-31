#ifndef SENDFILE_GLOBAL_H
#define SENDFILE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SENDFILE_LIBRARY)
#  define SENDFILESHARED_EXPORT Q_DECL_EXPORT
#else
#  define SENDFILESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SENDFILE_GLOBAL_H
