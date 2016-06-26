/**************************************************************************
 * FILE: stdio.h/cstdio (Standard I/O functions)
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
 *              describes the I/O facilities provided by the C standard.
 **************************************************************************/
#ifndef _STDIO_H_INCLUDED
#define _STDIO_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus

#include <cstdio>

// C99 types in stdio.h.
using std::FILE;
using std::fpos_t;
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
using std::size_t;
#endif

// C99 functions in stdio.h.
using std::clearerr;
using std::fclose;
using std::feof;
using std::ferror;
using std::fflush;
using std::fgetc;
using std::fgetpos;
using std::fgets;
using std::fopen;
using std::fprintf;
using std::fputc;
using std::fputs;
using std::fread;
using std::freopen;
using std::fscanf;
using std::fseek;
using std::fsetpos;
using std::ftell;
using std::fwrite;
using std::getc;
using std::getchar;
using std::gets;
using std::perror;
using std::printf;
using std::putc;
using std::putchar;
using std::puts;
using std::remove;
using std::rename;
using std::rewind;
using std::scanf;
using std::setbuf;
using std::setvbuf;
using std::sprintf;
using std::sscanf;
using std::tmpfile;
using std::tmpnam;
using std::ungetc;
using std::vfprintf;
using std::vprintf;
using std::vsprintf;

#if !defined(NO_EXT_KEYS) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
using std::snprintf;
using std::vfscanf;
using std::vscanf;
using std::vsnprintf;
using std::vsscanf;
#endif /* extensions enabled */

#if !defined(NO_EXT_KEYS) /* extensions enabled */

// C99 types that are not specified for stdio.h
#ifndef _WINT_T_DEFINED
#define _WINT_T_DEFINED
#define _WINT_T_DEFINED_
using std::wint_t;
#endif

// C99 functions that are not specified for stdio.h
using std::fgetwc;
using std::fgetws;
using std::fputwc;
using std::fputws;
using std::fwprintf;
using std::fwscanf;
using std::getwc;
using std::getwchar;
using std::putwc;
using std::putwchar;
using std::swprintf;
using std::swscanf;
using std::ungetwc;
using std::vfwprintf;
using std::vfwscanf;
using std::vswprintf;
using std::vswscanf;
using std::vwprintf;
using std::vwscanf;
using std::wprintf;
using std::wscanf;

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

 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   _w_size_t;
 #endif

#ifndef _SSIZE_T_DEFINED_
#define _SSIZE_T_DEFINED_
 typedef signed ssize_t;
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

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED
 #if defined(__PPC__)
  #if defined(__NT__)
   typedef char  *__va_list;
  #else
   typedef struct {
       char  __gpr;
       char  __fpr;
       char  __reserved[2];
       char  *__input_arg_area;
       char  *__reg_save_area;
   } __va_list;
  #endif
 #elif defined(__AXP__)
  typedef struct {
      char  *__base;
      int   __offset;
  } __va_list;
 #elif defined(__MIPS__)
  typedef struct {
      char  *__base;
      int   __offset;
  } __va_list;
 #elif defined(__HUGE__) || defined(__SW_ZU)
  typedef char _WCFAR *__va_list[1];
 #else
  typedef char    *__va_list[1];
 #endif
#endif

#define _NFILES         20          /* number of files that can be handled */
#if defined(_M_I86)
 #define BUFSIZ         512         /*  Default buffer size                 */
#else
 #define BUFSIZ         4096        /*  Default buffer size                 */
#endif
#if defined(__OS2__) || defined(__NT__) || defined(__WATCOM_LFN__) && defined(__DOS__) || defined(__OSI__)
 #define FILENAME_MAX   260
#else
 #define FILENAME_MAX   144
#endif

struct __stream_link;
struct __iobuf;
#if !defined(__OBSCURE_STREAM_INTERNALS)
struct __iobuf {
    unsigned char        *_ptr;         /* next character position */
    int                   _cnt;         /* number of characters left */
    struct __stream_link *_link;        /* location of associated struct */
    unsigned              _flag;        /* mode of file access */
    int                   _handle;      /* file handle */
    unsigned              _bufsize;     /* size of buffer */
    unsigned short        _ungotten;    /* used by ungetc and ungetwc */
};
#endif

typedef struct __iobuf FILE;
typedef long           fpos_t;

#if !defined(NO_EXT_KEYS) /* extensions enabled */
 #define FOPEN_MAX      _NFILES
 #define OPEN_MAX       FOPEN_MAX
#else  /* extensions disabled */
 #define FOPEN_MAX      (_NFILES-2)
#endif /* extensions disabled */

#if !defined(NO_EXT_KEYS) /* extensions enabled */
 #if defined(__OS2__) || defined(__NT__) || defined(__WATCOM_LFN__) && defined(__DOS__) || defined(__OSI__)
  #define PATH_MAX      259 /* maximum length of full pathname excl. '\0' */
 #else
  #define PATH_MAX      143 /* maximum length of full pathname excl. '\0' */
 #endif
#endif /* extensions enabled */

_WCRTLINK extern FILE       *__get_iob_ptr( void );
#if defined(__FUNCTION_DATA_ACCESS)
 #define __iob          (*__get_iob_ptr())
#elif defined(__SW_BR) || defined(_RTDLL)
 #define __iob          __iob_br
#endif

_WCRTLINK extern FILE *__get_std_file(unsigned handle);

#if !defined(__OBSCURE_STREAM_INTERNALS)
_WCRTDATA extern FILE   _WCDATA __iob[];
/*
 *  Define macros to access the three default file pointer (and descriptors)
 *  provided to each process by default. They will always occupy the
 *  first three file pointers in each processes' table.
 */
#define stdin   ((FILE *)&__iob[0])     /* standard input file  */
#define stdout  ((FILE *)&__iob[1])     /* standard output file */
#define stderr  ((FILE *)&__iob[2])     /* standard error file  */
#if !defined(NO_EXT_KEYS) /* extensions enabled */
#if defined(__DOS__) || defined(__WINDOWS__) || defined(__OSI__)
#define stdaux  ((FILE *)&__iob[3])     /* standard auxiliary file  */
#define stdprn  ((FILE *)&__iob[4])     /* standard printer file  */
#endif
#endif /* extensions enabled */

#else /* __OBSCURE_STREAM_INTERNALS is defined */

#define stdin   (__get_std_file(0))     /* standard input file  */
#define stdout  (__get_std_file(1))     /* standard output file */
#define stderr  (__get_std_file(2))     /* standard error file  */
#if !defined(NO_EXT_KEYS) /* extensions enabled */
#if defined(__DOS__) || defined(__WINDOWS__)
#define stdaux  (__get_std_file(3))     /* standard auxiliary file  */
#define stdprn  (__get_std_file(4))     /* standard printer file  */
#endif
#endif /* extensions enabled */

#endif /* __OBSCURE_STREAM_INTERNALS */

/* values for _flag field in FILE struct and _iomode array */

#define _READ   0x0001  /* file opened for reading */
#define _WRITE  0x0002  /* file opened for writing */
#define _UNGET  0x0004  /* ungetc has been done */
#define _BIGBUF 0x0008  /* big buffer allocated */
#define _EOF    0x0010  /* EOF has occurred */
#define _SFERR  0x0020  /* error has occurred on this file */
#define _APPEND 0x0080  /* file opened for append */
#define _BINARY 0x0040  /* file is binary, skip CRLF processing */
#define _IOFBF  0x0100  /* full buffering */
#define _IOLBF  0x0200  /* line buffering */
#define _IONBF  0x0400  /* no buffering */
#define _TMPFIL 0x0800  /* this is a temporary file */
#define _DIRTY  0x1000  /* buffer has been modified */
#define _ISTTY  0x2000  /* is console device */
#define _DYNAMIC 0x4000 /* FILE is dynamically allocated   */
#define _FILEEXT 0x8000 /* lseek with positive offset has been done */
#define _COMMIT 0x0001  /* extended flag: commit OS buffers on flush */

#define EOF         (-1)                /*  End of File/Error return code   */

#define SEEK_SET    0           /* Seek relative to the start of file   */
#define SEEK_CUR    1           /* Seek relative to current position    */
#define SEEK_END    2           /* Seek relative to the end of the file */

#define _NOT_ORIENTED   0               /* stream not yet oriented */
#define _BYTE_ORIENTED  1               /* byte-oriented stream */
#define _WIDE_ORIENTED  2               /* wide-oriented stream */

#define L_tmpnam    13
#define _P_tmpdir   "\\"                /* used by _tempnam */
#define _wP_tmpdir  L"\\"               /* used by _wtempnam */
#define TMP_MAX     (26*26*26)          /*  Max times tmpnam can be called  */

_WCRTLINK extern void   clearerr( FILE *__fp );
_WCRTLINK extern int    fclose( FILE *__fp );
_WCRTLINK extern int    feof( FILE *__fp );
_WCRTLINK extern int    ferror( FILE *__fp );
_WCRTLINK extern int    fflush( FILE *__fp );
_WCRTLINK extern int    fgetc( FILE *__fp );
_WCRTLINK extern int    fgetpos( FILE *__fp, fpos_t *__pos );
_WCRTLINK extern char   *fgets( char *__s, int __n, FILE *__fp );
_WCRTLINK extern FILE   *fopen( const char *__filename, const char *__mode );
_WCRTLINK extern int    fprintf( FILE *__fp, const char *__format, ... );
_WCRTLINK extern int    fputc( int __c, FILE *__fp );
_WCRTLINK extern int    fputs( const char *__s, FILE *__fp );
_WCRTLINK extern size_t fread( void *__ptr, size_t __size, size_t __n, FILE *__fp );
_WCRTLINK extern FILE   *freopen( const char *__filename, const char *__mode, FILE *__fp );
_WCRTLINK extern int    fscanf( FILE*__fp, const char *__format, ... );
_WCRTLINK extern int    fseek( FILE *__fp, long int __offset, int __whence );
_WCRTLINK extern int    fsetpos( FILE *__fp, const fpos_t *__pos );
_WCRTLINK extern long   ftell( FILE *__fp );
_WCRTLINK extern size_t fwrite( const void *__ptr, size_t __size, size_t __n, FILE *__fp );
_WCRTLINK extern int    getc( FILE *__fp );
_WCRTLINK extern int    getchar( void );
#if !defined(NO_EXT_KEYS) /* extensions enabled */
_WCRTLINK extern ssize_t getdelim( char **__ptr1, size_t *__ptr2, int __delim, FILE *__fp);
_WCRTLINK extern ssize_t getline( char **__ptr1, size_t *__ptr2, FILE *__fp);
#endif /* extensions enabled */
_WCRTLINK extern char   *gets( char *__s );
_WCRTLINK extern void   perror( const char *__s );
_WCRTLINK extern int    printf( const char *__format, ... );
_WCRTLINK extern int    putc( int __c, FILE *__fp );
_WCRTLINK extern int    putchar( int __c );
_WCRTLINK extern int    puts( const char *__s );
_WCRTLINK extern int    remove( const char *__filename );
_WCRTLINK extern int    rename( const char *__old, const char *__new );
_WCRTLINK extern void   rewind( FILE *__fp );
_WCRTLINK extern int    scanf( const char *__format, ... );
_WCRTLINK extern void   setbuf( FILE *__fp, char *__buf );
_WCRTLINK extern int    setvbuf( FILE *__fp, char *__buf, int __mode, size_t __size );
_WCRTLINK extern int    sprintf( char *__s, const char *__format, ... );
_WCRTLINK extern int    sscanf( const char *__s, const char *__format, ... );
_WCRTLINK extern FILE   *tmpfile( void );
_WCRTLINK extern char   *tmpnam( char *__s );
_WCRTLINK extern int    ungetc( int __c, FILE *__fp );
_WCRTLINK extern int    vfprintf( FILE *__fp, const char *__format, __va_list __arg );
_WCRTLINK extern int    vprintf( const char *__format, __va_list __arg );
_WCRTLINK extern int    vsprintf( char *__s, const char *__format, __va_list __arg );

#if !defined(NO_EXT_KEYS) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
_WCRTLINK extern int    snprintf( char *__buf, size_t __bufsize, const char *__fmt, ... );
_WCRTLINK extern int    vfscanf( FILE *__fp, const char *__format, __va_list __arg );
_WCRTLINK extern int    vscanf( const char *__format, __va_list __arg );
_WCRTLINK extern int    vsnprintf( char *__s, size_t __bufsize, const char *__format, __va_list __arg );
_WCRTLINK extern int    vsscanf( const char *__s, const char *__format, __va_list __arg );
#endif /* extensions enabled */

_WCRTLINK extern int   _getw( FILE *__fp );
_WCRTLINK extern int   _pclose( FILE *__fp );
_WCRTLINK extern FILE  *_popen( const char *__command, const char *__mode );
_WCRTLINK extern int   _putw( int __binint, FILE *__fp );
_WCRTLINK extern char  *_tempnam( char *__dir, char *__prefix );

#if !defined(NO_EXT_KEYS) /* extensions enabled */

 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif

 #ifndef _WINT_T_DEFINED
 #define _WINT_T_DEFINED
  #define _WINT_T_DEFINED_
  typedef unsigned short wint_t;
 #endif

#define WEOF  ((wint_t)(-1))      /*  EOF equivalent for wide chars   */

/* These names are not in stdio according to C99. */
_WCRTLINK extern wint_t   getwc( FILE * );
_WCRTLINK extern wint_t   getwchar( void );
_WCRTLINK extern wint_t   fgetwc( FILE * );
_WCRTLINK extern wchar_t  *fgetws( wchar_t *, int, FILE * );
_WCRTLINK extern wint_t   fputwc( wint_t, FILE * );
_WCRTLINK extern int      fputws( const wchar_t *, FILE * );
_WCRTLINK extern int      fwprintf( FILE *, const wchar_t *, ... );
_WCRTLINK extern int      fwscanf( FILE *, const wchar_t *, ... );
_WCRTLINK extern wint_t   putwc( wint_t, FILE * );
_WCRTLINK extern wint_t   putwchar( wint_t );
_WCRTLINK extern int      swprintf( wchar_t *, size_t, const wchar_t *, ... );
_WCRTLINK extern int      swscanf( const wchar_t *, const wchar_t *, ... );
_WCRTLINK extern wint_t   ungetwc( wint_t, FILE * );
_WCRTLINK extern int      vfwprintf( FILE *, const wchar_t *, __va_list );
_WCRTLINK extern int      vfwscanf( FILE *, const wchar_t *, __va_list );
_WCRTLINK extern int      vswprintf( wchar_t *, size_t, const wchar_t *, __va_list );
_WCRTLINK extern int      vswscanf( const wchar_t *, const wchar_t *, __va_list );
_WCRTLINK extern int      vwprintf( const wchar_t *, __va_list );
_WCRTLINK extern int      vwscanf( const wchar_t *, __va_list );
_WCRTLINK extern int      wprintf( const wchar_t *, ... );
_WCRTLINK extern int      wscanf( const wchar_t *, ... );

/* These names are not part of C89 or C99. */
_WCRTLINK extern int           _fseeki64( FILE *__fp, long long int __offset, int __whence );
_WCRTLINK extern long long     _ftelli64( FILE *__fp );

_WCRTLINK extern int      flushall( void );
_WCRTLINK extern FILE     *_fdopen( int __handle, const char *__mode );
_WCRTLINK extern FILE     *fdopen( int __handle, const char *__mode );
_WCRTLINK extern int      _bprintf( char *__buf, size_t __bufsize, const char *__fmt, ... );
_WCRTLINK extern int      _fgetchar( void );
_WCRTLINK extern int      _fileno(FILE *);
_WCRTLINK extern int      _fputchar( int __c );
_WCRTLINK extern FILE     *_fsopen( const char *__filename, const char *__mode, int __shflag );
_WCRTLINK extern int      _grow_handles( int __new_count );
_WCRTLINK extern int      _snprintf( char *__buf, size_t __bufsize, const char *__fmt, ... );
_WCRTLINK extern int      _vbprintf( char *__s, size_t __bufsize, const char *__format, __va_list __arg );
_WCRTLINK extern int      _vsnprintf( char *__s, size_t __bufsize, const char *__format, __va_list __arg );
_WCRTLINK extern int      fcloseall( void );
_WCRTLINK extern int      fgetchar( void );
_WCRTLINK extern int      fileno(FILE *);
_WCRTLINK extern int      fputchar( int __c );

/* These functions pertain to wide character handling. */
_WCRTLINK extern int      _bwprintf( wchar_t *, size_t, const wchar_t *, ... );
_WCRTLINK extern wint_t   _fgetwchar( void );
_WCRTLINK extern wint_t   _fputwchar( wint_t );
_WCRTLINK extern wchar_t  *_getws( wchar_t * );
_WCRTLINK extern int      _putws( const wchar_t * );
_WCRTLINK extern int      _snwprintf( wchar_t *, size_t, const wchar_t *, ... );
_WCRTLINK extern int      snwprintf( wchar_t *, size_t, const wchar_t *, ... );
_WCRTLINK extern int      _swprintf( wchar_t *, const wchar_t *, ... );
_WCRTLINK extern FILE     *_wfdopen( int, const wchar_t * );
_WCRTLINK extern FILE     *_wfopen( const wchar_t *, const wchar_t * );
_WCRTLINK extern FILE     *_wfreopen( const wchar_t *, const wchar_t *, FILE * );
_WCRTLINK extern FILE     *_wfsopen( const wchar_t *__filename, const wchar_t *__mode, int __shflag );
_WCRTLINK extern void     _wperror( const wchar_t * );
_WCRTLINK extern FILE     *_wpopen( const wchar_t *__command, const wchar_t *__mode );
_WCRTLINK extern int      _wremove( const wchar_t * );
_WCRTLINK extern int      _wrename( const wchar_t *, const wchar_t * );
_WCRTLINK extern wchar_t  *_wtempnam( wchar_t *__dir, wchar_t *__prefix );
_WCRTLINK extern wchar_t  *_wtmpnam( wchar_t * );
_WCRTLINK extern int      _vbwprintf( wchar_t *, size_t, const wchar_t *, __va_list );
_WCRTLINK extern int      _vsnwprintf( wchar_t *, size_t, const wchar_t *, __va_list );
_WCRTLINK extern int      vsnwprintf( wchar_t *, size_t, const wchar_t *, __va_list );
_WCRTLINK extern int      _vswprintf( wchar_t *, const wchar_t *, __va_list );
_WCRTLINK extern wint_t   fgetwchar( void );
_WCRTLINK extern wint_t   fputwchar( wint_t );
_WCRTLINK extern wchar_t  *getws( wchar_t * );
_WCRTLINK extern int      putws( const wchar_t * );

#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ == 1

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
 typedef size_t rsize_t;
#endif

#ifndef _ERRNO_T_DEFINED
 #define _ERRNO_T_DEFINED
 typedef int errno_t;
#endif

_WCRTLINK extern char     *gets_s( char *__s, rsize_t __n );
_WCRTLINK extern int      fprintf_s( FILE * __restrict __stream, const char * __restrict __format, ... );
_WCRTLINK extern int      fscanf_s( FILE * __restrict __stream, const char * __restrict __format, ... );
_WCRTLINK extern int      printf_s( const char * __restrict __format, ... );
_WCRTLINK extern int      scanf_s( const char * __restrict __format, ... );
_WCRTLINK extern int      snprintf_s( char * __restrict __s, rsize_t __n, const char * __restrict __format, ... );
_WCRTLINK extern int      sprintf_s( char * __restrict s, rsize_t __n, const char * __restrict __format, ... );
_WCRTLINK extern int      sscanf_s( const char * __restrict __s, const char * __restrict __format, ... );
_WCRTLINK extern int      vfprintf_s( FILE * __restrict __stream, const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vfscanf_s( FILE * __restrict __stream, const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vprintf_s( const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vscanf_s( const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vsnprintf_s( char * __restrict __s, rsize_t __n, const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vsprintf_s( char * __restrict __s, rsize_t __n, const char * __restrict __format, __va_list __arg );
_WCRTLINK extern int      vsscanf_s( const char * __restrict __s, const char * __restrict __format, __va_list __arg );
_WCRTLINK extern errno_t  fopen_s( FILE * __restrict * __restrict __streamptr, const char * __restrict __filename,
                                   const char * __restrict __mode);
_WCRTLINK extern errno_t  freopen_s( FILE * __restrict * __restrict __newstreamptr, const char * __restrict __filename,
                                     const char * __restrict __mode, FILE * __restrict __stream );
_WCRTLINK extern errno_t  tmpfile_s( FILE * __restrict * __restrict __streamptr);
_WCRTLINK extern errno_t  tmpnam_s( char *__s, rsize_t __maxsize );

#define TMP_MAX_S   (26*26*26)      /* has to be same as TMP_MAX */

#define L_tmpnam_s  13              /* has to be same as L_tmpnam */

/* These functions pertain to wide character handling. */
_WCRTLINK extern errno_t _wfopen_s( FILE * __restrict * __restrict __streamptr, const wchar_t * __restrict __filename,
                                    const wchar_t * __restrict __mode);
_WCRTLINK extern errno_t _wfreopen_s( FILE * __restrict * __restrict __newstreamptr, const wchar_t * __restrict __filename,
                                      const wchar_t * __restrict __mode, FILE * __restrict __stream );
_WCRTLINK extern errno_t _wtmpnam_s( wchar_t *__s, rsize_t __maxsize );

#endif /* Safer C Library */

#endif /* extensions enabled */

#if !defined(__OBSCURE_STREAM_INTERNALS)
#define clearerr(fp)    ((fp)->_flag &= ~(_SFERR|_EOF))
#define feof(fp)        ((fp)->_flag & _EOF)
#define ferror(fp)      ((fp)->_flag & _SFERR)
#define fileno(fp)      ((fp)->_handle)
#define _fileno(fp)     ((fp)->_handle)
#endif
#if defined(__SW_BD) || defined(__SW_BM)
#define getc(fp)        fgetc(fp)
#define putc(c,fp)      fputc(c,fp)
#else
#if !defined(__OBSCURE_STREAM_INTERNALS)
#define getc(fp) \
        ((fp)->_cnt<=0 \
        || (unsigned)((*(fp)->_ptr)-'\x0d')<=('\x1a'-'\x0d') \
        ? fgetc(fp) \
        : ((fp)->_cnt--,*(fp)->_ptr++))
#define putc(c,fp) \
        ((fp)->_flag&_IONBF \
        || (fp)->_bufsize-(fp)->_cnt<=1 \
        ? fputc(c,fp) \
        : ((*(fp)->_ptr=(unsigned char)(c))=='\n') \
        ? fputc('\n',fp) \
        : ((fp)->_flag|=_DIRTY,(fp)->_cnt++,*(fp)->_ptr++))
#endif
#endif
#define getchar()       getc(stdin)
#define putchar(c)      putc(c,stdout)

#pragma pack( __pop )

#endif /* __cplusplus not defined */

#endif
