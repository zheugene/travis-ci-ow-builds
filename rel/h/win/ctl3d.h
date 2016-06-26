/*
 *  ctl3d.h     3D control functions
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

#ifdef __cplusplus
extern "C" {
#endif

/* Ctl3dSubclassDlg() flags */
#define CTL3D_BUTTONS           0x0001
#define CTL3D_LISTBOXES         0x0002
#define CTL3D_EDITS             0x0004
#define CTL3D_COMBOS            0x0008
#define CTL3D_STATICTEXTS       0x0010
#define CTL3D_STATICFRAMES      0x0020
#define CTL3D_ALL               0xffff

/* Ctl3dSubclassDlgEx() flags */
#define CTL3D_NODLGWINDOW       0x00010000

/* 3D control messages */
#define WM_DLGBORDER    (WM_USER + 3567)
#define WM_DLGSUBCLASS  (WM_USER + 3568)

/* WM_DLGBORDER return codes */
#define CTL3D_NOBORDER  0
#define CTL3D_BORDER    1

/* WM_DLGSUBCLASS return codes */
#define CTL3D_NOSUBCLASS    0
#define CTL3D_SUBCLASS      1

/* 3D control resource identifiers */
#define CTL3D_3DCHECK   26567

#if defined( __WINDOWS_386__ )

BOOL Init32Ctl3d( void );
void Fini32Ctl3d( void );

extern HINDIR DLL32Ctl3dAutoSubclass;
extern HINDIR DLL32Ctl3dSubclassDlg;
extern HINDIR DLL32Ctl3dRegister;
extern HINDIR DLL32Ctl3dUnregister;
extern HINDIR DLL32Ctl3dColorChange;
extern HINDIR DLL32Ctl3dSubclassCtl;
extern HINDIR DLL32Ctl3dCtlColorEx;

#define Ctl3dAutoSubclass( a )      InvokeIndirectFunction( DLL32Ctl3dAutoSubclass, a )
#define Ctl3dSubclassDlg( a, b )    InvokeIndirectFunction( DLL32Ctl3dSubclassDlg, a, b )
#define Ctl3dRegister( a )          InvokeIndirectFunction( DLL32Ctl3dRegister, a )
#define Ctl3dUnregister( a )        InvokeIndirectFunction( DLL32Ctl3dUnregister, a )
#define Ctl3dColorChange( )         InvokeIndirectFunction( DLL32Ctl3dColorChange )
#define Ctl3dSubclassCtl( a )       InvokeIndirectFunction( DLL32Ctl3dSubclassCtl, a )
#define Ctl3dCtlColorEx( a, b, c )  InvokeIndirectFunction( DLL32Ctl3dCtlColorEx, a, b, c )

#elif defined( __WINDOWS__ )

/* Functions in CTL3D.DLL and CTL3DV2.DLL */
BOOL WINAPI     Ctl3dAutoSubclass( HANDLE );
BOOL WINAPI     Ctl3dColorChange( void );
HBRUSH WINAPI   Ctl3dCtlColor( HDC, LONG );
HBRUSH WINAPI   Ctl3dCtlColorEx( UINT, WPARAM, LPARAM );
LONG WINAPI     Ctl3dDlgFramePaint( HWND, UINT, WPARAM, LPARAM );
BOOL WINAPI     Ctl3dEnabled( void );
WORD WINAPI     Ctl3dGetVer( void );
BOOL WINAPI     Ctl3dRegister( HANDLE );
BOOL WINAPI     Ctl3dSubclassCtl( HWND );
BOOL WINAPI     Ctl3dSubclassDlg( HWND, WORD );
BOOL WINAPI     Ctl3dSubclassDlgEx( HWND, DWORD );
BOOL WINAPI     Ctl3dUnregister( HANDLE );
VOID WINAPI     Ctl3dWinIniChange( void );

#else

#define Ctl3dSubclassDlg(a, b)
#define Ctl3dSubclassDlgEx(a, b)
#define Ctl3dGetVer()
#define Ctl3dEnabled()
#define Ctl3dCtlColor( a, b )
#define Ctl3dCtlColorEx( a, b, c )
#define Ctl3dColorChange()
#define Ctl3dSubclassCtl( a )
#define Ctl3dAutoSubclass( a )
#define Ctl3dRegister( a )
#define Ctl3dUnregister( a )

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
