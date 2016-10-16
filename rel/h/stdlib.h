/***************************************************************************
 * FILE: stdlib.h/cstdlib (Standard Library functions)
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
 *              declares several types, macros, and functions of general
 *              utility.
 ***************************************************************************/
#ifndef _STDLIB_H_INCLUDED
#define _STDLIB_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus

#define _INCLUDED_FROM_STDLIB_H
#include <cstdlib>
#undef  _INCLUDED_FROM_STDLIB_H

// C99 types in stdlib.h.
using std::div_t;
using std::ldiv_t;
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
using std::size_t;
#endif

// C99 functions in stdlib.h
using std::abs;
using std::atexit;
using std::atof;
using std::atoi;
using std::atol;
using std::atoll;
using std::bsearch;
using std::calloc;
using std::div;
using std::free;
using std::labs;
using std::ldiv;
using std::malloc;
using std::mblen;
using std::mbstowcs;
using std::mbtowc;
using std::wcstombs;
using std::wctomb;
using std::qsort;
using std::rand;
using std::realloc;
using std::srand;
using std::strtod;
using std::strtol;
using std::strtoll;
using std::strtoul;
using std::strtoull;

using std::abort;
using std::exit;
using std::getenv;
using std::system;

#if !defined(NO_EXT_KEYS) /* extensions enabled */
using std::wcstol;
using std::wcstoll;
using std::wcstod;
using std::wcstoul;
using std::wcstoull;
#endif /* extensions enabled */

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if !defined(_SYS__LFNDOS_H_INCLUDED) && defined(__WATCOM_LFN__) && defined(__DOS__)
 #include <sys/_lfndos.h>
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif

 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   _w_size_t;
 #endif

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ == 1

#ifndef _ERRNO_T_DEFINED
 #define _ERRNO_T_DEFINED
 typedef int errno_t;
#endif

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
 typedef size_t rsize_t;
#endif

typedef void (*constraint_handler_t)( const char * __restrict __msg, void * __restrict __ptr, errno_t __error );

#endif /* Safer C Library */

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

#ifndef MB_CUR_MAX
 #define MB_CUR_MAX     2
#endif
#ifndef MB_LEN_MAX
 #define MB_LEN_MAX     2
#endif

#ifndef _MAX_PATH
 #if defined(__OS2__) || defined(__NT__) || defined(__WATCOM_LFN__) && defined(__DOS__) || defined(__OSI__)
  #define _MAX_PATH   260 /* maximum length of full pathname */
 #else
  #define _MAX_PATH   144 /* maximum length of full pathname */
 #endif
#endif

#define RAND_MAX        32767U
#define EXIT_SUCCESS    0
#define EXIT_FAILURE    0xFF

typedef struct  {
    int     quot;
    int     rem;
} div_t;

typedef struct  {
    long    quot;
    long    rem;
} ldiv_t;

typedef struct  {
    long long   quot;
    long long   rem;
} lldiv_t;

_WCIRTLINK extern int    abs( int __j );
#if defined(_M_IX86) && 0
#pragma aux abs     parm nomemory modify nomemory;
#endif
_WRTLFCONV extern int    atexit( void ( *__func )( void ) );
_WMRTLINK extern double  atof( const char *__nptr );
_WCRTLINK extern int     atoi( const char *__nptr );
_WCRTLINK extern long int atol( const char *__nptr );
_WCRTLINK extern long long int atoll( const char *__nptr );
_WCRTLINK extern void    *bsearch( const void *__key, const void *__base,
                                  size_t __nmemb, size_t __size,
                                  int (*__compar)(const void *__pkey, const void *__pbase) );
_WCRTLINK extern void    *calloc( size_t __n, size_t __size );
_WCIRTLINK extern div_t  div( int __numer, int __denom );
_WCRTLINK _NORETURN extern void _Exit( int __status );
_WCRTLINK extern void    free( void *__ptr );

_WCIRTLINK extern long int labs( long int __j );
#if defined(_M_IX86) && 0
#pragma aux labs    parm nomemory modify nomemory;
#endif

#if defined(_M_I86)
_WCRTLINK extern ldiv_t  ldiv( long int __numer, long int __denom );
#else
_WCIRTLINK extern ldiv_t  ldiv( long int __numer, long int __denom );
#endif
_WCRTLINK extern long long int llabs( long long int __j );
_WCRTLINK extern lldiv_t lldiv( long long int __numer, long long int __denom );
_WCRTLINK extern void    *malloc( size_t __size );
_WCRTLINK extern int     mblen( const char *__s, size_t __n );
_WCRTLINK extern size_t  mbstowcs( wchar_t *__pwcs, const char *__s, size_t __n );
_WCRTLINK extern int     mbtowc( wchar_t *__pwc, const char *__s, size_t __n );
_WCRTLINK extern size_t  wcstombs( char *__s, const wchar_t *__pwcs, size_t __n );
_WCRTLINK extern int     wctomb( char *__s, wchar_t __wchar );
_WCRTLINK extern void    qsort( void *__base, size_t __nmemb, size_t __size,
                                int (*__compar)( const void *, const void * ) );
_WCRTLINK extern int     rand( void );
_WCRTLINK extern void    *realloc( void *__ptr, size_t __size );
_WCRTLINK extern void    srand( unsigned int __seed );
_WMRTLINK extern double  strtod( const char *__nptr, char **__endptr );
_WMRTLINK extern float   strtof( const char *__nptr, char **__endptr );
_WMRTLINK extern long double strtold( const char *__nptr, char **__endptr );
_WCRTLINK extern long int strtol( const char *__nptr, char **__endptr, int __base );
_WCRTLINK extern long long int strtoll( const char *__nptr, char **__endptr, int __base );
_WCRTLINK extern unsigned long strtoul( const char *__nptr, char **__endptr, int __base );
_WCRTLINK extern unsigned long long int strtoull( const char *__nptr, char **__endptr, int __base );

_WCRTLINK extern char   *getenv( const char *__name );
_WCRTLINK extern int    system( const char *__cmd );
_WCRTLINK _NORETURN extern void   abort( void );
_WCRTLINK _NORETURN extern void   exit( int __status );

#if defined(__INLINE_FUNCTIONS__)
#pragma intrinsic(abs,div,labs)
#if !defined(_M_I86)
 #pragma intrinsic(ldiv)
#endif
#endif

#define atof(p)  strtod(p,(char **)NULL)

#if !defined(NO_EXT_KEYS) /* extensions enabled */

_WCRTLINK extern void    break_on( void );
_WCRTLINK extern void    break_off( void );

_WCRTLINK _NORETURN extern void  _exit( int __status );

_WMRTLINK extern char    *ecvt( double __val, int __ndig, int *__dec, int *__sign );
_WMRTLINK extern char    *_ecvt( double __val, int __ndig, int *__dec, int *__sign );
_WMRTLINK extern char    *fcvt( double __val, int __ndig, int *__dec, int *__sign );
_WMRTLINK extern char    *_fcvt( double __val, int __ndig, int *__dec, int *__sign );
_WCRTLINK extern char    *_fullpath( char *__buf, const char *__path, _w_size_t __size );
_WMRTLINK extern char    *gcvt( double __val, int __ndig, char *__buf );
_WMRTLINK extern char    *_gcvt( double __val, int __ndig, char *__buf );
_WCRTLINK extern char    *itoa( int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_itoa( int __value, char *__buf, int __radix );
#if defined(_M_I86)
_WCRTLINK extern unsigned long _lrotl( unsigned long __value, unsigned int __shift );
#else
_WCIRTLINK extern unsigned long _lrotl( unsigned long __value, unsigned int __shift );
#endif
#if defined(_M_I86)
_WCRTLINK extern unsigned long _lrotr( unsigned long __value, unsigned int __shift );
#else
_WCIRTLINK extern unsigned long _lrotr( unsigned long __value, unsigned int __shift );
#endif
_WCRTLINK extern char    *ltoa( long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *lltoa( long long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_ltoa( long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_lltoa( long long int __value, char *__buf, int __radix );
_WCRTLINK extern void    _makepath( char *__path, const char *__drive,
                                    const char *__dir, const char *__fname, const char *__ext );
_WCRTLINK extern int     mkstemp( char *__template );
_WCIRTLINK extern unsigned int _rotl( unsigned int __value, unsigned int __shift );
_WCIRTLINK extern unsigned int _rotr( unsigned int __value, unsigned int __shift );

_WMRTLINK extern wchar_t  *_wecvt( double __val, int __ndig, int *__dec, int *__sign );
_WMRTLINK extern wchar_t  *_wfcvt( double __val, int __ndig, int *__dec, int *__sign );
_WMRTLINK extern wchar_t  *_wgcvt( double __val, int __ndig, wchar_t *__buf );
_WCRTLINK extern int      _wtoi( const wchar_t * );
_WCRTLINK extern long int _wtol( const wchar_t * );
_WCRTLINK extern long long int _wtoll( const wchar_t * );
_WCRTLINK extern wchar_t  *_itow( int, wchar_t *, int );
_WCRTLINK extern wchar_t  *_ltow( long int, wchar_t *, int );
_WCRTLINK extern wchar_t  *_lltow( long long int, wchar_t *, int );
_WCRTLINK extern wchar_t  *_utow( unsigned int, wchar_t *, int );
_WCRTLINK extern wchar_t  *_ultow( unsigned long int, wchar_t *, int );
_WCRTLINK extern wchar_t  *_ulltow( unsigned long long int, wchar_t *, int );
_WMRTLINK extern double   _wtof( const wchar_t * );
_WMRTLINK extern double   _watof( const wchar_t * );
_WCRTLINK extern long int wcstol( const wchar_t *, wchar_t **, int );
_WCRTLINK extern long long int wcstoll( const wchar_t *, wchar_t **, int );
_WMRTLINK extern double  wcstod( const wchar_t *, wchar_t ** );
_WCRTLINK extern unsigned long int wcstoul( const wchar_t *, wchar_t **, int );
_WCRTLINK extern unsigned long long int wcstoull( const wchar_t *, wchar_t **, int );
_WCRTLINK extern wchar_t  *_atouni( wchar_t *, const char * );
_WCRTLINK extern wchar_t  *_wfullpath( wchar_t *, const wchar_t *, _w_size_t );
_WCRTLINK extern void     _wmakepath( wchar_t *__path, const wchar_t *__drive,
                                      const wchar_t *__dir,
                                      const wchar_t *__fname,
                                      const wchar_t *__ext );
_WCRTLINK extern int      _wcsicmp( const wchar_t *, const wchar_t * );
_WCRTLINK extern wchar_t  *_wcsdup( const wchar_t * );
_WCRTLINK extern int      _wcsnicmp( const wchar_t *, const wchar_t *, _w_size_t );
_WCRTLINK extern wchar_t  *_wcslwr( wchar_t * );
_WCRTLINK extern wchar_t  *_wcsupr( wchar_t * );
_WCRTLINK extern wchar_t  *_wcsrev( wchar_t * );
_WCRTLINK extern wchar_t  *_wcsset( wchar_t *, wchar_t );
_WCRTLINK extern wchar_t  *_wcsnset( wchar_t *, int, _w_size_t );
_WCRTLINK extern wchar_t  *_wgetenv( const wchar_t *__name );
_WCRTLINK extern int      _wsetenv( const wchar_t *__name,
                                      const wchar_t *__newvalue,
                                      int __overwrite );
_WCRTLINK extern int      _wputenv( const wchar_t *__env_string );
_WCRTLINK extern void     _wsplitpath2( const wchar_t *__inp,
                                          wchar_t *__outp, wchar_t **__drive,
                                          wchar_t **__dir, wchar_t **__fn,
                                          wchar_t **__ext );
_WCRTLINK extern void     _wsplitpath( const wchar_t *__path,
                                         wchar_t *__drive, wchar_t *__dir,
                                         wchar_t *__fname, wchar_t *__ext );
_WCRTLINK extern void     _wsearchenv( const wchar_t *__name,
                                         const wchar_t *__env_var,
                                         wchar_t *__buf );
_WCRTLINK extern int      _wsystem( const wchar_t *__cmd );

_WCRTLINK extern int     setenv( const char *__name, const char *__newvalue, int __overwrite );
_WCRTLINK extern int     unsetenv( const char *name );

_WCRTLINK extern int     putenv( const char *__string );
_WCRTLINK extern int     _putenv( const char *__string );
_WCRTLINK extern void    _searchenv( const char *__name, const char *__env_var, char *__buf );
_WCRTLINK extern void    _splitpath2( const char *__inp, char *__outp,
                                      char **__drive, char **__dir,
                                      char **__fn, char **__ext );
_WCRTLINK extern void    _splitpath( const char *__path, char *__drive,
                                     char *__dir, char *__fname, char *__ext );
_WCRTLINK extern void    swab( char *__src, char *__dest, int __num );
_WCRTLINK extern char    *ultoa( unsigned long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *ulltoa( unsigned long long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_ultoa( unsigned long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_ulltoa( unsigned long long int __value, char *__buf, int __radix );
_WCRTLINK extern char    *utoa( unsigned int __value, char *__buf, int __radix );
_WCRTLINK extern char    *_utoa( unsigned int __value, char *__buf, int __radix );

_WCRTLINK extern char    *_i64toa( __int64 __value, char *__buf, int __radix );
_WCRTLINK extern char    *_ui64toa( unsigned __int64 __value, char *__buf, int __radix );
_WCRTLINK extern __int64 _atoi64( const char *__nptr );
_WCRTLINK extern __int64 _strtoi64( const char *__nptr, char **__endptr, int __base );
_WCRTLINK extern unsigned __int64 _strtoui64( const char *__nptr, char **__endptr, int __base );

#if defined(__INLINE_FUNCTIONS__)
 #pragma intrinsic(_rotl,_rotr)
 #if !defined(_M_I86)
  #pragma intrinsic(_lrotl,_lrotr)
 #endif
#endif

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ == 1

_WCRTLINK extern constraint_handler_t set_constraint_handler_s( constraint_handler_t __handler );
_WCRTLINK extern void abort_handler_s( const char * __restrict __msg, void * __restrict __ptr, errno_t __error );
_WCRTLINK extern void ignore_handler_s( const char * __restrict __msg, void * __restrict __ptr, errno_t __error );

_WCRTLINK extern errno_t getenv_s( size_t * __restrict __len, char * __restrict __value, rsize_t __maxsize, const char * __restrict __name );

_WCRTLINK extern void    *bsearch_s( const void *__key, const void *__base, rsize_t __nmemb, rsize_t __size,
                                     int (*__compar)(const void *__x, const void *__y, void *__context), void *__context);
_WCRTLINK extern errno_t qsort_s( void *__base, rsize_t __nmemb, rsize_t __size,
                                  int (*__compar)(const void *__x, const void *__y, void *__context), void *__context);

_WCRTLINK extern errno_t wctomb_s( int * __restrict __status, char * __restrict __s, rsize_t __smax, wchar_t __wc );
_WCRTLINK extern errno_t mbstowcs_s( size_t * __restrict __retval, wchar_t * __restrict __dst, rsize_t __dstmax, const char * __restrict __src, rsize_t __len );
_WCRTLINK extern errno_t wcstombs_s( size_t * __restrict __retval, char * __restrict __dst, rsize_t __dstmax, const wchar_t * __restrict __src, rsize_t __len );

#if !defined(NO_EXT_KEYS) /* extensions enabled */
 _WCRTLINK extern errno_t _fwctomb_s( int _WCFAR * __restrict __status, char _WCFAR * __restrict __s, rsize_t __smax, wchar_t __wc );
 _WCRTLINK extern errno_t _fmbstowcs_s( size_t _WCFAR * __restrict __retval, wchar_t _WCFAR * __restrict __dst, rsize_t __dstmax, const char _WCFAR * __restrict __src, rsize_t __len );
 _WCRTLINK extern errno_t _fwcstombs_s( size_t _WCFAR * __restrict __retval, char _WCFAR * __restrict __dst, rsize_t __dstmax, const wchar_t _WCFAR * __restrict __src, rsize_t __len );

 _WCRTLINK extern errno_t   _get_pgmptr( char ** __p );
 #if defined(__NT__) || (defined(__OS2__) && (defined(__386__) || defined(__PPC__)))
  _WCRTLINK extern errno_t  _get_wpgmptr( wchar_t ** __p );
 #endif
#endif /* extensions enabled */

#endif /* Safer C Library */

#if !defined(NO_EXT_KEYS) /* extensions enabled */
 _WCRTLINK extern int     _fwctomb( char _WCFAR * __s, wchar_t __wchar );
 _WCRTLINK extern size_t  _fmbstowcs( wchar_t _WCFAR * __pwcs, const char _WCFAR * __s, size_t __n );
 _WCRTLINK extern size_t  _fwcstombs( char _WCFAR * __s, const wchar_t _WCFAR * __pwcs, size_t __n );
 _WCRTLINK extern int     _fmblen( const char _WCFAR * __s, size_t __n );
 _WCRTLINK extern int     _fmbtowc( wchar_t _WCFAR * __pwc, const char _WCFAR * __s, size_t __n );
#endif /* extensions enabled */

/* min and max macros */
#if !defined(__max)
#define __max(a,b)  (((a) > (b)) ? (a) : (b))
#endif
#if !defined(max)
#define max(a,b)  (((a) > (b)) ? (a) : (b))
#endif
#if !defined(__min)
#define __min(a,b)  (((a) < (b)) ? (a) : (b))
#endif
#if !defined(min)
#define min(a,b)  (((a) < (b)) ? (a) : (b))
#endif

/*
 * The following sizes are the maximum sizes of buffers used by the _fullpath()
 * _makepath() and _splitpath() functions.  They include space for the '\0'
 * terminator.
 */
#if defined(__NT__) || defined(__OS2__) || defined(__WATCOM_LFN__) && defined(__DOS__) || defined(__OSI__)
#define _MAX_DRIVE   3  /* maximum length of drive component */
#define _MAX_DIR    256 /* maximum length of path component */
#define _MAX_FNAME  256 /* maximum length of file name component */
#define _MAX_EXT    256 /* maximum length of extension component */
#else
#define _MAX_DRIVE   3  /* maximum length of drive component */
#define _MAX_DIR    130 /* maximum length of path component */
#define _MAX_FNAME   9  /* maximum length of file name component */
#define _MAX_EXT     5  /* maximum length of extension component */
#ifndef _MAX_NAME
#define _MAX_NAME    13  /* maximum length of file name (with extension) */
#endif
#endif

#define _MAX_PATH2 (_MAX_PATH+3) /* maximum size of output buffer for _splitpath2() */

_WCRTLINK extern char ***__get_environ_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define environ   (*__get_environ_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define environ   environ_br
#endif
_WCRTDATA extern char ** _WCDATA environ; /* pointer to environment table */

_WCRTLINK extern wchar_t ***__get_wenviron_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _wenviron (*__get_wenviron_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _wenviron _wenviron_br
#endif
_WCRTDATA extern wchar_t ** _WCDATA _wenviron;   /* pointer to wide environment */

_WCRTLINK extern char **__get_pgmptr_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _pgmptr   (*__get_pgmptr_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _pgmptr   _pgmptr_br
#endif
_WCRTDATA extern char * _WCDATA _pgmptr;  /* pointer to executable name */

#if defined(__NT__) || (defined(__OS2__) && (defined(__386__) || defined(__PPC__)))
_WCRTLINK extern wchar_t **__get_wpgmptr_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _wpgmptr  (*__get_wpgmptr_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _wpgmptr  _wpgmptr_br
#endif
_WCRTDATA extern wchar_t * _WCDATA _wpgmptr;     /* pointer to wide executable name */
#endif

#if defined(__NT__)
 _WCRTLINK extern int *__get_fileinfo_ptr( void );
 #if defined(__FUNCTION_DATA_ACCESS)
  #define _fileinfo (*__get_fileinfo_ptr())
 #elif defined(__SW_BR) || defined(_RTDLL)
  #define _fileinfo _fileinfo_br
 #endif
 _WCRTDATA extern int _WCDATA _fileinfo;    /* for inheriting POSIX handles */
#endif

#ifndef _ERRNO_DEFINED
#define _ERRNO_DEFINED
 _WCRTLINK extern int *__get_errno_ptr( void );
 #ifndef errno
  #define errno (*__get_errno_ptr())
 #else
  _WCRTDATA extern int errno;
 #endif
#endif

#if !defined(__NETWARE__)
 _WCRTLINK extern int    *__get_doserrno_ptr( void );
 #define _doserrno       (*__get_doserrno_ptr())     /* DOS system error code value */
#endif

_WCRTLINK extern unsigned       *__get_psp_ptr( void );
_WCRTLINK extern unsigned char  *__get_osmode_ptr( void );
_WCRTLINK extern int            *__get_fmode_ptr( void );
_WCRTLINK extern unsigned       *__get_minreal_ptr( void );
_WCRTLINK extern unsigned long  *__get_win_alloc_flags_ptr( void );
_WCRTLINK extern unsigned long  *__get_win_realloc_flags_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _psp                (*__get_psp_ptr())
 #define _osmode             (*__get_osmode_ptr())
 #define _fmode              (*__get_fmode_ptr())
 #define __minreal           (*__get_minreal_ptr())
 #define __win_alloc_flags   (*__get_win_alloc_flags_ptr())
 #define __win_realloc_flags (*__get_win_realloc_flags_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _psp                _psp_br
 #define _osmode             _osmode_br
 #define _fmode              _fmode_br
 #define __minreal           __minreal_br
 #define __win_alloc_flags   __win_alloc_flags_br
 #define __win_realloc_flags __win_realloc_flags_br
#endif
_WCRTDATA extern unsigned      _WCDATA _psp;                /* Program Segment Prefix */
_WCRTDATA extern unsigned char _WCDATA _osmode;             /* DOS_MODE or OS2_MODE */
_WCRTDATA extern int           _WCDATA _fmode;              /* default file translation mode */
_WCRTDATA extern unsigned      _WCDATA __minreal;           /* DOS4GW var for WLINK MINREAL option*/
_WCRTDATA extern unsigned long _WCDATA __win_alloc_flags;   /* Windows allocation flags */
_WCRTDATA extern unsigned long _WCDATA __win_realloc_flags; /* Windows reallocation flags */

#define DOS_MODE 0  /* Real Address Mode */
#define OS2_MODE 1  /* Protected Address Mode */

#if !defined(__NETWARE__)
#define sys_errlist _sys_errlist
#define sys_nerr _sys_nerr
#endif
_WCRTLINK extern char        **__get_sys_errlist_ptr( void );
_WCRTLINK extern int         *__get_sys_nerr_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _sys_errlist        (*__get_sys_errlist_ptr())
 #define _sys_nerr           (*__get_sys_nerr_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _sys_errlist        _sys_errlist_br
 #define _sys_nerr           _sys_nerr_br
#endif
_WCRTDATA extern char * _WCDATA _sys_errlist[]; /* strerror error message table */
_WCRTDATA extern int  _WCDATA _sys_nerr;        /* # of entries in _sys_errlist array */

_WCRTLINK extern unsigned      *__get_amblksiz_ptr( void );
_WCRTLINK extern unsigned char *__get_osmajor_ptr( void );
_WCRTLINK extern unsigned char *__get_osminor_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define _amblksiz      (*__get_amblksiz_ptr())
 #define _osmajor       (*__get_osmajor_ptr())
 #define _osminor       (*__get_osminor_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define _amblksiz      _amblksiz_br
 #define _osmajor       _osmajor_br
 #define _osminor       _osminor_br
#endif
_WCRTDATA extern unsigned      _WCDATA _amblksiz;   /*  mallocs done in multiples of    */
_WCRTDATA extern unsigned char _WCDATA _osmajor;    /*  O/S major version # */
_WCRTDATA extern unsigned char _WCDATA _osminor;    /*  O/S minor version # */

#if defined(__NT__)
 _WCRTLINK extern unsigned short *__get_osbuild_ptr( void );
 _WCRTLINK extern unsigned int   *__get_osver_ptr( void );
 _WCRTLINK extern unsigned int   *__get_winmajor_ptr( void );
 _WCRTLINK extern unsigned int   *__get_winminor_ptr( void );
 _WCRTLINK extern unsigned int   *__get_winver_ptr( void );
 #if defined(__FUNCTION_DATA_ACCESS)
  #define _osbuild          (*__get_osbuild_ptr())
  #define _osver            (*__get_osver_ptr())
  #define _winmajor         (*__get_winmajor_ptr())
  #define _winminor         (*__get_winminor_ptr())
  #define _winver           (*__get_winver_ptr())
 #elif defined(__SW_BR) || defined(_RTDLL)
  #define _osbuild          _osbuild_br
  #define _osver            _osver_br
  #define _winmajor         _winmajor_br
  #define _winminor         _winminor_br
  #define _winver           _winver_br
 #endif
 _WCRTDATA extern unsigned short _WCDATA _osbuild;  /*  O/S build revision  */
 _WCRTDATA extern unsigned int   _WCDATA _osver;    /*  O/S build revision  */
 _WCRTDATA extern unsigned int   _WCDATA _winmajor; /*  O/S major version # */
 _WCRTDATA extern unsigned int   _WCDATA _winminor; /*  O/S minor version # */
 _WCRTDATA extern unsigned int   _WCDATA _winver;   /*  O/S version #       */
#endif
extern  int       __argc;       /* number of cmd line args */
extern  char    **__argv;       /* vector of cmd line args */
#if defined(__NT__) || (defined(__OS2__) && (defined(__386__) || defined(__PPC__)))
extern  int       __wargc;      /* number of wide cmd line args */
extern  wchar_t **__wargv;      /* vector of wide cmd line args */
#endif

_WCRTLINK extern void _WCNEAR *__brk( unsigned __new_brk_value );
_WCRTLINK extern void _WCNEAR *sbrk( int __increment );

typedef void (*onexit_t)( void );
_WCRTLINK extern onexit_t     onexit( onexit_t __func );

#endif /* extensions enabled */

#pragma pack( __pop )

#endif /* __cplusplus not defined */

#endif

