/*
 *  ole.h       Object Linking and Embedding (OLE) 1.0 functions
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

#ifndef _INC_OLE
#define _INC_OLE

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* OLE data type macros */
#ifdef STRICT
    #define OLE_LPCSTR  LPCSTR
    #define OLE_CONST   const
#else
    #define OLE_LPCSTR  LPSTR
    #define OLE_CONST
#endif

/* Primitive data types */
typedef WORD    OLECLIPFORMAT;
typedef HANDLE  HOBJECT;
typedef LONG    LHSERVER;
typedef LONG    LHCLIENTDOC;
typedef LONG    LHSERVERDOC;

/* Object types */
#define OT_LINK     1L
#define OT_EMBEDDED 2L
#define OT_STATIC   3L

/* OLE verbs */
#define OLEVERB_PRIMARY 0

/* OLE flags */
#define OF_SET      0x0001
#define OF_GET      0x0002
#define OF_HANDLER  0x0004

/* OLE target device */
typedef struct _OLETARGETDEVICE {
    UINT    otdDeviceNameOffset;
    UINT    otdDriverNameOffset;
    UINT    otdPortNameOffset;
    UINT    otdExtDevmodeOffset;
    UINT    otdExtDevmodeSize;
    UINT    otdEnvironmentOffset;
    UINT    otdEnvironmentSize;
    BYTE    otdData[1];
} OLETARGETDEVICE;
typedef OLETARGETDEVICE FAR *LPOLETARGETDEVICE;

/* OLE return values */
typedef enum {
    OLE_OK                          = 0,
    OLE_WAIT_FOR_RELEASE            = 1,
    OLE_BUSY                        = 2,
    OLE_ERROR_PROTECT_ONLY          = 3,
    OLE_ERROR_MEMORY                = 4,
    OLE_ERROR_STREAM                = 5,
    OLE_ERROR_STATIC                = 6,
    OLE_ERROR_BLANK                 = 7,
    OLE_ERROR_DRAW                  = 8,
    OLE_ERROR_METAFILE              = 9,
    OLE_ERROR_ABORT                 = 10,
    OLE_ERROR_CLIPBOARD             = 11,
    OLE_ERROR_FORMAT                = 12,
    OLE_ERROR_OBJECT                = 13,
    OLE_ERROR_OPTION                = 14,
    OLE_ERROR_PROTOCOL              = 15,
    OLE_ERROR_ADDRESS               = 16,
    OLE_ERROR_NOT_EQUAL             = 17,
    OLE_ERROR_HANDLE                = 18,
    OLE_ERROR_GENERIC               = 19,
    OLE_ERROR_CLASS                 = 20,
    OLE_ERROR_SYNTAX                = 21,
    OLE_ERROR_DATATYPE              = 22,
    OLE_ERROR_PALETTE               = 23,
    OLE_ERROR_NOT_LINK              = 24,
    OLE_ERROR_NOT_EMPTY             = 25,
    OLE_ERROR_SIZE                  = 26,
    OLE_ERROR_DRIVE                 = 27,
    OLE_ERROR_NETWORK               = 28,
    OLE_ERROR_NAME                  = 29,
    OLE_ERROR_TEMPLATE              = 30,
    OLE_ERROR_NEW                   = 31,
    OLE_ERROR_EDIT                  = 32,
    OLE_ERROR_OPEN                  = 33,
    OLE_ERROR_NOT_OPEN              = 34,
    OLE_ERROR_LAUNCH                = 35,
    OLE_ERROR_COMM                  = 36,
    OLE_ERROR_TERMINATE             = 37,
    OLE_ERROR_COMMAND               = 38,
    OLE_ERROR_SHOW                  = 39,
    OLE_ERROR_DOVERB                = 40,
    OLE_ERROR_ADVISE_NATIVE         = 41,
    OLE_ERROR_ADVISE_PICT           = 42,
    OLE_ERROR_ADVISE_RENAME         = 43,
    OLE_ERROR_POKE_NATIVE           = 44,
    OLE_ERROR_REQUEST_NATIVE        = 45,
    OLE_ERROR_REQUEST_PICT          = 46,
    OLE_ERROR_SERVER_BLOCKED        = 47,
    OLE_ERROR_REGISTRATION          = 48,
    OLE_ERROR_ALREADY_REGISTERED    = 49,
    OLE_ERROR_TASK                  = 50,
    OLE_ERROR_OUTOFDATE             = 51,
    OLE_ERROR_CANT_UPDATE_CLIENT    = 52,
    OLE_ERROR_UPDATE                = 53,
    OLE_ERROR_SETDATA_FORMAT        = 54,
    OLE_ERROR_STATIC_FROM_OTHER_OS  = 55,
    OLE_WARN_DELETE_DATA            = 1000
} OLESTATUS;

/* OLE callback codes */
typedef enum {
    OLE_CHANGED     = 0,
    OLE_SAVED       = 1,
    OLE_CLOSED      = 2,
    OLE_RENAMED     = 3,
    OLE_QUERY_PAINT = 4,
    OLE_RELEASE     = 5,
    OLE_QUERY_RETRY = 6
} OLE_NOTIFICATION;

/* OLE release methods */
typedef enum {
    OLE_NONE                = 0,
    OLE_DELETE              = 1,
    OLE_LNKPASTE            = 2,
    OLE_EMBPASTE            = 3,
    OLE_SHOW                = 4,
    OLE_RUN                 = 5,
    OLE_ACTIVATE            = 6,
    OLE_UPDATE              = 7,
    OLE_CLOSE               = 8,
    OLE_RECONNECT           = 9,
    OLE_SETUPDATEOPTIONS    = 10,
    OLE_SERVERUNLAUNCH      = 11,
    OLE_LOADFROMSTREAM      = 12,
    OLE_SETDATA             = 13,
    OLE_REQUESTDATA         = 14,
    OLE_OTHER               = 15,
    OLE_CREATE              = 16,
    OLE_CREATEFROMTEMPLATE  = 17,
    OLE_CREATELINKFROMFILE  = 18,
    OLE_COPYFROMLNK         = 19,
    OLE_CREATEFROMFILE      = 20,
    OLE_CREATEINVISIBLE     = 21
} OLE_RELEASE_METHOD;

/* OLE rendering options */
typedef enum {
    olerender_none      = 0,
    olerender_draw      = 1,
    olerender_format    = 2
} OLEOPT_RENDER;

/* OLE update options */
typedef enum {
    oleupdate_always    = 0,
    oleupdate_onsave    = 1,
    oleupdate_oncall    = 2
} OLEOPT_UPDATE;

/* OLE object */
typedef struct _OLEOBJECT {
    struct _OLEOBJECTVTBL FAR   *lpvtbl;
} OLEOBJECT;
typedef OLEOBJECT FAR       *LPOLEOBJECT;
typedef struct _OLEOBJECTVTBL {
    void FAR *      (CALLBACK *QueryProtocol)( LPOLEOBJECT, OLE_LPCSTR );
    OLESTATUS       (CALLBACK *Release)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *Show)( LPOLEOBJECT, BOOL );
    OLESTATUS       (CALLBACK *DoVerb)( LPOLEOBJECT, UINT, BOOL, BOOL );
    OLESTATUS       (CALLBACK *GetData)( LPOLEOBJECT, OLECLIPFORMAT, HANDLE FAR * );
    OLESTATUS       (CALLBACK *SetData)( LPOLEOBJECT, OLECLIPFORMAT, HANDLE );
    OLESTATUS       (CALLBACK *SetTargetDevice)( LPOLEOBJECT, HGLOBAL );
    OLESTATUS       (CALLBACK *SetBounds)( LPOLEOBJECT, OLE_CONST RECT FAR * );
    OLECLIPFORMAT   (CALLBACK *EnumFormats)( LPOLEOBJECT, OLECLIPFORMAT );
    OLESTATUS       (CALLBACK *SetColorScheme)( LPOLEOBJECT, OLE_CONST LOGPALETTE FAR * );
#ifndef SERVERONLY
    OLESTATUS       (CALLBACK *Delete)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *SetHostNames)( LPOLEOBJECT, OLE_LPCSTR, OLE_LPCSTR );
    OLESTATUS       (CALLBACK *SaveToStream)( LPOLEOBJECT, struct _OLESTREAM FAR * );
    OLESTATUS       (CALLBACK *Clone)( LPOLEOBJECT, struct _OLECLIENT FAR *, LHCLIENTDOC, OLE_LPCSTR, LPOLEOBJECT FAR * );
    OLESTATUS       (CALLBACK *CopyFromLink)( LPOLEOBJECT, struct _OLECLIENT FAR *, LHCLIENTDOC, OLE_LPCSTR, LPOLEOBJECT FAR * );
    OLESTATUS       (CALLBACK *Equal)( LPOLEOBJECT, LPOLEOBJECT );
    OLESTATUS       (CALLBACK *CopyToClipboard)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *Draw)( LPOLEOBJECT, HDC, OLE_CONST RECT FAR *, OLE_CONST RECT FAR *, HDC );
    OLESTATUS       (CALLBACK *Activate)( LPOLEOBJECT, UINT, BOOL, BOOL, HWND, OLE_CONST RECT FAR * );
    OLESTATUS       (CALLBACK *Execute)( LPOLEOBJECT, HGLOBAL, UINT );
    OLESTATUS       (CALLBACK *Close)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *Update)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *Reconnect)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *ObjectConvert)( LPOLEOBJECT, OLE_LPCSTR, struct _OLECLIENT FAR *, LHCLIENTDOC, OLE_LPCSTR, LPOLEOBJECT FAR * );
    OLESTATUS       (CALLBACK *GetLinkUpdateOptions)( LPOLEOBJECT, OLEOPT_UPDATE FAR * );
    OLESTATUS       (CALLBACK *SetLinkUpdateOptions)( LPOLEOBJECT, OLEOPT_UPDATE );
    OLESTATUS       (CALLBACK *Rename)( LPOLEOBJECT, OLE_LPCSTR );
    OLESTATUS       (CALLBACK *QueryName)( LPOLEOBJECT, LPSTR, UINT FAR * );
    OLESTATUS       (CALLBACK *QueryType)( LPOLEOBJECT, LONG FAR * );
    OLESTATUS       (CALLBACK *QueryBounds)( LPOLEOBJECT, RECT FAR * );
    OLESTATUS       (CALLBACK *QuerySize)( LPOLEOBJECT, DWORD FAR * );
    OLESTATUS       (CALLBACK *QueryOpen)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *QueryOutOfDate)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *QueryReleaseStatus)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *QueryReleaseError)( LPOLEOBJECT );
    OLE_RELEASE_METHOD  (CALLBACK *QueryReleaseMethod)( LPOLEOBJECT );
    OLESTATUS       (CALLBACK *RequestData)( LPOLEOBJECT, OLECLIPFORMAT );
    OLESTATUS       (CALLBACK *ObjectLong)( LPOLEOBJECT, UINT, LONG FAR * );
    OLESTATUS       (CALLBACK *ChangeData)( LPOLEOBJECT, HANDLE, struct _OLECLIENT FAR *, BOOL );
#endif
} OLEOBJECTVTBL;
typedef OLEOBJECTVTBL FAR   *LPOLEOBJECTVTBL;

/* OLE client */
typedef struct _OLECLIENT {
    struct _OLECLIENTVTBL FAR   *lpvtbl;
} OLECLIENT;
typedef OLECLIENT FAR       *LPOLECLIENT;
typedef struct _OLECLIENTVTBL {
    int (CALLBACK *CallBack)( LPOLECLIENT, OLE_NOTIFICATION, LPOLEOBJECT );
} OLECLIENTVTBL;
typedef OLECLIENTVTBL FAR   *LPOLECLIENTVTBL;

/* OLE stream */
typedef struct _OLESTREAM {
    struct _OLESTREAMVTBL FAR   *lpstbl;
} OLESTREAM;
typedef OLESTREAM FAR       *LPOLESTREAM;
typedef struct _OLESTREAMVTBL {
    DWORD   (CALLBACK *Get)( LPOLESTREAM, void FAR *, DWORD );
    DWORD   (CALLBACK *Put)( LPOLESTREAM, OLE_CONST void FAR *, DWORD );
} OLESTREAMVTBL;
typedef OLESTREAMVTBL FAR   *LPOLESTREAMVTBL;

/* OLE server uses */
typedef enum {
    OLE_SERVER_MULTI    = 0,
    OLE_SERVER_SINGLE   = 1
} OLE_SERVER_USE;

/* OLE server */
typedef struct _OLESERVER {
    struct _OLESERVERVTBL FAR   *lpvtbl;
} OLESERVER;
typedef OLESERVER FAR       *LPOLESERVER;
typedef struct _OLESERVERVTBL {
    OLESTATUS   (CALLBACK *Open)( LPOLESERVER, LHSERVERDOC, OLE_LPCSTR, struct _OLESERVERDOC FAR * );
    OLESTATUS   (CALLBACK *Create)( LPOLESERVER, LHSERVERDOC, OLE_LPCSTR, OLE_LPCSTR, struct _OLESERVERDOC FAR * );
    OLESTATUS   (CALLBACK *CreateFromTemplate)( LPOLESERVER, LHSERVERDOC, OLE_LPCSTR, OLE_LPCSTR, OLE_LPCSTR, struct _OLESERVERDOC FAR * );
    OLESTATUS   (CALLBACK *Edit)( LPOLESERVER, LHSERVERDOC, OLE_LPCSTR, OLE_LPCSTR, struct _OLESERVERDOC FAR * );
    OLESTATUS   (CALLBACK *Exit)( LPOLESERVER );
    OLESTATUS   (CALLBACK *Release)( LPOLESERVER );
    OLESTATUS   (CALLBACK *Execute)( LPOLESERVER, HGLOBAL );
} OLESERVERVTBL;
typedef OLESERVERVTBL FAR   *LPOLESERVERVTBL;

/* OLE server document */
typedef struct _OLESERVERDOC {
    struct _OLESERVERDOCVTBL FAR    *lpvtbl;
} OLESERVERDOC;
typedef OLESERVERDOC FAR        *LPOLESERVERDOC;
typedef struct _OLESERVERDOCVTBL {
    OLESTATUS   (CALLBACK *Save)( LPOLESERVERDOC );
    OLESTATUS   (CALLBACK *Close)( LPOLESERVERDOC );
    OLESTATUS   (CALLBACK *SetHostNames)( LPOLESERVERDOC, OLE_LPCSTR, OLE_LPCSTR );
    OLESTATUS   (CALLBACK *SetDocDimensions)( LPOLESERVERDOC, OLE_CONST RECT FAR * );
    OLESTATUS   (CALLBACK *GetObject)( LPOLESERVERDOC, OLE_LPCSTR, LPOLEOBJECT FAR *, LPOLECLIENT );
    OLESTATUS   (CALLBACK *Release)( LPOLESERVERDOC );
    OLESTATUS   (CALLBACK *SetColorScheme)( LPOLESERVERDOC, OLE_CONST LOGPALETTE FAR * );
    OLESTATUS   (CALLBACK *Execute)( LPOLESERVERDOC, HGLOBAL );
} OLESERVERDOCVTBL;
typedef OLESERVERDOCVTBL FAR    *LPOLESERVERDOCVTBL;

/* Functions in OLECLI.DLL */
OLESTATUS WINAPI            OleActivate( LPOLEOBJECT, UINT, BOOL, BOOL, HWND, const RECT FAR * );
OLESTATUS WINAPI            OleClone( LPOLEOBJECT, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR * );
OLESTATUS WINAPI            OleClose( LPOLEOBJECT );
OLESTATUS WINAPI            OleCopyFromLink( LPOLEOBJECT, LPCSTR, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR * );
OLESTATUS WINAPI            OleCopyToClipboard( LPOLEOBJECT );
OLESTATUS WINAPI            OleCreate( LPCSTR, LPOLECLIENT, LPCSTR, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleCreateFromClip( LPCSTR, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleCreateFromFile( LPCSTR, LPOLECLIENT, LPCSTR, LPCSTR, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleCreateFromTemplate( LPCSTR, LPOLECLIENT, LPCSTR, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleCreateInvisible( LPCSTR, LPOLECLIENT, LPCSTR, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT, BOOL );
OLESTATUS WINAPI            OleCreateLinkFromClip( LPCSTR, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleCreateLinkFromFile( LPCSTR, LPOLECLIENT, LPCSTR, LPCSTR, LPCSTR, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR *, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleDelete( LPOLEOBJECT );
OLESTATUS WINAPI            OleDraw( LPOLEOBJECT, HDC, const RECT FAR *, const RECT FAR *, HDC );
OLECLIPFORMAT WINAPI        OleEnumFormats( LPOLEOBJECT, OLECLIPFORMAT );
OLESTATUS WINAPI            OleEnumObjects( LHCLIENTDOC, LPOLEOBJECT FAR * );
OLESTATUS WINAPI            OleEqual( LPOLEOBJECT, LPOLEOBJECT );
OLESTATUS WINAPI            OleExecute( LPOLEOBJECT, HGLOBAL, UINT );
OLESTATUS WINAPI            OleGetData( LPOLEOBJECT, OLECLIPFORMAT, HANDLE FAR * );
OLESTATUS WINAPI            OleGetLinkUpdateOptions( LPOLEOBJECT, OLEOPT_UPDATE FAR * );
BOOL WINAPI                 OleIsDcMeta( HDC );
OLESTATUS WINAPI            OleLoadFromStream( LPOLESTREAM, LPCSTR, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR * );
OLESTATUS WINAPI            OleLockServer( LPOLEOBJECT, LHSERVER FAR * );
OLESTATUS WINAPI            OleObjectConvert( LPOLEOBJECT, LPCSTR, LPOLECLIENT, LHCLIENTDOC, LPCSTR, LPOLEOBJECT FAR * );
OLESTATUS WINAPI            OleQueryBounds( LPOLEOBJECT, RECT FAR * );
DWORD WINAPI                OleQueryClientVersion( void );
OLESTATUS WINAPI            OleQueryCreateFromClip( LPCSTR, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleQueryLinkFromClip( LPCSTR, OLEOPT_RENDER, OLECLIPFORMAT );
OLESTATUS WINAPI            OleQueryName( LPOLEOBJECT, LPSTR, UINT FAR * );
OLESTATUS WINAPI            OleQueryOpen( LPOLEOBJECT );
OLESTATUS WINAPI            OleQueryOutOfDate( LPOLEOBJECT );
OLESTATUS WINAPI            OleQueryProtocol( LPOLEOBJECT, LPCSTR );
OLESTATUS WINAPI            OleQueryReleaseError( LPOLEOBJECT );
OLE_RELEASE_METHOD WINAPI   OleQueryReleaseMethod( LPOLEOBJECT );
OLESTATUS WINAPI            OleQueryReleaseStatus( LPOLEOBJECT );
OLESTATUS WINAPI            OleQuerySize( LPOLEOBJECT, DWORD FAR * );
OLESTATUS WINAPI            OleQueryType( LPOLEOBJECT, LONG FAR * );
OLESTATUS WINAPI            OleReconnect( LPOLEOBJECT );
OLESTATUS WINAPI            OleRegisterClientDoc( LPCSTR, LPCSTR, LONG, LHCLIENTDOC FAR * );
OLESTATUS WINAPI            OleRelease( LPOLEOBJECT );
OLESTATUS WINAPI            OleRename( LPOLEOBJECT, LPCSTR );
OLESTATUS WINAPI            OleRenameClientDoc( LHCLIENTDOC, LPCSTR );
OLESTATUS WINAPI            OleRequestData( LPOLEOBJECT, OLECLIPFORMAT );
OLESTATUS WINAPI            OleRevertClientDoc( LHCLIENTDOC );
OLESTATUS WINAPI            OleRevokeClientDoc( LHCLIENTDOC );
OLESTATUS WINAPI            OleSaveToStream( LPOLEOBJECT, LPOLESTREAM );
OLESTATUS WINAPI            OleSavedClientDoc( LHCLIENTDOC );
OLESTATUS WINAPI            OleSetBounds( LPOLEOBJECT, const RECT FAR * );
OLESTATUS WINAPI            OleSetColorScheme( LPOLEOBJECT, const LOGPALETTE FAR * );
OLESTATUS WINAPI            OleSetData( LPOLEOBJECT, OLECLIPFORMAT, HANDLE );
OLESTATUS WINAPI            OleSetHostNames( LPOLEOBJECT, LPCSTR, LPCSTR );
OLESTATUS WINAPI            OleSetLinkUpdateOptions( LPOLEOBJECT, OLEOPT_UPDATE );
OLESTATUS WINAPI            OleSetTargetDevice( LPOLEOBJECT, HGLOBAL );
OLESTATUS WINAPI            OleUnlockServer( LHSERVER );
OLESTATUS WINAPI            OleUpdate( LPOLEOBJECT );

/* Functions in OLESVR.DLL */
OLESTATUS WINAPI    OleBlockServer( LHSERVER );
DWORD WINAPI        OleQueryServerVersion( void );
OLESTATUS WINAPI    OleRegisterServer( LPCSTR, LPOLESERVER, LHSERVER FAR *, HINSTANCE, OLE_SERVER_USE );
OLESTATUS WINAPI    OleRegisterServerDoc( LHSERVER, LPCSTR, LPOLESERVERDOC, LHSERVERDOC FAR * );
OLESTATUS WINAPI    OleRenameServerDoc( LHSERVERDOC, LPCSTR );
OLESTATUS WINAPI    OleRevertServerDoc( LHSERVERDOC );
OLESTATUS WINAPI    OleRevokeObject( LPOLECLIENT );
OLESTATUS WINAPI    OleRevokeServer( LHSERVER );
OLESTATUS WINAPI    OleRevokeServerDoc( LHSERVERDOC );
OLESTATUS WINAPI    OleSavedServerDoc( LHSERVERDOC );
OLESTATUS WINAPI    OleUnblockServer( LHSERVER, BOOL FAR * );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_OLE */
