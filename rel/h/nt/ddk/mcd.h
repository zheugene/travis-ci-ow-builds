/*
 *  mcd.h       Medium changer driver definitions
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

#include <scsi.h>
#include <ntddchgr.h>
#include <classpnp.h>
#if (NTDDI_VERSION >= 0x05010000)
    #include <wmidata.h>
    #include <wmistr.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Maximum changer inquiry data */
#define MAXIMUM_CHANGER_INQUIRY_DATA    252

/* Mode page display */
#define MODE_PAGE_DISPLAY   0x22

/* Changer callbacks */
#if (NTDDI_VERSION >= 0x05010000)
typedef NTSTATUS (NTAPI *CHANGER_COMMAND_ROUTINE)( PDEVICE_OBJECT, PIRP );
typedef ULONG (NTAPI *CHANGER_EXTENSION_SIZE)( VOID );
typedef NTSTATUS (NTAPI *CHANGER_INITIALIZE)( PDEVICE_OBJECT );
typedef NTSTATUS (NTAPI *CHANGER_PERFORM_DIAGNOSTICS)( PDEVICE_OBJECT, PWMI_CHANGER_PROBLEM_DEVICE_ERROR );
typedef VOID (NTAPI *CHANGER_ERROR_ROUTINE)( PDEVICE_OBJECT, PSCSI_REQUEST_BLOCK, NTSTATUS *, BOOLEAN * );
#endif

/* Medium changer device initialization data */
#if (NTDDI_VERSION >= 0x05010000)
typedef struct _MCD_INIT_DATA {
    ULONG                       InitDataSize;
    CHANGER_EXTENSION_SIZE      ChangerAdditionalExtensionSize;
    CHANGER_INITIALIZE          ChangerInitialize;
    CHANGER_ERROR_ROUTINE       ChangerError;
    CHANGER_PERFORM_DIAGNOSTICS ChangerPerformDiagnostics;
    CHANGER_COMMAND_ROUTINE     ChangerGetParameters;
    CHANGER_COMMAND_ROUTINE     ChangerGetStatus;
    CHANGER_COMMAND_ROUTINE     ChangerGetProductData;
    CHANGER_COMMAND_ROUTINE     ChangerSetAccess;
    CHANGER_COMMAND_ROUTINE     ChangerGetElementStatus;
    CHANGER_COMMAND_ROUTINE     ChangerInitializeElementStatus;
    CHANGER_COMMAND_ROUTINE     ChangerSetPosition;
    CHANGER_COMMAND_ROUTINE     ChangerExchangeMedium;
    CHANGER_COMMAND_ROUTINE     ChangerMoveMedium;
    CHANGER_COMMAND_ROUTINE     ChangerReinitializeUnit;
    CHANGER_COMMAND_ROUTINE     ChangerQueryVolumeTags;
} MCD_INIT_DATA;
typedef MCD_INIT_DATA   *PMCD_INIT_DATA;
#endif

/* Mode element address page */
typedef struct _MODE_ELEMENT_ADDRESS_PAGE {
    UCHAR   PageCode    : 6;
    UCHAR   Reserved1   : 1;
    UCHAR   PS          : 1;
    UCHAR   PageLength;
    UCHAR   MediumTransportElementAddress[2];
    UCHAR   NumberTransportElements[2];
    UCHAR   FirstStorageElementAddress[2];
    UCHAR   NumberStorageElements[2];
    UCHAR   FirstIEPortElementAddress[2];
    UCHAR   NumberIEPortElements[2];
    UCHAR   FirstDataXFerElementAddress[2];
    UCHAR   NumberDataXFerElements[2];
    UCHAR   Reserved2[2];
} MODE_ELEMENT_ADDRESS_PAGE;
typedef MODE_ELEMENT_ADDRESS_PAGE   *PMODE_ELEMENT_ADDRESS_PAGE;

/* Mode transport geometry page */
typedef struct _MODE_TRANSPORT_GEOMETRY_PAGE {
    UCHAR   PageCode    : 6;
    UCHAR   Reserved1   : 1;
    UCHAR   PS          : 1;
    UCHAR   PageLength;
    UCHAR   Flip        : 1;
    UCHAR   Reserved2   : 7;
    UCHAR   TransportElementNumber;
} MODE_TRANSPORT_GEOMETRY_PAGE;
typedef MODE_TRANSPORT_GEOMETRY_PAGE    *PMODE_TRANSPORT_GEOMETRY_PAGE;

/* Mode device capabilities page */
typedef struct _MODE_DEVICE_CAPABILITIES_PAGE {
    UCHAR   PageCode        : 6;
    UCHAR   Reserved1       : 1;
    UCHAR   PS              : 1;
    UCHAR   PageLength;
    UCHAR   MediumTransport : 1;
    UCHAR   StorageLocation : 1;
    UCHAR   IEPort          : 1;
    UCHAR   DataXFer        : 1;
    UCHAR   Reserved2       : 4;
    UCHAR   Reserved3;
    UCHAR   MTtoMT          : 1;
    UCHAR   MTtoST          : 1;
    UCHAR   MTtoIE          : 1;
    UCHAR   MTtoDT          : 1;
    UCHAR   Reserved4       : 4;
    UCHAR   STtoMT          : 1;
    UCHAR   STtoST          : 1;
    UCHAR   STtoIE          : 1;
    UCHAR   STtoDT          : 1;
    UCHAR   Reserved5       : 4;
    UCHAR   IEtoMT          : 1;
    UCHAR   IEtoST          : 1;
    UCHAR   IEtoIE          : 1;
    UCHAR   IEtoDT          : 1;
    UCHAR   Reserved6       : 4;
    UCHAR   DTtoMT          : 1;
    UCHAR   DTtoST          : 1;
    UCHAR   DTtoIE          : 1;
    UCHAR   DTtoDT          : 1;
    UCHAR   Reserved7       : 4;
    UCHAR   Reserved8[4];
    UCHAR   XMTtoMT         : 1;
    UCHAR   XMTtoST         : 1;
    UCHAR   XMTtoIE         : 1;
    UCHAR   XMTtoDT         : 1;
    UCHAR   Reserved9       : 4;
    UCHAR   XSTtoMT         : 1;
    UCHAR   XSTtoST         : 1;
    UCHAR   XSTtoIE         : 1;
    UCHAR   XSTtoDT         : 1;
    UCHAR   Reserved10      : 4;
    UCHAR   XIEtoMT         : 1;
    UCHAR   XIEtoST         : 1;
    UCHAR   XIEtoIE         : 1;
    UCHAR   XIEtoDT         : 1;
    UCHAR   Reserved11      : 4;
    UCHAR   XDTtoMT         : 1;
    UCHAR   XDTtoST         : 1;
    UCHAR   XDTtoIE         : 1;
    UCHAR   XDTtoDT         : 1;
    UCHAR   Reserved12      : 4;
} MODE_DEVICE_CAPABILITIES_PAGE;
typedef MODE_DEVICE_CAPABILITIES_PAGE   *PMODE_DEVICE_CAPABILITIES_PAGE;

/* Element status header */
typedef struct _ELEMENT_STATUS_HEADER {
    UCHAR   FirstElementAddress[2];
    UCHAR   NumberOfElements[2];
    UCHAR   Reserved1;
    UCHAR   ReportByteCount[3];
} ELEMENT_STATUS_HEADER;
typedef ELEMENT_STATUS_HEADER   *PELEMENT_STATUS_HEADER;

/* Element status page */
typedef struct _ELEMENT_STATUS_PAGE {
    UCHAR   ElementType;
    UCHAR   Reserved1   : 6;
    UCHAR   AVolTag     : 1;
    UCHAR   PVolTag     : 1;
    UCHAR   ElementDescriptorLength[2];
    UCHAR   Reserved2;
    UCHAR   DescriptorByteCount[3];
} ELEMENT_STATUS_PAGE;
typedef ELEMENT_STATUS_PAGE *PELEMENT_STATUS_PAGE;

/* Element descriptor */
typedef struct _ELEMENT_DESCRIPTOR {
    UCHAR   ElementAddress[2];
    UCHAR   Full        : 1;
    UCHAR   Reserved1   : 1;
    UCHAR   Exception   : 1;
    UCHAR   Accessible  : 1;
    UCHAR   Reserved2   : 4;
    UCHAR   Reserved3;
    UCHAR   AdditionalSenseCode;
    UCHAR   AddSenseCodeQualifier;
    UCHAR   Lun         : 3;
    UCHAR   Reserved4   : 1;
    UCHAR   LunValid    : 1;
    UCHAR   IdValid     : 1;
    UCHAR   Reserved5   : 1;
    UCHAR   NotThisBus  : 1;
    UCHAR   BusAddress;
    UCHAR   Reserved6;
    UCHAR   Reserved7   : 6;
    UCHAR   Invert      : 1;
    UCHAR   SValid      : 1;
    UCHAR   SourceStorageElementAddress[2];
} ELEMENT_DESCRIPTOR;
typedef ELEMENT_DESCRIPTOR  *PELEMENT_DESCRIPTOR;

/* Functions in MCD.SYS */
PVOID NTAPI     ChangerClassAllocatePool( POOL_TYPE, ULONG );
VOID NTAPI      ChangerClassFreePool( PVOID );
#if (NTDDI_VERSION >= 0x05010000)
VOID __cdecl    ChangerClassDebugPrint( ULONG, PCCHAR, ... );
NTSTATUS NTAPI  ChangerClassInitialize( PDRIVER_OBJECT, PUNICODE_STRING, PMCD_INIT_DATA );
NTSTATUS NTAPI  ChangerClassSendSrbSynchronous( PDEVICE_OBJECT, PSCSI_REQUEST_BLOCK, PVOID, ULONG, BOOLEAN );
#endif

/* Functions implemented by changer drivers */
ULONG NTAPI     ChangerAdditionalExtensionSize( VOID );
VOID NTAPI      ChangerError( PDEVICE_OBJECT, PSCSI_REQUEST_BLOCK, NTSTATUS *, BOOLEAN * );
NTSTATUS NTAPI  ChangerExchangeMedium( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerGetElementStatus( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerGetParameters( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerGetProductData( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerGetStatus( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerInitialize( PDEVICE_OBJECT );
NTSTATUS NTAPI  ChangerInitializeElementStatus( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerMoveMedium( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerQueryVolumeTags( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerReinitializeUnit( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerSetAccess( PDEVICE_OBJECT, PIRP );
NTSTATUS NTAPI  ChangerSetPosition( PDEVICE_OBJECT, PIRP );
#if (NTDDI_VERSION >= 0x05010000)
NTSTATUS NTAPI  ChangerPerformDiagnostics( PDEVICE_OBJECT, PWMI_CHANGER_PROBLEM_DEVICE_ERROR );
#endif

/* Functions implemented as macros */
#if (NTDDI_VERSION >= 0x05010000)
    #undef DebugPrint
    #if DBG
        #define DebugPrint( x ) ChangerClassDebugPrint x
    #else
        #define DebugPrint( x )
    #endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
