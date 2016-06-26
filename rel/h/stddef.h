/***************************************************************************
 * FILE: stddef.h/cstddef (Standard definitions)
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2016 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 *
 * Description: This header is part of the C/C++ standard library. It
 *              introduces certain commonly needed type names and
 *              supplies the offsetof macro.
 ***************************************************************************/
#ifndef _STDDEF_H_INCLUDED
#define _STDDEF_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus

#include <cstddef>

// C99 types in stddef.h
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
using std::size_t;
#endif
#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFIEND_
using std::ptrdiff_t;
#endif

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   _w_size_t;
 #endif

 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif

#ifndef NULL
 #ifdef __cplusplus
  #if !defined(_M_I86) || defined(__SMALL__) || defined(__MEDIUM__)
   #define NULL 0
  #else
   #define NULL 0L
  #endif 
 #else
  #define NULL ((void *)0)
 #endif
#endif

 #ifndef _PTRDIFF_T_DEFINED
 #define _PTRDIFF_T_DEFINED
  #define _PTRDIFF_T_DEFINED_
  #ifdef __HUGE__
   typedef long ptrdiff_t;
  #else
   typedef int ptrdiff_t;
  #endif
 #endif

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ == 1

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
 typedef size_t rsize_t;
#endif

#endif /* Safer C Library */

#define offsetof(__typ,__id) ((size_t)((char *)&(((__typ*)0)->__id) - (char *)0))

#if !defined(NO_EXT_KEYS) /* extensions enabled */
#if defined(_M_I86)
 _WCRTDATA extern int _WCFAR *_threadid;        /* pointer to thread id */
#else
 _WCRTLINK extern int *__threadid(void); /* pointer to thread id */
 #define _threadid (__threadid())
 #if defined(__NT__)
  _WCRTLINK extern unsigned long __threadhandle( void );
 #endif
#endif
#endif /* extensions enabled */

#endif /* __cplusplus not defined */

#endif
