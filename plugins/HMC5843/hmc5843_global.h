#ifndef HMC5843_GLOBAL_H
#define HMC5843_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HMC5843_LIBRARY)
#  define HMC5843SHARED_EXPORT Q_DECL_EXPORT
#else
#  define HMC5843SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HMC5843_GLOBAL_H
