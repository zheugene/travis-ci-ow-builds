/*
 *  ntddkbd.h   Keyboard device I/O control codes
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

#ifndef _NTDDKBD_
#define _NTDDKBD_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Keyboard device name */
#define DD_KEYBOARD_DEVICE_NAME     "\\Device\\KeyboardClass"
#define DD_KEYBOARD_DEVICE_NAME_U   L"\\Device\\KeyboardClass"

/* Keyboard device I/O control codes */
#define IOCTL_KEYBOARD_QUERY_ATTRIBUTES \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0000, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_SET_TYPEMATIC \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0001, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_SET_INDICATORS \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0002, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_QUERY_TYPEMATIC \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0008, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_QUERY_INDICATORS \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0010, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_QUERY_INDICATOR_TRANSLATION \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0020, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_INSERT_DATA \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0040, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_QUERY_IME_STATUS \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0400, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_KEYBOARD_SET_IME_STATUS \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0401, METHOD_BUFFERED, FILE_ANY_ACCESS )

/* Keyboard overrun make code */
#define KEYBOARD_OVERRUN_MAKE_CODE  0x00FF

/* Keyboard input data flags */
#define KEY_MAKE                0x0000
#define KEY_BREAK               0x0001
#define KEY_E0                  0x0002
#define KEY_E1                  0x0004
#define KEY_TERMSRV_SET_LED     0x0008
#define KEY_TERMSRV_SHADOW      0x0010
#define KEY_TERMSRV_VKPACKET    0x0020

/* Keyboard type testing macros */
#define FAREAST_KEYBOARD( x )   ((x).Type == 7 || (x).Type == 8)
#define ENHANCED_KEYBOARD( x )  ((x).Type == 2 || (x).Type == 4 || FAREAST_KEYBOARD( x ))

/* Keyboard indicators */
#define KEYBOARD_LED_INJECTED   0x8000
#define KEYBOARD_SHADOW         0x4000
#define KEYBOARD_KANA_LOCK_ON   0x0008
#define KEYBOARD_CAPS_LOCK_ON   0x0004
#define KEYBOARD_NUM_LOCK_ON    0x0002
#define KEYBOARD_SCROLL_LOCK_ON 0x0001

/* Keyboard error value base */
#define KEYBOARD_ERROR_VALUE_BASE   10000

/* Keyboard input data */
typedef struct _KEYBOARD_INPUT_DATA {
    USHORT  UnitId;
    USHORT  MakeCode;
    USHORT  Flags;
    USHORT  Reserved;
    ULONG   ExtraInformation;
} KEYBOARD_INPUT_DATA;
typedef KEYBOARD_INPUT_DATA *PKEYBOARD_INPUT_DATA;

/* Keyboard typematic parameters */
typedef struct _KEYBOARD_TYPEMATIC_PARAMETERS {
    USHORT  UnitId;
    USHORT  Rate;
    USHORT  Delay;
} KEYBOARD_TYPEMATIC_PARAMETERS;
typedef KEYBOARD_TYPEMATIC_PARAMETERS   *PKEYBOARD_TYPEMATIC_PARAMETERS;

/* Keyboard identifier */
typedef struct _KEYBOARD_ID {
    UCHAR   Type;
    UCHAR   Subtype;
} KEYBOARD_ID;
typedef KEYBOARD_ID *PKEYBOARD_ID;

/* Keyboard attributes */
typedef struct _KEYBOARD_ATTRIBUTES {
    KEYBOARD_ID                     KeyboardIdentifier;
    USHORT                          KeyboardMode;
    USHORT                          NumberOfFunctionKeys;
    USHORT                          NumberOfIndicators;
    USHORT                          NumberOfKeysTotal;
    ULONG                           InputDataQueueLength;
    KEYBOARD_TYPEMATIC_PARAMETERS   KeyRepeatMinimum;
    KEYBOARD_TYPEMATIC_PARAMETERS   KeyRepeatMaximum;
} KEYBOARD_ATTRIBUTES;
typedef KEYBOARD_ATTRIBUTES *PKEYBOARD_ATTRIBUTES;

/* Keyboard indicator parameters */
typedef struct _KEYBOARD_INDICATOR_PARAMETERS {
    USHORT  UnitId;
    USHORT  LedFlags;
} KEYBOARD_INDICATOR_PARAMETERS;
typedef KEYBOARD_INDICATOR_PARAMETERS   *PKEYBOARD_INDICATOR_PARAMETERS;

/* Indicator list */
typedef struct _INDICATOR_LIST {
    USHORT  MakeCode;
    USHORT  IndicatorFlags;
} INDICATOR_LIST;
typedef INDICATOR_LIST  *PINDICATOR_LIST;

/* Keyboard indicator translation */
typedef struct _KEYBOARD_INDICATOR_TRANSLATION {
    USHORT          NumberOfIndicatorKeys;
    INDICATOR_LIST  IndicatorList[1];
} KEYBOARD_INDICATOR_TRANSLATION;
typedef KEYBOARD_INDICATOR_TRANSLATION  *PKEYBOARD_INDICATOR_TRANSLATION;

/* Keyboard unit identifier parameter */
typedef struct _KEYBOARD_UNIT_ID_PARAMETER {
    USHORT  UnitId;
} KEYBOARD_UNIT_ID_PARAMETER;
typedef KEYBOARD_UNIT_ID_PARAMETER  *PKEYBOARD_UNIT_ID_PARAMETER;

/* Keyboard IME status */
typedef struct _KEYBOARD_IME_STATUS {
    USHORT  UnitId;
    ULONG   ImeOpen;
    ULONG   ImeConvMode;
} KEYBOARD_IME_STATUS;
typedef KEYBOARD_IME_STATUS *PKEYBOARD_IME_STATUS;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTDDKBD_ */
