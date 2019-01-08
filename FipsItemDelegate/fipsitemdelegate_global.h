#ifndef FIPSITEMDELEGATE_GLOBAL_H
#define FIPSITEMDELEGATE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FIPSITEMDELEGATE_LIBRARY)
#  define FIPSITEMDELEGATESHARED_EXPORT Q_DECL_EXPORT
#else
#  define FIPSITEMDELEGATESHARED_EXPORT Q_DECL_IMPORT
#endif

// null for fips
#ifndef FIPS_NULLPTR
#  ifdef Q_COMPILER_NULLPTR
#    define FIPS_NULLPTR nullptr
#  else
#    define FIPS_NULLPTR NULL
#  endif
#endif

#endif // FIPSITEMDELEGATE_GLOBAL_H