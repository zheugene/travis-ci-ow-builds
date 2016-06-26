/*
 *  mgm.h       Multicast Group Manager (MGM) functions
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

#ifndef _MGM_H_
#define _MGM_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Group manipulation flags */
#define MGM_JOIN_STATE_FLAG     0x00000001L
#define MGM_FORWARD_STATE_FLAG  0x00000002L

/* MGM MFE statistics flags */
#define MGM_MFE_STATS_0 0x00000001L
#define MGM_MFE_STATS_1 0x00000002L

/* MGM interface entry */
typedef struct _MGM_IF_ENTRY {
    DWORD   dwIfIndex;
    DWORD   dwIfNextHopAddr;
    BOOL    bIGMP;
    BOOL    bIsEnabled;
} MGM_IF_ENTRY;
typedef MGM_IF_ENTRY    *PMGM_IF_ENTRY;

/* MGM callbacks */
typedef DWORD (WINAPI *PMGM_RPF_CALLBACK)( DWORD, DWORD, DWORD, DWORD, PDWORD, PDWORD, PDWORD, DWORD, PBYTE, PBYTE );
typedef DWORD (WINAPI *PMGM_CREATION_ALERT_CALLBACK)( DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, PMGM_IF_ENTRY );
typedef DWORD (WINAPI *PMGM_PRUNE_ALERT_CALLBACK)( DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, BOOL, PDWORD );
typedef DWORD (WINAPI *PMGM_JOIN_ALERT_CALLBACK)( DWORD, DWORD, DWORD, DWORD, BOOL );
typedef DWORD (WINAPI *PMGM_WRONG_IF_CALLBACK)( DWORD, DWORD, DWORD, DWORD, DWORD, PBYTE );
typedef DWORD (WINAPI *PMGM_LOCAL_JOIN_CALLBACK)( DWORD, DWORD, DWORD, DWORD, DWORD, DWORD );
typedef DWORD (WINAPI *PMGM_LOCAL_LEAVE_CALLBACK)( DWORD, DWORD, DWORD, DWORD, DWORD, DWORD );
typedef DWORD (WINAPI *PMGM_DISABLE_IGMP_CALLBACK)( DWORD, DWORD );
typedef DWORD (WINAPI *PMGM_ENABLE_IGMP_CALLBACK)( DWORD, DWORD );

/* Routing protocol configuration */
typedef struct _ROUTING_PROTOCOL_CONFIG {
    DWORD                           dwCallbackFlags;
    PMGM_RPF_CALLBACK               pfnRpfCallback;
    PMGM_CREATION_ALERT_CALLBACK    pfnCreationAlertCallback;
    PMGM_PRUNE_ALERT_CALLBACK       pfnPruneAlertCallback;
    PMGM_JOIN_ALERT_CALLBACK        pfnJoinAlertCallback;
    PMGM_WRONG_IF_CALLBACK          pfnWrongIfCallback;
    PMGM_LOCAL_JOIN_CALLBACK        pfnLocalJoinCallback;
    PMGM_LOCAL_LEAVE_CALLBACK       pfnLocalLeaveCallback;
    PMGM_DISABLE_IGMP_CALLBACK      pfnDisableIgmpCallback;
    PMGM_ENABLE_IGMP_CALLBACK       pfnEnableIgmpCallback;
} ROUTING_PROTOCOL_CONFIG;
typedef ROUTING_PROTOCOL_CONFIG *PROUTING_PROTOCOL_CONFIG;

/* MGM enumeration types */
typedef enum _MGM_ENUM_TYPES {
    ANY_SOURCE  = 0,
    ALL_SOURCES = 1
} MGM_ENUM_TYPES;

/* Source group entry */
typedef struct _SOURCE_GROUP_ENTRY {
    DWORD   dwSourceAddr;
    DWORD   dwSourceMask;
    DWORD   dwGroupAddr;
    DWORD   dwGroupMask;
} SOURCE_GROUP_ENTRY;
typedef SOURCE_GROUP_ENTRY  *PSOURCE_GROUP_ENTRY;

/* Functions in RTM.DLL */
DWORD WINAPI    MgmAddGroupMembershipEntry( HANDLE, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD );
DWORD WINAPI    MgmDeRegisterMProtocol( HANDLE );
DWORD WINAPI    MgmDeleteGroupMembershipEntry( HANDLE, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD, DWORD );
DWORD WINAPI    MgmGetFirstMfe( PDWORD, PBYTE, PDWORD );
DWORD WINAPI    MgmGetFirstMfeStats( PDWORD, PBYTE, PDWORD, DWORD );
DWORD WINAPI    MgmGetMfe( PMIB_IPMCAST_MFE, PDWORD, PBYTE );
DWORD WINAPI    MgmGetMfeStats( PMIB_IPMCAST_MFE, PDWORD, PBYTE, DWORD );
DWORD WINAPI    MgmGetNextMfe( PMIB_IPMCAST_MFE, PDWORD, PBYTE, PDWORD );
DWORD WINAPI    MgmGetNextMfeStats( PMIB_IPMCAST_MFE, PDWORD, PBYTE, PDWORD, DWORD );
DWORD WINAPI    MgmGetProtocolOnInterface( DWORD, DWORD, PDWORD, PDWORD );
DWORD WINAPI    MgmGroupEnumerationEnd( HANDLE );
DWORD WINAPI    MgmGroupEnumerationGetNext( HANDLE, PDWORD, PBYTE, PDWORD );
DWORD WINAPI    MgmGroupEnumerationStart( HANDLE, MGM_ENUM_TYPES, HANDLE * );
DWORD WINAPI    MgmRegisterMProtocol( PROUTING_PROTOCOL_CONFIG, DWORD, DWORD, HANDLE * );
DWORD WINAPI    MgmReleaseInterfaceOwnership( HANDLE, DWORD, DWORD );
DWORD WINAPI    MgmTakeInterfaceOwnership( HANDLE, DWORD, DWORD );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _MGM_H_ */
