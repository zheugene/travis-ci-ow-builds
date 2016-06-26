/*
 *  dsadmin.h   Directory Service administrative interfaces
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

/* GUIDs */
DEFINE_GUID( CLSID_DsAdminCreateObj, 0xE301A009, 0xF901, 0x11D2, 0x82, 0xB9, 0x00, 0xC0, 0x4F, 0x68, 0x92, 0x8B );
DEFINE_GUID( IID_IDsAdminCreateObj, 0x53554A38, 0xF902, 0x11D2, 0x82, 0xB9, 0x00, 0xC0, 0x4F, 0x68, 0x92, 0x8B );
DEFINE_GUID( IID_IDsAdminNewObj, 0xF2573587, 0xE6FC, 0x11D2, 0x82, 0xAF, 0x00, 0xC0, 0x4F, 0x68, 0x92, 0x8B );
DEFINE_GUID( IID_IDsAdminNewObjPrimarySite, 0xBE2B487E, 0xF904, 0x11D2, 0x82, 0xB9, 0x00, 0xC0, 0x4F, 0x68, 0x92, 0x8B );
DEFINE_GUID( IID_IDsAdminNewObjExt, 0x6088EAE2, 0xE7BF, 0x11D2, 0x82, 0xAF, 0x00, 0xC0, 0x4F, 0x68, 0x92, 0x8B );
DEFINE_GUID( IID_IDsAdminNotifyHandler, 0xE4A2B8B3, 0x5A18, 0x11D2, 0x97, 0xC1, 0x00, 0xA0, 0xC9, 0xA0, 0x6D, 0x2D );

#ifndef _DSADMIN_H
#define _DSADMIN_H

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* IDsAdminNewObjExt::Initialize() parameters */
typedef struct {
    DWORD   dwSize;
    HICON   hObjClassIcon;
    LPWSTR  lpszWinTitle;
    LPWSTR  lpszContDisplayName;
} DSA_NEWOBJ_DISPINFO;
typedef DSA_NEWOBJ_DISPINFO *LPDSA_NEWOBJ_DISPINFO;

/* IDsAdminNewObjExt context flags */
#define DSA_NEWOBJ_CTX_PRECOMMIT    0x00000001L
#define DSA_NEWOBJ_CTX_COMMIT       0x00000002L
#define DSA_NEWOBJ_CTX_POSTCOMMIT   0x00000003L
#define DSA_NEWOBJ_CTX_CLEANUP      0x00000004L

/* IDsAdminNotifyHandler notification codes */
#define DSA_NOTIFY_DEL  0x00000001L
#define DSA_NOTIFY_REN  0x00000002L
#define DSA_NOTIFY_MOV  0x00000004L
#define DSA_NOTIFY_PROP 0x00000008L
#define DSA_NOTIFY_ALL \
    (DSA_NOTIFY_DEL | DSA_NOTIFY_REN | DSA_NOTIFY_MOV | DSA_NOTIFY_PROP)

/* IDsAdminNotifyHandler notification flags */
#define DSA_NOTIFY_FLAG_ADDITIONAL_DATA         0x00000002L
#define DSA_NOTIFY_FLAG_FORCE_ADDITIONAL_DATA   0x00000001L

/* IDsAdminCreateObj interface */
#undef INTERFACE
#define INTERFACE   IDsAdminCreateObj
DECLARE_INTERFACE_( IDsAdminCreateObj, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDsAdminCreateObj methods */
    STDMETHOD( Initialize )( THIS_ IADsContainer *, IADs *, LPCWSTR ) PURE;
    STDMETHOD( CreateModal )( THIS_ HWND, IADs ** ) PURE;
};

/* IDsAdminNewObj interface */
#undef INTERFACE
#define INTERFACE   IDsAdminNewObj
DECLARE_INTERFACE_( IDsAdminNewObj, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDsAdminNewObj methods */
    STDMETHOD( SetButtons )( THIS_ ULONG, BOOL ) PURE;
    STDMETHOD( GetPageCounts )( THIS_ LONG *, LONG * ) PURE;
};

/* IDsAdminNewObjPrimarySite interface */
#undef INTERFACE
#define INTERFACE   IDsAdminNewObjPrimarySite
DECLARE_INTERFACE_( IDsAdminNewObjPrimarySite, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDsAdminNewObjPrimarySite methods */
    STDMETHOD( CreateNew )( THIS_ LPCWSTR ) PURE;
    STDMETHOD( Commit )( THIS ) PURE;
};

/* IDsAdminNewObjExt interface */
#undef INTERFACE
#define INTERFACE   IDsAdminNewObjExt
DECLARE_INTERFACE_( IDsAdminNewObjExt, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDsAdminNewObjExt methods */
    STDMETHOD( Initialize )( THIS_ IADsContainer *, IADs *, LPCWSTR, IDsAdminNewObj *, LPDSA_NEWOBJ_DISPINFO ) PURE;
    STDMETHOD( AddPages )( THIS_ LPFNADDPROPSHEETPAGE, LPARAM ) PURE;
    STDMETHOD( SetObject )( THIS_ IADs * ) PURE;
    STDMETHOD( WriteData )( THIS_ HWND, ULONG ) PURE;
    STDMETHOD( OnError )( THIS_ HWND, HRESULT, ULONG ) PURE;
    STDMETHOD( GetSummaryInfo )( THIS_ BSTR * ) PURE;
};

/* IDsAdminNotifyHandler interface */
#undef INTERFACE
#define INTERFACE   IDsAdminNotifyHandler
DECLARE_INTERFACE_( IDsAdminNotifyHandler, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDsAdminNotifyHandler */
    STDMETHOD( Initialize )( THIS_ IDataObject *, ULONG * ) PURE;
    STDMETHOD( Begin )( THIS_ ULONG, IDataObject *, IDataObject *, ULONG *, BSTR * ) PURE;
    STDMETHOD( Notify )( THIS_ ULONG, ULONG ) PURE;
    STDMETHOD( End )( THIS ) PURE;
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _DSADMIN_H */
