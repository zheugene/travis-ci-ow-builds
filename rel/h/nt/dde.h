/*
 *  dde.h       Dynamic Data Exchange (DDE) definitions
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

#ifndef _DDEHEADER_INCLUDED_
#define _DDEHEADER_INCLUDED_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* DDE messages */
#define WM_DDE_FIRST        0x03E0
#define WM_DDE_INITIATE     (WM_DDE_FIRST + 0)
#define WM_DDE_TERMINATE    (WM_DDE_FIRST + 1)
#define WM_DDE_ADVISE       (WM_DDE_FIRST + 2)
#define WM_DDE_UNADVISE     (WM_DDE_FIRST + 3)
#define WM_DDE_ACK          (WM_DDE_FIRST + 4)
#define WM_DDE_DATA         (WM_DDE_FIRST + 5)
#define WM_DDE_REQUEST      (WM_DDE_FIRST + 6)
#define WM_DDE_POKE         (WM_DDE_FIRST + 7)
#define WM_DDE_EXECUTE      (WM_DDE_FIRST + 8)
#define WM_DDE_LAST         (WM_DDE_FIRST + 8)

/* Structure used with WM_DDE_ACK */
typedef struct {
    unsigned short  bAppReturnCode  : 8;
    unsigned short  reserved        : 6;
    unsigned short  fBusy           : 1;
    unsigned short  fAck            : 1;
} DDEACK;

/* Structure used with WM_DDE_ADVISE */
typedef struct {
    unsigned short  reserved    : 14;
    unsigned short  fDeferUpd   : 1;
    unsigned short  fAckReq     : 1;
    short           cfFormat;
} DDEADVISE;

/* Structure used with WM_DDE_DATA */
typedef struct {
    unsigned short  unused      : 12;
    unsigned short  fResponse   : 1;
    unsigned short  fRelease    : 1;
    unsigned short  reserved    : 1;
    unsigned short  fAckReq     : 1;
    short           cfFormat;
    BYTE            Value[1];
} DDEDATA;

/* Structure used with WM_DDE_POKE */
typedef struct {
    unsigned short  unused      : 13;
    unsigned short  fRelease    : 1;
    unsigned short  fReserved   : 2;
    short           cfFormat;
    BYTE            Value[1];
} DDEPOKE;

/* Structure retained for compatibility */
typedef struct {
    unsigned short  unused      : 13;
    unsigned short  fRelease    : 1;
    unsigned short  fDeferUpd   : 1;
    unsigned short  fAckReq     : 1;
    short           cfFormat;
} DDELN;

/* Another structure retained for compatibility */
typedef struct {
    unsigned short  unused      : 12;
    unsigned short  fAck        : 1;
    unsigned short  fRelease    : 1;
    unsigned short  fReserved   : 1;
    unsigned short  fAckReq     : 1;
    short           cfFormat;
    BYTE            rgb[1];
} DDEUP;

/* Functions in USER32.DLL */
WINUSERAPI BOOL WINAPI      DdeSetQualityOfService( HWND, CONST SECURITY_QUALITY_OF_SERVICE *, PSECURITY_QUALITY_OF_SERVICE );
WINUSERAPI BOOL WINAPI      FreeDDElParam( UINT, LPARAM );
WINUSERAPI BOOL WINAPI      ImpersonateDdeClientWindow( HWND, HWND );
WINUSERAPI LPARAM WINAPI    PackDDElParam( UINT, UINT_PTR, UINT_PTR );
WINUSERAPI LPARAM WINAPI    ReuseDDElParam( LPARAM, UINT, UINT, UINT_PTR, UINT_PTR );
WINUSERAPI BOOL WINAPI      UnpackDDElParam( UINT, LPARAM, PUINT_PTR, PUINT_PTR );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _DDEHEADER_INCLUDED_ */
