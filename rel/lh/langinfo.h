/***************************************************************************
 * FILE: langinfo.h
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2016 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 *
 * Description: This header is part of the C/C++ standard library. It
 *              provides language information constants and functions.
 ***************************************************************************/
#ifndef _LANGINFO_H_INCLUDED
#define _LANGINFO_H_INCLUDED
 
#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#define CODESET     0

#define D_T_FMT     0x100
#define D_FMT       0x101
#define T_FMT       0x102
#define T_FMT_AMPM  0x103
#define AM_STR      0x104
#define PM_STR      0x105

#define DAY_1       0x200
#define DAY_2       0x201
#define DAY_3       0x202
#define DAY_4       0x203
#define DAY_5       0x204
#define DAY_6       0x205
#define DAY_7       0x206

#define ABDAY_1     0x300
#define ABDAY_2     0x301
#define ABDAY_3     0x302
#define ABDAY_4     0x303
#define ABDAY_5     0x304
#define ABDAY_6     0x305
#define ABDAY_7

#define MON_1       0x400
#define MON_2       0x401
#define MON_3       0x402
#define MON_4       0x403
#define MON_5       0x404
#define MON_6       0x405
#define MON_7       0x406
#define MON_8       0x407 
#define MON_9       0x408
#define MON_10      0x409
#define MON_11      0x40A
#define MON_12      0x40B

#define ABMON_1     0x500
#define ABMON_2     0x501
#define ABMON_3     0x502
#define ABMON_4     0x503
#define ABMON_5     0x504
#define ABMON_6     0x505
#define ABMON_7     0x506
#define ABMON_8     0x507
#define ABMON_9     0x508
#define ABMON_10    0x509
#define ABMON_11    0x50A
#define ABMON_12    0x50B

#define ERA         0x600
#define ERA_D_FMT   0x601
#define ERA_D_T_FMT 0x602
#define ERA_T_FMT   0x603

#define ALT_DIGITS  0x700
#define RADIXCHAR   0x702
#define THOUSEP     0x703

#define YESEXPR     0x800
#define NOEXPR      0x801

#define CRNCYSTR    0x900
 
#ifdef __cplusplus
extern "C" {
#endif

char *nl_langinfo(int __item);

#ifdef __cplusplus
} /* extern "C" */
#endif
 
#endif /* _LANGINFO_H_INCLUDED */

