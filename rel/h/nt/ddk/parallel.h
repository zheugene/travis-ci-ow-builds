/*
 *  parallel.h   Parallel port definitions
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

#ifndef _PARALLEL_
#define _PARALLEL_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <parallel.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Parallel port device name */
#define DD_PARALLEL_PORT_BASE_NAME_U    L"ParallelPort"

/* Daisy-chain maximum identifier */
#define IEEE_1284_3_DAISY_CHAIN_MAX_ID  3

/* Parallel port internal device I/O control codes */
#define IOCTL_INTERNAL_PARALLEL_PORT_ALLOCATE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 11, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_GET_PARALLEL_PORT_INFO \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 12, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARALLEL_CONNECT_INTERRUPT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 13, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARALLEL_DISCONNECT_INTERRUPT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 14, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_RELEASE_PARALLEL_PORT_INFO \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 15, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_GET_MORE_PARALLEL_PORT_INFO \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 17, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARCHIP_CONNECT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 18, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARALLEL_SET_CHIP_MODE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 19, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARALLEL_CLEAR_CHIP_MODE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 20, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_GET_PARALLEL_PNP_INFO \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 21, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_INIT_1284_3_BUS \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 22, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_SELECT_DEVICE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 23, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_DESELECT_DEVICE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 24, METHOD_BUFFERED, FILE_ANY_ACCESS )
#if (NTDDI_VERSION >= 0x05010000)
    #define IOCTL_INTERNAL_GET_PARPORT_FDO \
        CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 29, METHOD_BUFFERED, FILE_ANY_ACCESS )
#endif
#define IOCTL_INTERNAL_PARCLASS_CONNECT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 30, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARCLASS_DISCONNECT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 31, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_DISCONNECT_IDLE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 32, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_LOCK_PORT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 37, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_UNLOCK_PORT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 38, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARALLEL_PORT_FREE \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 40, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARDOT3_CONNECT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 41, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARDOT3_DISCONNECT \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 42, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARDOT3_RESET \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 43, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_PARDOT3_SIGNAL \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 44, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_REGISTER_FOR_REMOVAL_RELATIONS \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 50, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_UNREGISTER_FOR_REMOVAL_RELATIONS \
    CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 51, METHOD_BUFFERED, FILE_ANY_ACCESS )
#if (NTDDI_VERSION >= 0x05010000)
    #define IOCTL_INTERNAL_LOCK_PORT_NO_SELECT \
        CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 52, METHOD_BUFFERED, FILE_ANY_ACCESS )
    #define IOCTL_INTERNAL_UNLOCK_PORT_NO_SELECT \
        CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 53, METHOD_BUFFERED, FILE_ANY_ACCESS )
    #define IOCTL_INTERNAL_DISABLE_END_OF_CHAIN_BUS_RESCAN \
        CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 54, METHOD_BUFFERED, FILE_ANY_ACCESS )
    #define IOCTL_INTERNAL_ENABLE_END_OF_CHAIN_BUS_RESCAN \
        CTL_CODE( FILE_DEVICE_PARALLEL_PORT, 55, METHOD_BUFFERED, FILE_ANY_ACCESS )
#endif

/* Mode qualifier lengths */
#define MODE_LEN_1284_3     7
#define LEGACYZIP_MODE_LEN  3

/* 1284.3 commands */
#define CPP_ASSIGN_ADDR     0x00
#define CPP_SELECT          0xE0
#define CPP_DESELECT        0x30
#define CPP_QUERY_INT       0x08
#define CPP_DISABLE_INT     0x40
#define CPP_ENABLE_INT      0x48
#define CPP_CLEAR_INT_LAT   0x50
#define CPP_SET_INT_LAT     0x58
#define CPP_COMMAND_FILTER  0xF8

/* Parallel port hardware capability flags */
#define PPT_NO_HARDWARE_PRESENT 0x00000000L
#define PPT_ECP_PRESENT         0x00000001L
#define PPT_EPP_PRESENT         0x00000002L
#define PPT_EPP_32_PRESENT      0x00000004L
#define PPT_BYTE_PRESENT        0x00000008L
#define PPT_BIDI_PRESENT        0x00000008L
#define PPT_1284_3_PRESENT      0x00000010L

/* Parallel port command flags */
#define PAR_END_OF_CHAIN_DEVICE         0x00000001L
#define PAR_HAVE_PORT_KEEP_PORT         0x00000002L
#define PAR_LEGACY_ZIP_DRIVE            0x00000004L
#define PAR_LEGACY_ZIP_DRIVE_STD_MODE   0x00000010L
#define PAR_LEGACY_ZIP_DRIVE_EPP_MODE   0x00000020L

/* 1284.3 identifiers */
#define DOT3_END_OF_CHAIN_ID    4
#define DOT3_LEGACY_ZIP_ID      5

/* Parallel port hardware modes */
#define INITIAL_MODE    0x00000000L

/* Parallel chip flag */
#define PARCHIP_ECR_ARBITRATOR  1

/* Offset constants */
#define DATA_OFFSET                     0
#define OFFSET_ECP_AFIFO                0x0000
#define AFIFO_OFFSET                    OFFSET_ECP_AFIFO
#define DSR_OFFSET                      1
#define DCR_OFFSET                      2
#define EPP_OFFSET                      4
#ifndef DVRH_USE_PARPORT_ECP_ADDR
    #define DVRH_USE_PARPORT_ECP_ADDR   0
#endif
#if !DVRH_USE_PARPORT_ECP_ADDR
    #define ECP_OFFSET                  0x0400
    #define CNFGB_OFFSET                0x0401
    #define ECR_OFFSET                  0x0402
#else
    #define ECP_OFFSET                  0x0000
    #define CNFGB_OFFSET                0x0001
    #define ECR_OFFSET                  0x0002
#endif
#define FIFO_OFFSET                     ECP_OFFSET
#define CFIFO_OFFSET                    ECP_OFFSET
#define CNFGA_OFFSET                    ECP_OFFSET
#define ECP_DFIFO_OFFSET                ECP_OFFSET
#define TFIFO_OFFSET                    ECP_OFFSET
#define OFFSET_ECP_DFIFO                ECP_OFFSET
#define OFFSET_TFIFO                    ECP_OFFSET
#define OFFSET_CFIFO                    ECP_OFFSET
#define OFFSET_ECR                      ECP_OFFSET
#define OFFSET_PARALLEL_REGISTER_SPAN   0x0003

/* Span constants */
#define ECP_SPAN    3
#define EPP_SPAN    4

/* DSR flags */
#define DSR_NOT_BUSY            0x80
#define DSR_NOT_ACK             0x40
#define DSR_PERROR              0x20
#define DSR_SELECT              0x10
#define DSR_NOT_FAULT           0x08
#define DSR_NOT_PTR_BUSY        0x80
#define DSR_NOT_PERIPH_ACK      0x80
#define DSR_WAIT                0x80
#define DSR_PTR_CLK             0x40
#define DSR_PERIPH_CLK          0x40
#define DSR_INTR                0x40
#define DSR_ACK_DATA_REQ        0x20
#define DSR_NOT_ACK_REVERSE     0x20
#define DSR_XFLAG               0x10
#define DSR_NOT_DATA_AVAIL      0x08
#define DSR_NOT_PERIPH_REQUEST  0x08

/* DCR flags */
#define DCR_DIRECTION           0x20
#define DCR_ACKINT_ENABLED      0x10
#define DCR_SELECT_IN           0x08
#define DCR_NOT_INIT            0x04
#define DCR_AUTOFEED            0x02
#define DCR_STROBE              0x01
#define DCR_NOT_1284_ACTIVE     0x08
#define DCR_ASTRB               0x08
#define DCR_NOT_REVERSE_REQUEST 0x04
#define DCR_NULL                0x04
#define DCR_NOT_HOST_BUSY       0x02
#define DCR_NOT_HOST_ACK        0x02
#define DCR_DSTRB               0x02
#define DCR_NOT_HOST_CLK        0x01
#define DCR_WRITE               0x01

/* Configuration register A flags */
#define CNFGA_IMPID_MASK    0x70
#define CNFGA_IMPID_16BIT   0x00
#define CNFGA_IMPID_8BIT    0x10
#define CNFGA_IMPID_32BIT   0x20
#define CNFGA_NO_TRANS_BYTE 0x04
#define CNFGA_IMPID_MASK    0x70
#define CNFGA_IMPID_SHIFT   4

/* Default ECR values */
#if !PARCHIP_ECR_ARBITRATOR
    #define DEFAULT_ECR_PS2         0x34
    #define DEFAULT_ECR_ECP         0x74
#endif
#define DEFAULT_ECR_TEST            0xD4
#define DEFAULT_ECR_COMPATIBILITY   0x14
#define DEFAULT_ECR_CONFIGURATION   0xF4

/* ECR flags */
#define ECR_ERRINT_DISABLED     0x10
#define ECR_DMA_ENABLED         0x08
#define ECR_SVC_INT_DISABLED    0x04
#define ECR_MODE_MASK           0x1F
#define ECR_SPP_MODE            0x00
#define ECR_BYTE_MODE           0x20
#define ECR_BYTE_PIO_MODE \
    (ECR_BYTE_MODE | ECR_ERRINT_DISABLED | ECR_SVC_INT_DISABLED)
#define ECR_FASTCENT_MODE       0x40
#define ECR_ECP_MODE            0x60
#define ECR_ECP_PIO_MODE \
    (ECR_ECP_MODE | ECR_ERRINT_DISABLED | ECR_SVC_INT_DISABLED)
#define ECR_EPP_MODE            0x80
#define ECR_EPP_PIO_MODE \
    (ECR_EPP_MODE | ECR_ERRINT_DISABLED | ECR_SVC_INT_DIABLED)
#define ECR_RESERVED_MODE       0x10
#define ECR_TEST_MODE           0xC0
#define ECR_CONFIG_MODE         0xE0
#define ECR_FIFO_MASK           0x03
#define ECR_FIFO_FULL           0x02
#define ECR_FIFO_EMPTY          0x01
#define ECR_FIFO_SOME_DATA      0x00
#define ECP_MAX_FIFO_DEPTH      4098

/* FIFO constants */
#define FIFO_PWORD_8BIT     1
#define FIFO_PWORD_16BIT    0
#define FIFO_PWORD_32BIT    2

/* Bit shifts */
#define BIT_7   7
#define BIT_6   6
#define BIT_5   5
#define BIT_4   4
#define BIT_3   3
#define BIT_2   2
#define BIT_1   1
#define BIT_0   0

/* Bit set flags */
#define BIT_7_SET   0x80
#define BIT_6_SET   0x40
#define BIT_5_SET   0x20
#define BIT_4_SET   0x10
#define BIT_3_SET   0x08
#define BIT_2_SET   0x04
#define BIT_1_SET   0x02
#define BIT_0_SET   0x01

/* Directions */
#define DIR_READ    1
#define DIR_WRITE   0

/* IRQ enable values */
#define IRQEN_ENABLE    1
#define IRQEN_DISABLE   0

/* Activity values */
#define ACTIVE      1
#define INACTIVE    0
#define DONT_CARE   2

/* DVRH constants */
#define DVRH_USE_FAST_MACROS    1
#define DVRH_USE_NIBBLE_MACROS  1

/* Parallel port removal relations */
typedef struct _PARPORT_REMOVAL_RELATIONS {
    PDEVICE_OBJECT  DeviceObject;
    ULONG           Flags;
    PUNICODE_STRING DeviceName;
} PARPORT_REMOVAL_RELATIONS;
typedef PARPORT_REMOVAL_RELATIONS   *PPARPORT_REMOVAL_RELATIONS;

/* 1284.3 DL modes */
typedef enum {
    P12843DL_OFF        = 0,
    P12843DL_DOT3_DL    = 1,
    P12843DL_MLC_DL     = 2,
    P12843DL_DOT4_DL    = 3
} P12843_DL_MODES;

/* Parallel port callbacks */
typedef BOOLEAN (NTAPI *PPARALLEL_TRY_ALLOCATE_ROUTINE)( PVOID );
typedef VOID (NTAPI *PPARALLEL_FREE_ROUTINE)( PVOID );
typedef ULONG (NTAPI *PPARALLEL_QUERY_WAITERS_ROUTINE)( PVOID );
typedef NTSTATUS (NTAPI *PPARALLEL_SET_CHIP_MODE)( PVOID, UCHAR );
typedef NTSTATUS (NTAPI *PPARALLEL_CLEAR_CHIP_MODE)( PVOID, UCHAR );
typedef NTSTATUS (NTAPI *PPARALLEL_TRY_SELECT_ROUTINE)( PVOID, PVOID );
typedef NTSTATUS (NTAPI *PPARALLEL_DESELECT_ROUTINE)( PVOID, PVOID );
typedef NTSTATUS (NTAPI *PPARCHIP_SET_CHIP_MODE)( PVOID, UCHAR );
typedef NTSTATUS (NTAPI *PPARCHIP_CLEAR_CHIP_MODE)( PVOID, UCHAR );
typedef VOID (NTAPI *PPARALLEL_DEFERRED_ROUTINE)( PVOID );

/* Parallel chip information */
typedef struct _PARALLEL_PARCHIP_INFO {
    PUCHAR                      Controller;
    PUCHAR                      EcrController;
    ULONG                       HardwareModes;
    PPARCHIP_SET_CHIP_MODE      ParChipSetMode;
    PPARCHIP_CLEAR_CHIP_MODE    ParChipClearMode;
    PVOID                       Context;
    BOOLEAN                     success;
} PARALLEL_PARCHIP_INFO;
typedef PARALLEL_PARCHIP_INFO   *PPARALLEL_PARCHIP_INFO;

/* Parallel port information */
typedef struct _PARALLEL_PORT_INFORMATION {
    PHYSICAL_ADDRESS                OriginalController;
    PUCHAR                          Controller;
    ULONG                           SpanOfController;
    PPARALLEL_TRY_ALLOCATE_ROUTINE  TryAllocatePort;
    PPARALLEL_FREE_ROUTINE          FreePort;
    PPARALLEL_QUERY_WAITERS_ROUTINE QueryNumWaiters;
    PVOID                           Context;
} PARALLEL_PORT_INFORMATION;
typedef PARALLEL_PORT_INFORMATION   *PPARALLEL_PORT_INFORMATION;

/* Parallel port Plug and Play information */
typedef struct _PARALLEL_PNP_INFORMATION {
    PHYSICAL_ADDRESS                OriginalEcpController;
    PUCHAR                          EcpController;
    ULONG                           SpanOfEcpController;
    ULONG                           PortNumber;
    ULONG                           HardwareCapabilities;
    PPARALLEL_SET_CHIP_MODE         TrySetChipMode;
    PPARALLEL_CLEAR_CHIP_MODE       ClearChipMode;
    ULONG                           FifoDepth;
    ULONG                           FifoWidth;
    PHYSICAL_ADDRESS                EppControllerPhysicalAddress;
    ULONG                           SpanOfEppController;
    ULONG                           Ieee1284_3DeviceCount;
    PPARALLEL_TRY_SELECT_ROUTINE    TrySelectDevice;
    PPARALLEL_DESELECT_ROUTINE      DeselectDevice;
    PVOID                           Context;
    ULONG                           CurrentMode;
    PWSTR                           PortName;
} PARALLEL_PNP_INFORMATION;
typedef PARALLEL_PNP_INFORMATION    *PPARALLEL_PNP_INFORMATION;

/* Parallel port 1284.3 command */
typedef struct _PARALLEL_1284_COMMAND {
    UCHAR   ID;
    UCHAR   Port;
    ULONG   CommandFlags;
} PARALLEL_1284_COMMAND;
typedef PARALLEL_1284_COMMAND   *PPARALLEL_1284_COMMAND;

/* Parallel chip modes */
typedef struct _PARALLEL_CHIP_MODE {
    UCHAR   ModeFlags;
    BOOLEAN success;
} PARALLEL_CHIP_MODE;
typedef PARALLEL_CHIP_MODE  *PPARALLEL_CHIP_MODE;

/* Parallel interrupt service routine */
typedef struct _PARALLEL_INTERRUPT_SERVICE_ROUTINE {
    PKSERVICE_ROUTINE           InterruptServiceRoutine;
    PVOID                       InterruptServiceContext;
    PPARALLEL_DEFERRED_ROUTINE  DeferredPortCheckRoutine;
    PVOID                       DeferredPortCheckContext;
} PARALLEL_INTERRUPT_SERVICE_ROUTINE;
typedef PARALLEL_INTERRUPT_SERVICE_ROUTINE  *PPARALLEL_INTERRUPT_SERVICE_ROUTINE;

/* Parallel interrupt information */
typedef struct _PARALLEL_INTERRUPT_INFORMATION {
    PKINTERRUPT                     InterruptObject;
    PPARALLEL_TRY_ALLOCATE_ROUTINE  TryAllocatePortAtInterruptLevel;
    PPARALLEL_FREE_ROUTINE          FreePortFromInterruptLevel;
    PVOID                           Context;
} PARALLEL_INTERRUPT_INFORMATION;
typedef PARALLEL_INTERRUPT_INFORMATION  *PPARALLEL_INTERRUPT_INFORMATION;

/* More parallel port information */
typedef struct _MORE_PARALLEL_PORT_INFORMATION {
    INTERFACE_TYPE  InterfaceType;
    ULONG           BusNumber;
    ULONG           InterruptLevel;
    ULONG           InterruptVector;
    KAFFINITY       InterruptAffinity;
    KINTERRUPT_MODE IntteruptMode;
} MORE_PARALLEL_PORT_INFORMATION;
typedef MORE_PARALLEL_PORT_INFORMATION  *PMORE_PARALLEL_PORT_INFORMATION;

/* Parallel port safety values */
typedef enum {
    SAFE_MODE   = 0,
    UNSAFE_MODE = 1
} PARALLEL_SAFETY;

/* Parallel class callbacks */
#define OLD_PARCLASS    0
typedef USHORT (NTAPI *PDETERMINE_IEEE_MODES)( PVOID );
typedef NTSTATUS (NTAPI *PNEGOTIATE_IEEE_MODE)( PVOID, USHORT, USHORT, PARALLEL_SAFETY, BOOLEAN );
typedef NTSTATUS (NTAPI *PTERMINATE_IEEE_MODE)( PVOID );
typedef NTSTATUS (NTAPI *PPARALLEL_IEEE_FWD_TO_REV)( PVOID );
typedef NTSTATUS (NTAPI *PPARALLEL_IEEE_REV_TO_FWD)( PVOID );
typedef NTSTATUS (NTAPI *PPARALLEL_READ)( PVOID, PVOID, ULONG, PULONG, UCHAR );
typedef NTSTATUS (NTAPI *PPARALLEL_WRITE)( PVOID, PVOID, ULONG, PULONG, UCHAR );
typedef NTSTATUS (NTAPI *PPARALLEL_TRYSELECT_DEVICE)( PVOID, PARALLEL_1284_COMMAND );
typedef NTSTATUS (NTAPI *PPARALLEL_DESELECT_DEVICE)( PVOID, PARALLEL_1284_COMMAND );

/* Parallel class information */
typedef struct _PARCLASS_INFORMATION {
    PUCHAR                      Controller;
    PUCHAR                      EcrController;
    ULONG                       SpanOfController;
    PDETERMINE_IEEE_MODES       DetermineIeeeModes;
    PNEGOTIATE_IEEE_MODE        NegotiateIeeeMode;
    PTERMINATE_IEEE_MODE        TerminateIeeeMode;
    PPARALLEL_IEEE_FWD_TO_REV   IeeeFwdToRevMode;
    PPARALLEL_IEEE_REV_TO_FWD   IeeeRevToFwdMode;
    PPARALLEL_READ              ParallelRead;
    PPARALLEL_WRITE             ParallelWrite;
    PVOID                       ParclassContext;
    ULONG                       HardwareCapabilities;
    ULONG                       FifoDepth;
    ULONG                       FifoWidth;
    PPARALLEL_TRYSELECT_DEVICE  ParallelTryselect;
    PPARALLEL_DESELECT_DEVICE   ParallelDeSelect;
} PARCLASS_INFORMATION;
typedef PARCLASS_INFORMATION    *PPARCLASS_INFORMATION;

/* 1284.3 phases */
typedef enum {
    PHASE_UNKNOWN           = 0,
    PHASE_NEGOTIATION       = 1,
    PHASE_SETUP             = 2,
    PHASE_FORWARD_IDLE      = 3,
    PHASE_FORWARD_XFER      = 4,
    PHASE_FWD_TO_REV        = 5,
    PHASE_REVERSE_IDLE      = 6,
    PHASE_REVERSE_XFER      = 7,
    PHASE_REV_TO_FWD        = 8,
    PHASE_TERMINATE         = 9,
    PHASE_DATA_AVAILABLE    = 10,
    PHASE_DATA_NOT_AVAIL    = 11,
    PHASE_INTERRUPT_HOST    = 12
} P1284_PHASE;

/* 1284.3 hardware modes */
typedef enum {
    HW_MODE_COMPATIBILITY   = 0,
    HW_MODE_PS2             = 1,
    HW_MODE_FAST_CENTRONICS = 2,
    HW_MODE_ECP             = 3,
    HW_MODE_EPP             = 4,
    HW_MODE_TEST            = 6,
    HW_MODE_CONFIGURATION   = 7
} P1284_HW_MODE;

/* Mode qualifiers */
static UCHAR    ModeQualifier[MODE_LEN_1284_3] =
    { 0xAA, 0x55, 0x00, 0xFF, 0x87, 0x78, 0xFF };
static UCHAR    LegacyZipModeQualifier[LEGACYZIP_MODE_LEN] =
    { 0x00, 0x3C, 0x20 };

/* Other macros */
#define TEST_ECR_FIFO( p1, p2 ) (((p1) & ECR_FIFO_MASK) == (p2))
#define SET_DCR( p1, p2, p3, p4, p5, p6 ) \
    ((UCHAR)(((p1) == ACTIVE ? BIT_5_SET : 0) | \
    ((p2) == ACTIVE ? BIT_4_SET : 0) | ((p3) == ACTIVE ? 0 : BIT_3_SET) | \
    ((p4) == ACTIVE ? BIT_2_SET : 0) | ((p5) == ACTIVE ? 0 : BIT_1_SET) | \
    ((p6) == ACTIVE ? 0 : BIT_0_SET)))

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _PARALLEL_ */
