/*
 *  bsesub.h    OS/2 Base subsystems include file for 32-bit development.
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

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef INCL_SUB
    #define INCL_KBD
    #define INCL_MOU
    #define INCL_VIO
#endif

#ifdef INCL_KBD

#define Kbd16CharIn      KBD16CHARIN
#define Kbd16Close       KBD16CLOSE
#define Kbd16DeRegister  KBD16DEREGISTER
#define Kbd16FlushBuffer KBD16FLUSHBUFFER
#define Kbd16FreeFocus   KBD16FREEFOCUS
#define Kbd16GetCp       KBD16GETCP
#define Kbd16GetFocus    KBD16GETFOCUS
#define Kbd16GetHWID     KBD16GETHWID
#define Kbd16GetStatus   KBD16GETSTATUS
#define Kbd16Open        KBD16OPEN
#define Kbd16Peek        KBD16PEEK
#define Kbd16Register    KBD16REGISTER
#define Kbd16SetCp       KBD16SETCP
#define Kbd16SetCustXt   KBD16SETCUSTXT
#define Kbd16SetFgnd     KBD16SETFGND
#define Kbd16SetHWID     KBD16SETHWID
#define Kbd16SetStatus   KBD16SETSTATUS
#define Kbd16StringIn    KBD16STRINGIN
#define Kbd16Synch       KBD16SYNCH
#define Kbd16Xlate       KBD16XLATE

#define KbdCharIn        KBD16CHARIN
#define KbdClose         KBD16CLOSE
#define KbdDeRegister    KBD16DEREGISTER
#define KbdFlushBuffer   KBD16FLUSHBUFFER
#define KbdFreeFocus     KBD16FREEFOCUS
#define KbdGetCp         KBD16GETCP
#define KbdGetFocus      KBD16GETFOCUS
#define KbdGetHWID       KBD16GETHWID
#define KbdGetStatus     KBD16GETSTATUS
#define KbdOpen          KBD16OPEN
#define KbdPeek          KBD16PEEK
#define KbdRegister      KBD16REGISTER
#define KbdSetCp         KBD16SETCP
#define KbdSetCustXt     KBD16SETCUSTXT
#define KbdSetFgnd       KBD16SETFGND
#define KbdSetHWID       KBD16SETHWID
#define KbdSetStatus     KBD16SETSTATUS
#define KbdStringIn      KBD16STRINGIN
#define KbdSynch         KBD16SYNCH
#define KbdXlate         KBD16XLATE

#define KR_KBDCHARIN       0x0001
#define KR_KBDPEEK         0x0002
#define KR_KBDFLUSHBUFFER  0x0004
#define KR_KBDGETSTATUS    0x0008
#define KR_KBDSETSTATUS    0x0010
#define KR_KBDSTRINGIN     0x0020
#define KR_KBDOPEN         0x0040
#define KR_KBDCLOSE        0x0080
#define KR_KBDGETFOCUS     0x0100
#define KR_KBDFREEFOCUS    0x0200
#define KR_KBDGETCP        0x0400
#define KR_KBDSETCP        0x0800
#define KR_KBDXLATE        0x1000
#define KR_KBDSETCUSTXT    0x2000

#define KEYBOARD_ECHO_ON           0x0001
#define KEYBOARD_ECHO_OFF          0x0002
#define KEYBOARD_BINARY_MODE       0x0004
#define KEYBOARD_ASCII_MODE        0x0008
#define KEYBOARD_MODIFY_STATE      0x0010
#define KEYBOARD_MODIFY_INTERIM    0x0020
#define KEYBOARD_MODIFY_TURNAROUND 0x0040
#define KEYBOARD_2B_TURNAROUND     0x0080
#define KEYBOARD_SHIFT_REPORT      0x0100

#define IO_WAIT   0
#define IO_NOWAIT 1

#define KBDTRF_SHIFT_KEY_IN       0x01
#define KBDTRF_CONVERSION_REQUEST 0x20
#define KBDTRF_FINAL_CHAR_IN      0x40
#define KBDTRF_INTERIM_CHAR_IN    0x80

#ifndef INCL_DOSDEVIOCTL

#define KBDSTF_RIGHTSHIFT    0x0001
#define KBDSTF_LEFTSHIFT     0x0002
#define KBDSTF_CONTROL       0x0004
#define KBDSTF_ALT           0x0008
#define KBDSTF_SCROLLLOCK_ON 0x0010
#define KBDSTF_NUMLOCK_ON    0x0020
#define KBDSTF_CAPSLOCK_ON   0x0040
#define KBDSTF_INSERT_ON     0x0080
#define KBDSTF_LEFTCONTROL   0x0100
#define KBDSTF_LEFTALT       0x0200
#define KBDSTF_RIGHTCONTROL  0x0400
#define KBDSTF_RIGHTALT      0x0800
#define KBDSTF_SCROLLLOCK    0x1000
#define KBDSTF_NUMLOCK       0x2000
#define KBDSTF_CAPSLOCK      0x4000
#define KBDSTF_SYSREQ        0x8000

#endif

typedef SHANDLE HKBD;
typedef HKBD    *PHKBD;

#pragma pack(2)

typedef struct _KBDKEYINFO {
    UCHAR  chChar;
    UCHAR  chScan;
    UCHAR  fbStatus;
    UCHAR  bNlsShift;
    USHORT fsState;
    ULONG  time;
}KBDKEYINFO, *PKBDKEYINFO;

typedef struct _KBDTRANS {
    UCHAR  chChar;
    UCHAR  chScan;
    UCHAR  fbStatus;
    UCHAR  bNlsShift;
    USHORT fsState;
    ULONG  time;
    USHORT fsDD;
    USHORT fsXlate;
    USHORT fsShift;
    USHORT sZero;
} KBDTRANS, *PKBDTRANS;

#pragma pack()

typedef struct _KBDHWID {
    USHORT length;
    USHORT kbd_id;
    USHORT reserved1;
    USHORT reserved2;
}KBDHWID, *PKBDHWID;

typedef struct _KBDINFO {
    USHORT cb;
    USHORT fsMask;
    USHORT chTurnAround;
    USHORT fsInterim;
    USHORT fsState;
} KBDINFO, *PKBDINFO;

typedef struct _STRINGINBUF {
    USHORT cb;
    USHORT cchIn;
} STRINGINBUF, *PSTRINGINBUF;

USHORT APIENTRY16 KbdCharIn(PKBDKEYINFO,USHORT,HKBD);
USHORT APIENTRY16 KbdClose(HKBD);
USHORT APIENTRY16 KbdDeRegister(VOID);
USHORT APIENTRY16 KbdFlushBuffer(HKBD);
USHORT APIENTRY16 KbdFreeFocus(HKBD);
USHORT APIENTRY16 KbdGetCp(ULONG,PUSHORT,HKBD);
USHORT APIENTRY16 KbdGetFocus(USHORT,HKBD);
USHORT APIENTRY16 KbdGetHWId(PKBDHWID,HKBD);
USHORT APIENTRY16 KbdGetStatus(PKBDINFO,HKBD);
USHORT APIENTRY16 KbdOpen(PHKBD);
USHORT APIENTRY16 KbdPeek(PKBDKEYINFO,HKBD);
USHORT APIENTRY16 KbdRegister(PSZ,PSZ,ULONG);
USHORT APIENTRY16 KbdSetCp(USHORT,USHORT,HKBD);
USHORT APIENTRY16 KbdSetCustXt(PUSHORT,HKBD);
USHORT APIENTRY16 KbdSetFgnd(VOID);
USHORT APIENTRY16 KbdSetStatus(PKBDINFO,HKBD);
USHORT APIENTRY16 KbdStringIn(PCH,PSTRINGINBUF,USHORT,HKBD);
USHORT APIENTRY16 KbdSynch(USHORT);
USHORT APIENTRY16 KbdXlate(PKBDTRANS,HKBD);

#endif

#ifdef INCL_MOU

#define Mou16Close         MOU16CLOSE
#define Mou16DeRegister    MOU16DEREGISTER
#define Mou16DrawPtr       MOU16DRAWPTR
#define Mou16FlushQue      MOU16FLUSHQUE
#define Mou16GetDevStatus  MOU16GETDEVSTATUS
#define Mou16GetEventMask  MOU16GETEVENTMASK
#define Mou16GetNumButtons MOU16GETNUMBUTTONS
#define Mou16GetNumMickeys MOU16GETNUMMICKEYS
#define Mou16GetNumQueEl   MOU16GETNUMQUEEL
#define Mou16GetPtrPos     MOU16GETPTRPOS
#define Mou16GetPtrShape   MOU16GETPTRSHAPE
#define Mou16GetScaleFact  MOU16GETSCALEFACT
#define Mou16GetThreshold  MOU16GETTHRESHOLD
#define Mou16InitReal      MOU16INITREAL
#define Mou16Open          MOU16OPEN
#define Mou16ReadEventQue  MOU16READEVENTQUE
#define Mou16Register      MOU16REGISTER
#define Mou16RemovePtr     MOU16REMOVEPTR
#define Mou16SetDevStatus  MOU16SETDEVSTATUS
#define Mou16SetEventMask  MOU16SETEVENTMASK
#define Mou16SetPtrPos     MOU16SETPTRPOS
#define Mou16SetPtrShape   MOU16SETPTRSHAPE
#define Mou16SetScaleFact  MOU16SETSCALEFACT
#define Mou16SetThreshold  MOU16SETTHRESHOLD
#define Mou16Synch         MOU16SYNCH

#define MouClose           MOU16CLOSE
#define MouDeRegister      MOU16DEREGISTER
#define MouDrawPtr         MOU16DRAWPTR
#define MouFlushQue        MOU16FLUSHQUE
#define MouGetDevStatus    MOU16GETDEVSTATUS
#define MouGetEventMask    MOU16GETEVENTMASK
#define MouGetNumButtons   MOU16GETNUMBUTTONS
#define MouGetNumMickeys   MOU16GETNUMMICKEYS
#define MouGetNumQueEl     MOU16GETNUMQUEEL
#define MouGetPtrPos       MOU16GETPTRPOS
#define MouGetPtrShape     MOU16GETPTRSHAPE
#define MouGetScaleFact    MOU16GETSCALEFACT
#define MouGetThreshold    MOU16GETTHRESHOLD
#define MouInitReal        MOU16INITREAL
#define MouOpen            MOU16OPEN
#define MouReadEventQue    MOU16READEVENTQUE
#define MouRegister        MOU16REGISTER
#define MouRemovePtr       MOU16REMOVEPTR
#define MouSetDevStatus    MOU16SETDEVSTATUS
#define MouSetEventMask    MOU16SETEVENTMASK
#define MouSetPtrPos       MOU16SETPTRPOS
#define MouSetPtrShape     MOU16SETPTRSHAPE
#define MouSetScaleFact    MOU16SETSCALEFACT
#define MouSetThreshold    MOU16SETTHRESHOLD
#define MouSynch           MOU16SYNCH

#define MR_MOUGETNUMBUTTONS 0x00000001
#define MR_MOUGETNUMMICKEYS 0x00000002
#define MR_MOUGETDEVSTATUS  0x00000004
#define MR_MOUGETNUMQUEEL   0x00000008
#define MR_MOUREADEVENTQUE  0x00000010
#define MR_MOUGETSCALEFACT  0x00000020
#define MR_MOUGETEVENTMASK  0x00000040
#define MR_MOUSETSCALEFACT  0x00000080
#define MR_MOUSETEVENTMASK  0x00000100
#define MR_MOUOPEN          0x00000800
#define MR_MOUCLOSE         0x00001000
#define MR_MOUGETPTRSHAPE   0x00002000
#define MR_MOUSETPTRSHAPE   0x00004000
#define MR_MOUDRAWPTR       0x00008000
#define MR_MOUREMOVEPTR     0x00010000
#define MR_MOUGETPTRPOS     0x00020000
#define MR_MOUSETPTRPOS     0x00040000
#define MR_MOUINITREAL      0x00080000
#define MR_MOUSETDEVSTATUS  0x00100000

#define MHK_BUTTON1 1
#define MHK_BUTTON2 2
#define MHK_BUTTON3 4

#define MOU_NODRAW  1
#define MOU_DRAW    0
#define MOU_MICKEYS 2
#define MOU_PELS    0

#define MOU_NOWAIT 0
#define MOU_WAIT   1

#define MOUSE_MOTION               0x0001
#define MOUSE_MOTION_WITH_BN1_DOWN 0x0002
#define MOUSE_BN1_DOWN             0x0004
#define MOUSE_MOTION_WITH_BN2_DOWN 0x0008
#define MOUSE_BN2_DOWN             0x0010
#define MOUSE_MOTION_WITH_BN3_DOWN 0x0020
#define MOUSE_BN3_DOWN             0x0040

#define MOUSE_QUEUEBUSY        0x0001
#define MOUSE_BLOCKREAD        0x0002
#define MOUSE_FLUSH            0x0004
#define MOUSE_UNSUPPORTED_MODE 0x0008
#define MOUSE_DISABLED         0x0100
#define MOUSE_MICKEYS          0x0200

typedef SHANDLE  HMOU;
typedef HMOU     *PHMOU;

typedef struct _MOUQUEINFO {
    USHORT cEvents;
    USHORT cmaxEvents;
} MOUQUEINFO, *PMOUQUEINFO;

typedef struct _PTRLOC {
    USHORT row;
    USHORT col;
} PTRLOC, *PPTRLOC;

typedef struct _PTRSHAPE {
    USHORT cb;
    USHORT col;
    USHORT row;
    USHORT colHot;
    USHORT rowHot;
} PTRSHAPE, *PPTRSHAPE;

typedef struct _SCALEFACT {
    USHORT rowScale;
    USHORT colScale;
} SCALEFACT, *PSCALEFACT;

typedef _Packed struct _MOUEVENTINFO {
    USHORT fs;
    ULONG  time;
    SHORT  row;
    SHORT  col;
} MOUEVENTINFO, *PMOUEVENTINFO;

typedef struct _NOPTRRECT {
    USHORT row;
    USHORT col;
    USHORT cRow;
    USHORT cCol;
} NOPTRRECT, *PNOPTRRECT;

USHORT APIENTRY16 MouClose(HMOU);
USHORT APIENTRY16 MouDeRegister(VOID);
USHORT APIENTRY16 MouDrawPtr(HMOU);
USHORT APIENTRY16 MouFlushQue(HMOU);
USHORT APIENTRY16 MouGetDevStatus(PUSHORT,HMOU);
USHORT APIENTRY16 MouGetEventMask(PUSHORT,HMOU);
USHORT APIENTRY16 MouGetNumButtons(PUSHORT,HMOU);
USHORT APIENTRY16 MouGetNumMickeys(PUSHORT,HMOU);
USHORT APIENTRY16 MouGetNumQueEl(PMOUQUEINFO,HMOU);
USHORT APIENTRY16 MouGetPtrPos(PPTRLOC,HMOU);
USHORT APIENTRY16 MouGetPtrShape(PBYTE,PPTRSHAPE,HMOU);
USHORT APIENTRY16 MouGetScaleFact(PSCALEFACT,HMOU);
USHORT APIENTRY16 MouInitReal(PSZ);
USHORT APIENTRY16 MouOpen(PSZ,PHMOU);
USHORT APIENTRY16 MouReadEventQue(PMOUEVENTINFO,PUSHORT,HMOU);
USHORT APIENTRY16 MouRegister(PSZ,PSZ,ULONG);
USHORT APIENTRY16 MouRemovePtr(PNOPTRRECT,HMOU);
USHORT APIENTRY16 MouSetDevStatus(PUSHORT,HMOU);
USHORT APIENTRY16 MouSetEventMask(PUSHORT,HMOU);
USHORT APIENTRY16 MouSetPtrPos(PPTRLOC,HMOU);
USHORT APIENTRY16 MouSetPtrShape(PBYTE,PPTRSHAPE,HMOU);
USHORT APIENTRY16 MouSetScaleFact(PSCALEFACT,HMOU);
USHORT APIENTRY16 MouSynch(USHORT);

#endif

#ifdef INCL_VIO

#define Vio16CheckCharType VIO16CHECKCHARTYPE
#define Vio16DeRegister    VIO16DEREGISTER
#define Vio16EndPopUp      VIO16ENDPOPUP
#define Vio16GetAnsi       VIO16GETANSI
#define Vio16GetBuf        VIO16GETBUF
#define Vio16GetConfig     VIO16GETCONFIG
#define Vio16GetCp         VIO16GETCP
#define Vio16GetCurPos     VIO16GETCURPOS
#define Vio16GetCurType    VIO16GETCURTYPE
#define Vio16GetFont       VIO16GETFONT
#define Vio16GetMode       VIO16GETMODE
#define Vio16GetPhysBuf    VIO16GETPHYSBUF
#define Vio16GetState      VIO16GETSTATE
#define Vio16ModeUndo      VIO16MODEUNDO
#define Vio16ModeWait      VIO16MODEWAIT
#define Vio16PopUp         VIO16POPUP
#define Vio16PrtSc         VIO16PRTSC
#define Vio16PrtScToggle   VIO16PRTSCTOGGLE
#define Vio16ReadCellStr   VIO16READCELLSTR
#define Vio16ReadCharStr   VIO16READCHARSTR
#define Vio16RedrawSize    VIO16REDRAWSIZE
#define Vio16Register      VIO16REGISTER
#define Vio16SavRedrawUndo VIO16SAVREDRAWUNDO
#define Vio16SavRedrawWait VIO16SAVREDRAWWAIT
#define Vio16ScrLock       VIO16SCRLOCK
#define Vio16ScrUnLock     VIO16SCRUNLOCK
#define Vio16ScrollDn      VIO16SCROLLDN
#define Vio16ScrollLf      VIO16SCROLLLF
#define Vio16ScrollRt      VIO16SCROLLRT
#define Vio16ScrollUp      VIO16SCROLLUP
#define Vio16SetAnsi       VIO16SETANSI
#define Vio16SetCp         VIO16SETCP
#define Vio16SetCurPos     VIO16SETCURPOS
#define Vio16SetCurType    VIO16SETCURTYPE
#define Vio16SetFont       VIO16SETFONT
#define Vio16SetMode       VIO16SETMODE
#define Vio16SetState      VIO16SETSTATE
#define Vio16ShowBuf       VIO16SHOWBUF
#define Vio16WrtCellStr    VIO16WRTCELLSTR
#define Vio16WrtCharStr    VIO16WRTCHARSTR
#define Vio16WrtCharStrAtt VIO16WRTCHARSTRATT
#define Vio16WrtNAttr      VIO16WRTNATTR
#define Vio16WrtNCell      VIO16WRTNCELL
#define Vio16WrtNChar      VIO16WRTNCHAR
#define Vio16WrtTTY        VIO16WRTTTY

#define VioDeRegister      VIO16DEREGISTER
#define VioEndPopUp        VIO16ENDPOPUP
#define VioGetAnsi         VIO16GETANSI
#define VioGetBuf          VIO16GETBUF
#define VioGetConfig       VIO16GETCONFIG
#define VioGetCp           VIO16GETCP
#define VioGetCurPos       VIO16GETCURPOS
#define VioGetCurType      VIO16GETCURTYPE
#define VioGetFont         VIO16GETFONT
#define VioGetMode         VIO16GETMODE
#define VioGetPhysBuf      VIO16GETPHYSBUF
#define VioGetState        VIO16GETSTATE
#define VioModeUndo        VIO16MODEUNDO
#define VioModeWait        VIO16MODEWAIT
#define VioPopUp           VIO16POPUP
#define VioPrtSc           VIO16PRTSC
#define VioPrtScToggle     VIO16PRTSCTOGGLE
#define VioReadCellStr     VIO16READCELLSTR
#define VioReadCharStr     VIO16READCHARSTR
#define VioRedrawSize      VIO16REDRAWSIZE
#define VioRegister        VIO16REGISTER
#define VioSavRedrawUndo   VIO16SAVREDRAWUNDO
#define VioSavRedrawWait   VIO16SAVREDRAWWAIT
#define VioScrLock         VIO16SCRLOCK
#define VioScrUnLock       VIO16SCRUNLOCK
#define VioScrollDn        VIO16SCROLLDN
#define VioScrollLf        VIO16SCROLLLF
#define VioScrollRt        VIO16SCROLLRT
#define VioScrollUp        VIO16SCROLLUP
#define VioSetAnsi         VIO16SETANSI
#define VioSetCp           VIO16SETCP
#define VioSetCurPos       VIO16SETCURPOS
#define VioSetCurType      VIO16SETCURTYPE
#define VioSetFont         VIO16SETFONT
#define VioSetMode         VIO16SETMODE
#define VioSetState        VIO16SETSTATE
#define VioShowBuf         VIO16SHOWBUF
#define VioWrtCellStr      VIO16WRTCELLSTR
#define VioWrtCharStr      VIO16WRTCHARSTR
#define VioWrtCharStrAtt   VIO16WRTCHARSTRATT
#define VioWrtNAttr        VIO16WRTNATTR
#define VioWrtNCell        VIO16WRTNCELL
#define VioWrtNChar        VIO16WRTNCHAR
#define VioWrtTTY          VIO16WRTTTY

#define VR_VIOGETCURPOS    0x00000001
#define VR_VIOGETCURTYPE   0x00000002
#define VR_VIOGETMODE      0x00000004
#define VR_VIOGETBUF       0x00000008
#define VR_VIOGETPHYSBUF   0x00000010
#define VR_VIOSETCURPOS    0x00000020
#define VR_VIOSETCURTYPE   0x00000040
#define VR_VIOSETMODE      0x00000080
#define VR_VIOSHOWBUF      0x00000100
#define VR_VIOREADCHARSTR  0x00000200
#define VR_VIOREADCELLSTR  0x00000400
#define VR_VIOWRTNCHAR     0x00000800
#define VR_VIOWRTNATTR     0x00001000
#define VR_VIOWRTNCELL     0x00002000
#define VR_VIOWRTTTY       0x00004000
#define VR_VIOWRTCHARSTR   0x00008000

#define VR_VIOWRTCHARSTRATT  0x00010000
#define VR_VIOWRTCELLSTR     0x00020000
#define VR_VIOSCROLLUP       0x00040000
#define VR_VIOSCROLLDN       0x00080000
#define VR_VIOSCROLLLF       0x00100000
#define VR_VIOSCROLLRT       0x00200000
#define VR_VIOSETANSI        0x00400000
#define VR_VIOGETANSI        0x00800000
#define VR_VIOPRTSC          0x01000000
#define VR_VIOSCRLOCK        0x02000000
#define VR_VIOSCRUNLOCK      0x04000000
#define VR_VIOSAVREDRAWWAIT  0x08000000
#define VR_VIOSAVREDRAWUNDO  0x10000000
#define VR_VIOPOPUP          0x20000000
#define VR_VIOENDPOPUP       0x40000000
#define VR_VIOPRTSCTOGGLE    0x80000000

#define VR_VIOMODEWAIT  0x00000001
#define VR_VIOMODEUNDO  0x00000002
#define VR_VIOGETFONT   0x00000004
#define VR_VIOGETCONFIG 0x00000008
#define VR_VIOSETCP     0x00000010
#define VR_VIOGETCP     0x00000020
#define VR_VIOSETFONT   0x00000040
#define VR_VIOGETSTATE  0x00000080
#define VR_VIOSETSTATE  0x00000100

#define ANSI_ON  1
#define ANSI_OFF 0

#define VGFI_GETCURFONT 0
#define VGFI_GETROMFONT 1

#define VGMT_OTHER         1
#define VGMT_GRAPHICS      2
#define VGMT_DISABLEBURST  4

#define VSRWI_SAVEANDREDRAW 0
#define VSRWI_REDRAW        1

#define VSRWN_SAVE          0
#define VSRWN_REDRAW        1

#define UNDOI_GETOWNER      0
#define UNDOI_RELEASEOWNER  1

#define UNDOK_ERRORCODE     0
#define UNDOK_TERMINATE     1

#define LOCKIO_NOWAIT 0
#define LOCKIO_WAIT   1

#define LOCK_SUCCESS  0
#define LOCK_FAIL     1

#define VP_NOWAIT      0
#define VP_WAIT        1
#define VP_OPAQUE      0
#define VP_TRANSPARENT 2

#define VMWR_POPUP 0
#define VMWN_POPUP 0

#define COLORS_2  1
#define COLORS_4  2
#define COLORS_16 4

#define DISPLAY_MONOCHROME      0
#define DISPLAY_CGA             1
#define DISPLAY_EGA             2
#define DISPLAY_VGA             3
#define DISPLAY_8514A           7
#define DISPLAY_IMAGEADAPTER    8
#define DISPLAY_XGA             9
#define DISPLAY_SVGA           10

#define MONITOR_MONOCHROME      0
#define MONITOR_COLOR           1
#define MONITOR_ENHANCED        2
#define MONITOR_8503            3
#define MONITOR_851X_COLOR      4
#define MONITOR_8514            9
#define MONITOR_FLATPANEL      10
#define MONITOR_8507_8604      11
#define MONITOR_8515           12
#define MONITOR_9515           15
#define MONITOR_9517           17
#define MONITOR_9518           18
#define MONITOR_OEM            19

typedef SHANDLE  HVIO;
typedef HVIO     *PHVIO;

typedef _Packed struct _VIOCONFIGINFO {
    USHORT  cb;
    USHORT  adapter;
    USHORT  display;
    ULONG   cbMemory;
    USHORT  Configuration;
    USHORT  VDHVersion;
    USHORT  Flags;
    ULONG   HWBufferSize;
    ULONG   FullSaveSize;
    ULONG   PartSaveSize;
    USHORT  EMAdaptersOFF;
    USHORT  EMDisplaysOFF;
} VIOCONFIGINFO, *PVIOCONFIGINFO;

typedef struct _VIOCURSORINFO {
    USHORT   yStart;
    USHORT   cEnd;
    USHORT   cx;
    USHORT   attr;
} VIOCURSORINFO, *PVIOCURSORINFO;

typedef _Packed struct _VIOFONTINFO {
    USHORT  cb;
    USHORT  type;
    USHORT  cxCell;
    USHORT  cyCell;
    PVOID16 pbData;
    USHORT  cbData;
} VIOFONTINFO, *PVIOFONTINFO;

typedef _Packed struct _VIOMODEINFO {
    USHORT cb;
    UCHAR  fbType;
    UCHAR  color;
    USHORT col;
    USHORT row;
    USHORT hres;
    USHORT vres;
    UCHAR  fmt_ID;
    UCHAR  attrib;
    ULONG  buf_addr;
    ULONG  buf_length;
    ULONG  full_length;
    ULONG  partial_length;
    PCH    ext_data_addr;
} VIOMODEINFO, *PVIOMODEINFO;

typedef struct _VIOPHYSBUF {
    PBYTE    pBuf;
    ULONG    cb;
    SEL      asel[1];
} VIOPHYSBUF, *PVIOPHYSBUF;

typedef struct _VIOPALSTATE {
    USHORT  cb;
    USHORT  type;
    USHORT  iFirst;
    USHORT  acolor[1];
} VIOPALSTATE, *PVIOPALSTATE;

typedef struct _VIOOVERSCAN {
    USHORT  cb;
    USHORT  type;
    USHORT  color;
} VIOOVERSCAN, *PVIOOVERSCAN;

typedef struct _VIOINTENSITY {
    USHORT  cb;
    USHORT  type;
    USHORT  fs;
} VIOINTENSITY, *PVIOINTENSITY;

typedef struct _VIOCOLORREG {
    USHORT  cb;
    USHORT  type;
    USHORT  firstcolorreg;
    USHORT  numcolorregs;
    PCH     colorregaddr;
} VIOCOLORREG, *PVIOCOLORREG;

typedef struct _VIOSETULINELOC {
    USHORT  cb;
    USHORT  type;
    USHORT  scanline;
} VIOSETULINELOC, *PVIOSETULINELOC;

typedef struct _VIOSETTARGET {
    USHORT  cb;
    USHORT  type;
    USHORT  defaultalgorithm;
} VIOSETTARGET, *PVIOSETTARGET;

USHORT APIENTRY16 VioDeRegister(VOID);
USHORT APIENTRY16 VioEndPopUp(HVIO);
USHORT APIENTRY16 VioGetAnsi(PUSHORT,HVIO);
USHORT APIENTRY16 VioGetBuf(PULONG,PUSHORT,HVIO);
USHORT APIENTRY16 VioGetConfig(USHORT,PVIOCONFIGINFO,HVIO);
USHORT APIENTRY16 VioGetCp(USHORT,PUSHORT,HVIO);
USHORT APIENTRY16 VioGetCurPos(PUSHORT,PUSHORT,HVIO);
USHORT APIENTRY16 VioGetCurType(PVIOCURSORINFO,HVIO);
USHORT APIENTRY16 VioGetFont(PVIOFONTINFO,HVIO);
USHORT APIENTRY16 VioGetMode(PVIOMODEINFO,HVIO);
USHORT APIENTRY16 VioGetPhysBuf(PVIOPHYSBUF,USHORT);
USHORT APIENTRY16 VioGetState(PVOID,HVIO);
USHORT APIENTRY16 VioGlobalReg(PSZ,PSZ,ULONG,ULONG,LONG);
USHORT APIENTRY16 VioModeUndo(USHORT,USHORT,USHORT);
USHORT APIENTRY16 VioModeWait(USHORT,PUSHORT,USHORT);
USHORT APIENTRY16 VioPopUp(PUSHORT,HVIO);
USHORT APIENTRY16 VioPrtSc(HVIO);
USHORT APIENTRY16 VioPrtScToggle(HVIO);
USHORT APIENTRY16 VioReadCellStr(PCH,PUSHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioReadCharStr(PCH,PUSHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioRegister(PSZ,PSZ,ULONG,ULONG);
USHORT APIENTRY16 VioSavRedrawUndo(USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioSavRedrawWait(USHORT,PUSHORT,HVIO);
USHORT APIENTRY16 VioScrLock(USHORT,PUCHAR,HVIO);
USHORT APIENTRY16 VioScrollDn(USHORT,USHORT,USHORT,USHORT,USHORT,PBYTE,HVIO);
USHORT APIENTRY16 VioScrollLf(USHORT,USHORT,USHORT,USHORT,USHORT,PBYTE,HVIO);
USHORT APIENTRY16 VioScrollRt(USHORT,USHORT,USHORT,USHORT,USHORT,PBYTE,HVIO);
USHORT APIENTRY16 VioScrollUp(USHORT,USHORT,USHORT,USHORT,USHORT,PBYTE,HVIO);
USHORT APIENTRY16 VioScrUnLock(HVIO);
USHORT APIENTRY16 VioSetAnsi(USHORT,HVIO);
USHORT APIENTRY16 VioSetCp(USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioSetCurPos(USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioSetCurType(PVIOCURSORINFO,HVIO);
USHORT APIENTRY16 VioSetFont(PVIOFONTINFO,HVIO);
USHORT APIENTRY16 VioSetMode(PVIOMODEINFO,HVIO);
USHORT APIENTRY16 VioSetState(PVOID,HVIO);
USHORT APIENTRY16 VioShowBuf(USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtCellStr(PCH,USHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtCharStr(PCH,USHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtCharStrAtt(PCH,USHORT,USHORT,USHORT,PBYTE,HVIO);
USHORT APIENTRY16 VioWrtNAttr(PBYTE,USHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtNCell(PBYTE,USHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtNChar(PBYTE,USHORT,USHORT,USHORT,HVIO);
USHORT APIENTRY16 VioWrtTTY(PCH,USHORT,HVIO);

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
