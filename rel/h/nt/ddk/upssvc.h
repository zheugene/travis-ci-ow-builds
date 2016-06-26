/*
 *  upssvc.h    UPS service functions
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

#ifndef _INC_UPS_DRIVER_H_
#define _INC_UPS_DRIVER_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* UPS system states */
#if (NTDDI_VERSION >= 0x05010000) && (NTDDI_VERSION < 0x06000000)
    #define UPS_ONLINE      1
    #define UPS_ONBATTERY   2
    #define UPS_LOWBATTERY  4
    #define UPS_NOCOMM      8
    #define UPS_CRITICAL    16
#endif

/* UPSInit() error codes */
#if (NTDDI_VERSION >= 0x05010000) && (NTDDI_VERSION < 0x06000000)
    #define UPS_INITUNKNOWNERROR    0
    #define UPS_INITOK              1
    #define UPS_INITNOSUCHDRIVER    2
    #define UPS_INITBADINTERFACE    3
    #define UPS_INITREGISTRYERROR   4
    #define UPS_INITCOMMOPENERROR   5
    #define UPS_INITCOMMSETUPERROR  6
#endif

/* Functions exported by UPS minidrivers */
#if (NTDDI_VERSION >= 0x05010000) && (NTDDI_VERSION < 0x06000000)
void NTAPI  UPSCancelWait( void );
DWORD NTAPI UPSGetState( void );
DWORD NTAPI UPSInit( void );
void NTAPI  UPSStop( void );
void NTAPI  UPSTurnOff( DWORD );
void NTAPI  UPSWaitForStateChange( DWORD, DWORD );
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_UPS_DRIVER_H_ */
