/*
 *  sys/resource.h      Resource functions
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
#ifndef _SYS_RESOURCE_H_INCLUDED
#define _SYS_RESOURCE_H_INCLUDED

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

#ifndef _ARCH_DIR
 #if defined(__386__)
  #define _ARCH_DIR i386
 #elif defined(__MIPS__)
  #define _ARCH_DIR mips
 #else
  #error unknown platform
  #define _ARCH_DIR
 #endif
 #define _ARCH_INCLUDE(hdr) <arch/ ## _ARCH_DIR ## / ## hdr ## >
#endif /* !_ARCH_DIR */

#include _ARCH_INCLUDE(sys/resource.h)

/*
 * Resource limit IDs
 *
 * Compatibility detail: there are architectures that have
 *   a different rlimit ID order in the 5-9 range and want
 *   to keep that order for binary compatibility. The reasons
 *   are historic and all new rlimits are identical across all
 *   architectures.
 */

#define RLIMIT_CPU          0
#define RLIMIT_FSIZE        1
#define RLIMIT_DATA         2
#define RLIMIT_STACK        3
#define RLIMIT_CORE         4
#ifndef RLIMIT_RSS
# define RLIMIT_RSS         5
#endif
#ifndef RLIMIT_NPROC
# define RLIMIT_NPROC       6
#endif
#ifndef RLIMIT_NOFILE
# define RLIMIT_NOFILE      7
#endif
#ifndef RLIMIT_MEMLOCK
# define RLIMIT_MEMLOCK     8
#endif
#ifndef RLIMIT_AS
# define RLIMIT_AS          9
#endif
#define RLIMIT_LOCKS        10
#define RLIMIT_SIGPENDING   11
#define RLIMIT_MSGQUEUE     12
#define RLIMIT_NICE         13
#define RLIMIT_RTPRIO       14
#define RLIMIT_RTTIME       15
#define RLIM_NLIMITS        16

/*
 * SuS says limits have to be unsigned.
 * Which makes a ton more sense anyway.
 *
 * Some architectures override this (for compatibility reasons):
 */
#ifndef RLIM_INFINITY
# define RLIM_INFINITY  (~0UL)
#endif

#ifndef RLIM_SAVED_MAX
# define RLIM_SAVED_MAX RLIM_INFINITY
#endif
#ifndef RLIM_SAVED_CUR
# define RLIM_SAVED_CUR RLIM_INFINITY
#endif

typedef unsigned long   rlim_t;

struct rlimit {
    rlim_t  rlim_cur;
    rlim_t  rlim_max;
};

_WCRTLINK extern int getrlimit( int __resid, struct rlimit *__rlim );
_WCRTLINK extern int setrlimit( int __resid, const struct rlimit *__rlim );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
