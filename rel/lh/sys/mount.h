/*
 *  sys/mount.h
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
#ifndef _SYS_MOUNT_H_INCLUDED
#define _SYS_MOUNT_H_INCLUDED

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

#define MS_RDONLY        1 /* mount read-only */
#define MS_NOSUID        2 /* ignore suid and sgid bits */
#define MS_NODEV         4 /* no access to device special files */
#define MS_NOEXEC        8 /* no program execution */
#define MS_SYNCHRONOUS  16 /* writes are synced at once */
#define MS_REMOUNT      32 /* alter flags of a mounted fs */
#define MS_MANDLOCK     64 /* allow mandatory locks */
#define MS_NOATIME    1024 /* do not update access times */
#define MS_NODIRATIME 2048 /* do not update dir access times */
#define MS_BIND       4096 /* bind subtree elsewhere */

_WCRTLINK extern int mount( const char *__specialfile, const char *__dir,
       const char *__filesystemtype, unsigned long __mountflags,
       const void *__data);

_WCRTLINK extern int umount(const char *__dir);

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_SYS_MOUNT_H_INCLUDED */
