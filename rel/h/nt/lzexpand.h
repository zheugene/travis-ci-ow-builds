/*
 *  lzexpand.h  Lempel-Ziv compression functions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2016 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _LZEXPAND_
#define _LZEXPAND_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* LZ error codes */
#define LZERROR_BADINHANDLE     (-1)
#define LZERROR_BADOUTHANDLE    (-2)
#define LZERROR_READ            (-3)
#define LZERROR_WRITE           (-4)
#define LZERROR_GLOBALLOC       (-5)
#define LZERROR_GLOBLOCK        (-6)
#define LZERROR_BADVALUE        (-7)
#define LZERROR_UNKNOWNALG      (-8)

/* Functions in LZ32.DLL */
LONG APIENTRY   CopyLZFile( INT, INT );
INT APIENTRY    GetExpandedNameA( LPSTR, LPSTR );
INT APIENTRY    GetExpandedNameW( LPWSTR, LPWSTR );
VOID APIENTRY   LZClose( INT );
LONG APIENTRY   LZCopy( INT, INT );
VOID APIENTRY   LZDone( VOID );
INT APIENTRY    LZInit( INT );
INT APIENTRY    LZOpenFileA( LPSTR, LPOFSTRUCT, WORD );
INT APIENTRY    LZOpenFileW( LPWSTR, LPOFSTRUCT, WORD );
INT APIENTRY    LZRead( INT, CHAR *, INT );
LONG APIENTRY   LZSeek( INT, LONG, INT );
INT APIENTRY    LZStart( VOID );

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define GetExpandedName GetExpandedNameW
    #define LZOpenFile      LZOpenFileW
#else
    #define GetExpandedName GetExpandedNameA
    #define LZOpenFile      LZOpenFileA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _LZEXPAND_ */
