/*
 *  mce.h       Machine check error definitions
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

#ifndef _MCE_
#define _MCE_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Maximum number of MCA extended registers */
#ifdef _X86_
    #define MCA_EXTREG_V2MAX    24
#endif

/* MCI address */
#ifdef _X86_
typedef union _MCI_ADDR {
    struct {
        ULONG   Address;
        ULONG   Reserved;
    };
    ULONGLONG   QuadPart;
} MCI_ADDR;
typedef MCI_ADDR    *PMCI_ADDR;
#endif

/* MCA exception types */
#ifdef _X86_
typedef enum {
    HAL_MCE_RECORD  = 0,
    HAL_MCA_RECORD  = 1
} MCA_EXCEPTION_TYPE;
#endif

/* MCI statistics */
#ifdef _X86_
typedef union _MCI_STATS {
    struct {
        USHORT  McaCod;
        USHORT  MsCod;
        ULONG   OtherInfo       : 25;
        ULONG   Damage          : 1;
        ULONG   AddressValid    : 1;
        ULONG   MiscValid       : 1;
        ULONG   Enabled         : 1;
        ULONG   UnCorrected     : 1;
        ULONG   OverFlow        : 1;
        ULONG   Valid           : 1;
    } MciStats;
    ULONGLONG   QuadPart;
} MCI_STATS;
typedef MCI_STATS   *PMCI_STATS;
#endif

/* MCA exception */
#ifdef _X86_
typedef struct _MCA_EXCEPTION {
    ULONG               VersionNumber;
    MCA_EXCEPTION_TYPE  ExceptionType;
    LARGE_INTEGER       TimeStamp;
    ULONG               ProcessorNumber;
    ULONG               Reserved1;
    union {
        struct {
            UCHAR       BankNumber;
            UCHAR       Reserved2[7];
            MCI_STATS   Status;
            MCI_ADDR    Address;
            ULONGLONG   Misc;
        } Mca;
        struct {
            ULONGLONG   Address;
            ULONGLONG   Type;
        } Mce;
    } u;
#if (NTDDI_VERSION >= 0x05010000)
    ULONG               ExtCnt;
    ULONG               Reserved3;
    ULONGLONG           ExtReg[MCA_EXTREG_V2MAX];
#endif
} MCA_EXCEPTION;
typedef MCA_EXCEPTION   *PMCA_EXCEPTION;
typedef MCA_EXCEPTION   CMC_EXCEPTION;
typedef MCA_EXCEPTION   *PCMC_EXCEPTION;
typedef MCA_EXCEPTION   CPE_EXCEPTION;
typedef MCA_EXCEPTION   *PCPE_EXCEPTION;
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _MCE_ */
