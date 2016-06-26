/*
 *  lmuse.h     LAN Manager use functions
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

#ifndef _LMUSE_
#define _LMUSE_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <lmcons.h>
#include <lmuseflg.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Use parameter numbers */
#define USE_LOCAL_PARMNUM       1
#define USE_REMOTE_PARMNUM      2
#define USE_PASSWORD_PARMNUM    3
#define USE_ASGTYPE_PARMNUM     4
#define USE_USERNAME_PARMNUM    5
#define USE_DOMAINNAME_PARMNUM  6

/* Use status values */
#define USE_OK          0L
#define USE_PAUSED      1L
#define USE_SESSLOST    2L
#define USE_DISCONN     2L
#define USE_NETERR      3L
#define USE_CONN        4L
#define USE_RECONN      5L

/* Remote resource types */
#define USE_WILDCARD    0xFFFFFFFFL
#define USE_DISKDEV     0L
#define USE_SPOOLDEV    1L
#define USE_CHARDEV     2L
#define USE_IPC         3L

/* Use information flags */
#define CREATE_NO_CONNECT       0x00000001L
#define CREATE_BYPASS_CSC       0x00000002L
#define CREATE_CRED_RESET       0x00000004L
#define USE_DEFAULT_CREDENTIALS 0x00000004L

/* Use information (level 0) */
typedef struct _USE_INFO_0 {
    LMSTR   ui0_local;
    LMSTR   ui0_remote;
} USE_INFO_0;
typedef USE_INFO_0  *PUSE_INFO_0;
typedef USE_INFO_0  *LPUSE_INFO_0;

/* Use information (level 1) */
typedef struct _USE_INFO_1 {
    LMSTR   ui1_local;
    LMSTR   ui1_remote;
    LMSTR   ui1_password;
    DWORD   ui1_status;
    DWORD   ui1_asg_type;
    DWORD   ui1_refcount;
    DWORD   ui1_usecount;
} USE_INFO_1;
typedef USE_INFO_1  *PUSE_INFO_1;
typedef USE_INFO_1  *LPUSE_INFO_1;

/* Use information (level 2) */
typedef struct _USE_INFO_2 {
    LMSTR   ui2_local;
    LMSTR   ui2_remote;
    LMSTR   ui2_password;
    DWORD   ui2_status;
    DWORD   ui2_asg_type;
    DWORD   ui2_refcount;
    DWORD   ui2_usecount;
    LMSTR   ui2_username;
    LMSTR   ui2_domainname;
} USE_INFO_2;
typedef USE_INFO_2  *PUSE_INFO_2;
typedef USE_INFO_2  *LPUSE_INFO_2;

/* Use information (level 3) */
typedef struct _USE_INFO_3 {
    USE_INFO_2  ui3_ui2;
    ULONG       ui3_flags;
} USE_INFO_3;
typedef USE_INFO_3  *PUSE_INFO_3;
typedef USE_INFO_3  *LPUSE_INFO_3;

/* Use information (level 4) */
typedef struct _USE_INFO_4 {
    USE_INFO_3  ui4_ui3;
    DWORD       ui4_auth_identity_length;
    PBYTE       ui4_auth_identity;
} USE_INFO_4;
typedef USE_INFO_4  *PUSE_INFO_4;
typedef USE_INFO_4  *LPUSE_INFO_4;

/* Functions in NETAPI32.DLL */
NET_API_STATUS NET_API_FUNCTION NetUseAdd( LMSTR, DWORD, LPBYTE, LPDWORD );
NET_API_STATUS NET_API_FUNCTION NetUseDel( LMSTR, LMSTR, DWORD );
NET_API_STATUS NET_API_FUNCTION NetUseEnum( LMSTR, DWORD, LPBYTE *, DWORD, LPDWORD, LPDWORD, LPDWORD );
NET_API_STATUS NET_API_FUNCTION NetUseGetInfo( LMSTR, LMSTR, DWORD, LPBYTE * );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _LMUSE_ */
