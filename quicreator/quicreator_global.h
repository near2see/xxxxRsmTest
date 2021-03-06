﻿#ifndef QUICREATOR_GLOBAL_H
#define QUICREATOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QUICREATOR_LIBRARY)
#  define QUICREATORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QUICREATORSHARED_EXPORT Q_DECL_IMPORT
#endif

// 变参宏通用宏基宏
#define PRIVATE_ARGS_GLUE(x,y) x y

#define PRIVATE_MACRO_VAR_ARGS_IMPL_COUNT(__6,__5,__4,__3,__2,__1,_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,N,...) N
#define PRIVATE_MACRO_VAR_ARGS_IMPL(args)  PRIVATE_MACRO_VAR_ARGS_IMPL_COUNT args
#define COUNT_MACRO_VAR_ARGS0(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0))
#define COUNT_MACRO_VAR_ARGS1(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,_1))
#define COUNT_MACRO_VAR_ARGS2(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,_1,_2))
#define COUNT_MACRO_VAR_ARGS3(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,_1,_2,_3))
#define COUNT_MACRO_VAR_ARGS4(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,13,12,11,10,9,8,7,6,5,4,3,2,1,0,_1,_2,_3,_4))
#define COUNT_MACRO_VAR_ARGS5(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,12,11,10,9,8,7,6,5,4,3,2,1,0,_1,_2,_3,_4,_5))
#define COUNT_MACRO_VAR_ARGS6(...)  PRIVATE_MACRO_VAR_ARGS_IMPL((__VA_ARGS__,11,10,9,8,7,6,5,4,3,2,1,0,_1,_2,_3,_4,_5,_6))

#define PRIVATE_MACRO_CHOOSE_HELPER5(M,count)  M##count
#define PRIVATE_MACRO_CHOOSE_HELPER4(M,count)  PRIVATE_MACRO_CHOOSE_HELPER5(M,count)
#define PRIVATE_MACRO_CHOOSE_HELPER3(M,count)  PRIVATE_MACRO_CHOOSE_HELPER4(M,count)
#define PRIVATE_MACRO_CHOOSE_HELPER2(M,count)  PRIVATE_MACRO_CHOOSE_HELPER3(M,count)
#define PRIVATE_MACRO_CHOOSE_HELPER1(M,count)  PRIVATE_MACRO_CHOOSE_HELPER2(M,count)
#define PRIVATE_MACRO_CHOOSE_HELPER(M,count)   PRIVATE_MACRO_CHOOSE_HELPER1(M,count)

#define PRIVATE_COUNT_MACRO_CHOOSE(va_args_offset,...) \
    PRIVATE_ARGS_GLUE(PRIVATE_MACRO_CHOOSE_HELPER5(COUNT_MACRO_VAR_ARGS,va_args_offset),(__VA_ARGS__))

// 变参宏通用宏
#define VA_ARGS_MACRO_HELPER(va_args_macro_seq_name,va_args_offset,...) \
    PRIVATE_ARGS_GLUE(PRIVATE_MACRO_CHOOSE_HELPER(va_args_macro_seq_name,PRIVATE_COUNT_MACRO_CHOOSE(va_args_offset,__VA_ARGS__)),(__VA_ARGS__))


#endif // QUICREATOR_GLOBAL_H
