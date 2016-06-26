/*
 *  fci.h       File Compression Interface
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

#ifndef __FCI_INCLUDED__
#define __FCI_INCLUDED__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

/* The Microsoft defintions all contain FAR and DIAMONDAPI
 * declarations to maintain 16-bit compatibility.  Since
 * we're building only for 32- and 64-bit (maybe), we can
 * just leave the FAR define blank.  However, it's good to
 * maintain the same terminology as Microsoft, I suppose...
 */
#ifndef FAR
#define FAR
#endif
#ifndef DIAMONDAPI
#define DIAMONDAPI __cdecl
#endif

#define CB_MAX_CHUNK        32768U
#define CB_MAX_DISK         0x7fffffffL
#define CB_MAX_FILENAME     256
#define CB_MAX_CABINET_NAME 256
#define CB_MAX_CAB_PATH     256
#define CB_MAX_DISK_NAME    256

typedef enum {
    FCIERR_NONE,
    FCIERR_OPEN_SRC,
    FCIERR_READ_SRC,
    FCIERR_ALLOC_FAIL,
    FCIERR_TEMP_FILE,
    FCIERR_BAD_COMPR_TYPE,
    FCIERR_CAB_FILE,
    FCIERR_USER_ABORT,
    FCIERR_MCI_FAIL
} FCIERROR;

typedef void *HFCI;

typedef struct _CCAB {
    ULONG cb;
    ULONG cbFolderThresh;
    UINT cbReserveCFHeader;
    UINT cbReserveCFFolder;
    UINT cbReserveCFData;
    int iCab;
    int iDisk;
    USHORT setID;
    char szDisk[CB_MAX_DISK_NAME];
    char szCab[CB_MAX_CABINET_NAME];
    char szCabPath[CB_MAX_CAB_PATH];
} CCAB, *PCCAB;

typedef struct {
    int  erfOper;
    int  erfType;
    BOOL fError;
} ERF, FAR *PERF;
  
typedef void *(DIAMONDAPI *PFNFCIALLOC)( ULONG );
#define FNFCIALLOC(fn) void *DIAMONDAPI fn( ULONG cb )

typedef void (DIAMONDAPI *PFNFCIFREE)( void * );
#define FNFCIFREE(fn) void DIAMONDAPI fn( void *memory )

typedef INT_PTR (DIAMONDAPI *PFNFCIOPEN)   ( LPSTR, int, int, int FAR *, void * );
typedef UINT    (DIAMONDAPI *PFNFCIREAD)   ( INT_PTR, void FAR *, UINT, int FAR *, void FAR * );
typedef UINT    (DIAMONDAPI *PFNFCIWRITE)  ( INT_PTR, void FAR *, UINT, int FAR *, void FAR * );
typedef int     (DIAMONDAPI *PFNFCICLOSE)  ( INT_PTR, int FAR *, void FAR * );
typedef long    (DIAMONDAPI *PFNFCISEEK)   ( INT_PTR, long, int, int FAR *, void FAR * );
typedef int     (DIAMONDAPI *PFNFCIDELETE) ( LPSTR, int FAR *, void FAR * );

#define FNFCIOPEN(fn)   INT_PTR DIAMONDAPI fn( LPSTR pszFile, int oflag, int pmode, int FAR *err, void FAR *pv )
#define FNFCIREAD(fn)   UINT    DIAMONDAPI fn( INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv )
#define FNFCIWRITE(fn)  UINT    DIAMONDAPI fn( INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv )
#define FNFCICLOSE(fn)  int     DIAMONDAPI fn( INT_PTR hf, int FAR *err, void FAR *pv )
#define FNFCISEEK(fn)   long    DIAMONDAPI fn( INT_PTR hf, long dist, int seektype, int FAR *err, void FAR *pv )
#define FNFCIDELETE(fn) int     DIAMONDAPI fn( LPSTR pszFile, int FAR *err, void FAR *pv )

typedef BOOL (DIAMONDAPI *PFNFCIGETNEXTCABINET)( PCCAB, ULONG, void * );
#define FNFCIGETNEXTCABINET(fn) BOOL DIAMONDAPI fn( PCCAB pccab, ULONG cbPrevCab, void FAR *pv )

typedef int (DIAMONDAPI *PFNFCIFILEPLACED)( PCCAB *, LPSTR, long, BOOL, void * );
#define FNFCIFILEPLACED(fn) int DIAMONDAPI fn( PCCAB *pccab, LPSTR pszFile, long cbFile, BOOL fContinuation, void FAR *pv )

typedef INT_PTR (DIAMONDAPI *PFNFCIGETOPENINFO)( LPSTR, USHORT *, USHORT *, USHORT *, int FAR *, void FAR * );
#define FNFCIGETOPENINFO(fn) INT_PTR DIAMONDAPI fn( LPSTR pszName, USHORT *pdate, USHORT *ptime, USHORT *pattribs, int FAR *err, void FAR *pv )

#define statusFile 0
#define statusFolder 1
#define statusCabinet 2

typedef long (DIAMONDAPI *PFNFCISTATUS)( UINT, ULONG, ULONG, void * );
#define FNFCISTATUS(fn) long DIAMONDAPI fn( UINT typeStatus, ULONG cb1, ULONG cb2, void FAR *pv )

typedef BOOL (DIAMONDAPI *PFNFCIGETTEMPFILE)( char *, int, void * );
#define FNFCIGETTEMPFILE(fn) BOOL DIAMONDAPI fn( char *pszTempName, int cbTempName, void FAR *pv )

typedef unsigned short TCOMP;
#define tcompTYPE_NONE        0x0000
#define tcompTYPE_MSZIP       0x0001

#define tcompTYPE_LZX         0x0003
#define tcompSHIFT_LZX_WINDOW 8
#define TCOMPfromLZXWindow(w) (((w) << tcompSHIFT_LZX_WINDOW) | (tcompTYPE_LZX))


HFCI DIAMONDAPI FCICreate( PERF, PFNFCIFILEPLACED, PFNFCIALLOC, PFNFCIFREE, PFNFCIOPEN, PFNFCIREAD, PFNFCIWRITE pfnwrite,PFNFCICLOSE, PFNFCISEEK, PFNFCIDELETE, PFNFCIGETTEMPFILE, PCCAB, void * );
BOOL DIAMONDAPI FCIAddFile( HFCI, char *, char *, BOOL, PFNFCIGETNEXTCABINET, PFNFCISTATUS, PFNFCIGETOPENINFO, TCOMP );
BOOL DIAMONDAPI FCIFlushCabinet( HFCI, BOOL, PFNFCIGETNEXTCABINET, PFNFCISTATUS );
BOOL DIAMONDAPI FCIFlushFolder( HFCI, PFNFCIGETNEXTCABINET, PFNFCISTATUS );
BOOL DIAMONDAPI FCIDestroy ( HFCI );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __FCI_INCLUDED__ */
