/*
 *  lmat.h      LAN Manager scheduling functions
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

#ifndef _LMAT_
#define _LMAT_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Scheduling flags */
#define JOB_RUN_PERIODICALLY    0x01
#define JOB_EXEC_ERROR          0x02
#define JOB_RUNS_TODAY          0x04
#define JOB_ADD_CURRENT_DATE    0x08
#define JOB_NONINTERACTIVE      0x10
#define JOB_INPUT_FLAGS \
    (JOB_RUN_PERIODICALLY | JOB_ADD_CURRENT_DATE | JOB_NONINTERACTIVE)
#define JOB_OUTPUT_FLAGS \
    (JOB_RUN_PERIODICALLY | JOB_EXEC_ERROR | JOB_RUNS_TODAY | JOB_NONINTERACTIVE)

/* Scheduling information */
typedef struct _AT_INFO {
    DWORD_PTR   JobTime;
    DWORD       DaysOfMonth;
    UCHAR       DaysOfWeek;
    UCHAR       Flags;
    LPWSTR      Command;
} AT_INFO;
typedef AT_INFO *PAT_INFO;
typedef AT_INFO *LPAT_INFO;

/* Scheduling enumeration information */
typedef struct _AT_ENUM {
    DWORD       JobId;
    DWORD_PTR   JobTime;
    DWORD       DaysOfMonth;
    UCHAR       DaysOfWeek;
    UCHAR       Flags;
    LPWSTR      Command;
} AT_ENUM;
typedef AT_ENUM *PAT_ENUM;
typedef AT_ENUM *LPAT_ENUM;

/* Functions in NETAPI32.DLL */
NET_API_STATUS NET_API_FUNCTION NetScheduleJobAdd( LPCWSTR, LPBYTE, LPDWORD );
NET_API_STATUS NET_API_FUNCTION NetScheduleJobDel( LPCWSTR, DWORD, DWORD );
NET_API_STATUS NET_API_FUNCTION NetScheduleJobEnum( LPCWSTR, LPBYTE *, DWORD, LPDWORD, LPDWORD, LPDWORD );
NET_API_STATUS NET_API_FUNCTION NetScheduleJobGetInfo( LPCWSTR, DWORD, LPBYTE * );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _LMAT_ */
