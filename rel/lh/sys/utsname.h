/*
 *  sys/utsname.h     POSIX System Identification (GNU extension: domainname)
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
 */
#ifndef _SYS_UTSNAME_H_INCLUDED
#define _SYS_UTSNAME_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( __push, 4 )

#define  _UTSNAME_LENGTH           65
#define  _UTSNAME_SYSNAME_LENGTH  _UTSNAME_LENGTH
#define  _UTSNAME_NODENAME_LENGTH _UTSNAME_LENGTH
#define  _UTSNAME_RELEASE_LENGTH  _UTSNAME_LENGTH
#define  _UTSNAME_VERSION_LENGTH  _UTSNAME_LENGTH
#define  _UTSNAME_MACHINE_LENGTH  _UTSNAME_LENGTH

struct utsname {
    char sysname[_UTSNAME_LENGTH];      /* name of operating system */
    char nodename[_UTSNAME_LENGTH];     /* name of node on network */
    char release[_UTSNAME_LENGTH];      /* release level of OS */
    char version[_UTSNAME_LENGTH];      /* version level of OS */
    char machine[_UTSNAME_LENGTH];      /* machine hardware type */
    char domainname[_UTSNAME_LENGTH];   /* domainname for network node */
};

_WCRTLINK extern int uname( struct utsname *__name );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_SYS_UTSNAME_H_INCLUDED */
