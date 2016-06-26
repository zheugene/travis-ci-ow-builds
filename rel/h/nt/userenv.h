/*
 *  userenv.h   User environment functions
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

#ifndef _INC_USERENV
#define _INC_USERENV

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <wbemcli.h>
#include <profinfo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Macro to specify user environment functions */
#define USERENVAPI  DECLSPEC_IMPORT

/* Group policy primitive data types */
#if (WINVER >= 0x0500)
typedef UINT_PTR    ASYNCCOMPLETIONHANDLE;
typedef PVOID       PRSOPTOKEN;
typedef GUID        *REFGPEXTENSIONID;
#endif

/* Profile information flags */
#define PI_NOUI         0x00000001L
#define PI_APPLYPOLICY  0x00000002L

/* Profile types */
#if (WINVER >= 0x0500)
    #define PT_TEMPORARY    0x00000001L
    #define PT_ROAMING      0x00000002L
    #define PT_MANDATORY    0x00000004L
#endif

/* RefreshPolicyEx() flags */
#if (WINVER >= 0x0500)
    #define RP_FORCE    1L
    #define RP_SYNC     2L
#endif

/* Group policy object option flags */
#if (WINVER >= 0x0500)
    #define GPC_BLOCK_POLICY    0x00000001L
#endif

/* Group policy object link flags */
#if (WINVER >= 0x0500)
    #define GPO_FLAG_DISABLE    0x00000001L
    #define GPO_FLAG_FORCE      0x00000002L
#endif

/* GetGPOList() flags */
#if (WINVER >= 0x0500)
    #define GPO_LIST_FLAG_MACHINE               0x00000001L
    #define GPO_LIST_FLAG_SITEONLY              0x00000002L
    #define GPO_LIST_FLAG_NO_WMIFILTERS         0x00000004L
    #define GPO_LIST_FLAG_NO_SECURITYFILTERS    0x00000008L
#endif

/* Group policy registry keys */
#if (WINVER >= 0x0500)
    #define GP_DLLNAME                      TEXT("DllName")
    #define GP_ENABLEASYNCHRONOUSPROCESSING TEXT("EnableAsynchronousProcessing")
    #define GP_MAXNOGPOLISTCHANGESINTERVAL  TEXT("MaxNoGPOListChangesInterval")
    #define GP_NOBACKGROUNDPOLICY           TEXT("NoBackgroundPolicy")
    #define GP_NOGPOLISTCHANGES             TEXT("NoGPOListChanges")
    #define GP_NOMACHINEPOLICY              TEXT("NoMachinePolicy")
    #define GP_NOSLOWLINK                   TEXT("NoSlowLink")
    #define GP_NOTIFYLINKTRANSITION         TEXT("NotifyLinkTransition")
    #define GP_NOUSERPOLICY                 TEXT("NoUserPolicy")
    #define GP_PERUSERLOCALSETTINGS         TEXT("PerUserLocalSettings")
    #define GP_PROCESSGROUPPOLICY           TEXT("ProcessGroupPolicy")
    #define GP_REQUIRESSUCCESSFULREGISTRY   TEXT("RequiresSuccessfulRegistry")
#endif

/* Group policy object information flags */
#if (WINVER >= 0x0500)
    #define GPO_INFO_FLAG_MACHINE               0x00000001L
    #define GPO_INFO_FLAG_BACKGROUND            0x00000010L
    #define GPO_INFO_FLAG_SLOWLINK              0x00000020L
    #define GPO_INFO_FLAG_VERBOSE               0x00000040L
    #define GPO_INFO_FLAG_NOCHANGES             0x00000080L
    #define GPO_INFO_FLAG_LINKTRANSITION        0x00000100L
    #define GPO_INFO_FLAG_LOGRSOP_TRANSITION    0x00000200L
    #define GPO_INFO_FLAG_FORCED_REFRESH        0x00000400L
    #define GPO_INFO_FLAG_SAFEMODE_BOOT         0x00000800L
    #define GPO_INFO_FLAG_ASYNC_FOREGROUND      0x00001000L
#endif

/* GUIDs */
#if (WINVER >= 0x0500)
    #define REGISTRY_EXTENSION_GUID \
        { 0x35378EAC, 0x683F, 0x11D2, 0xA8, 0x9A, 0x00, 0xC0, 0x4F, 0xBB, 0xCF, 0xA2 }
    #define GROUP_POLICY_TRIGGER_EVENT_PROVIDER_GUID \
        { 0xBD2F4252, 0x5E1E, 0x49FC, 0x9A, 0x30, 0xF3, 0x97, 0x8A, 0xD8, 0x9E, 0xE2 }
    #define MACHINE_POLICY_PRESENT_TRIGGER_GUID \
        { 0x659FCAE6, 0x5BDB, 0x4DA9, 0xB1, 0xFF, 0xCA, 0x2A, 0x17, 0x8D, 0x46, 0xE0 }
    #define USER_POLICY_PRESENT_TRIGGER_GUID \
        { 0x54FB46C8, 0xF089, 0x464C, 0xB1, 0xFD, 0x59, 0xD1, 0xB6, 0x2C, 0x3B, 0x50 }
#endif

/* RSOP flags */
#define FLAG_NO_GPO_FILTER              0x80000000L
#define FLAG_NO_CSE_INVOKE              0x40000000L
#define FLAG_ASSUME_SLOW_LINK           0x20000000L
#define FLAG_LOOPBACK_MERGE             0x10000000L
#define FLAG_LOOPBACK_REPLACE           0x08000000L
#define FLAG_ASSUME_USER_WQLFILTER_TRUE 0x04000000L
#define FLAG_ASSUME_COMP_WQLFILTER_TRUE 0x02000000L
#define FLAG_PLANNING_MODE              0x01000000L
#define FLAG_NO_USER                    0x00000001L
#define FLAG_NO_COMPUTER                0x00000002L
#define FLAG_FORCE_CREATENAMESPACE      0x00000004L

/* RSOP extended error codes */
#define RSOP_USER_ACCESS_DENIED     0x00000001L
#define RSOP_COMPUTER_ACCESS_DENIED 0x00000002L
#define RSOP_TEMPNAMESPACE_EXISTS   0x00000004L

/* Group policy object link */
#if (WINVER >= 0x0500)
typedef enum _GPO_LINK {
    GPLinkUnknown               = 0,
    GPLinkMachine               = 1,
    GPLinkSite                  = 2,
    GPLinkDomain                = 3,
    GPLinkOrganizationalUnit    = 4
} GPO_LINK;
typedef GPO_LINK    *PGPO_LINK;
#endif

/* Group policy object */
#if (WINVER >= 0x0500)
typedef struct _GROUP_POLICY_OBJECTA {
    DWORD                           dwOptions;
    DWORD                           dwVersion;
    LPSTR                           lpDSPath;
    LPSTR                           lpFileSysPath;
    LPSTR                           lpDisplayName;
    CHAR                            szGPOName[50];
    GPO_LINK                        GPOLink;
    LPARAM                          lParam;
    struct _GROUP_POLICY_OBJECTA    *pNext;
    struct _GROUP_POLICY_OBJECTA    *pPrev;
    LPSTR                           lpExtensions;
    LPARAM                          lParam2;
    LPSTR                           lpLink;
} GROUP_POLICY_OBJECTA;
typedef GROUP_POLICY_OBJECTA    *PGROUP_POLICY_OBJECTA;
typedef struct _GROUP_POLICY_OBJECTW {
    DWORD                           dwOptions;
    DWORD                           dwVersion;
    LPWSTR                          lpDSPath;
    LPWSTR                          lpFileSysPath;
    LPWSTR                          lpDisplayName;
    WCHAR                           szGPOName[50];
    GPO_LINK                        GPOLink;
    LPARAM                          lParam;
    struct _GROUP_POLICY_OBJECTW    *pNext;
    struct _GROUP_POLICY_OBJECTW    *pPrev;
    LPWSTR                          lpExtensions;
    LPARAM                          lParam2;
    LPWSTR                          lpLink;
} GROUP_POLICY_OBJECTW;
typedef GROUP_POLICY_OBJECTW    *PGROUP_POLICY_OBJECTW;
#ifdef UNICODE
typedef GROUP_POLICY_OBJECTW    GROUP_POLICY_OBJECT;
typedef PGROUP_POLICY_OBJECT    PGROUP_POLICY_OBJECT;
#else
typedef GROUP_POLICY_OBJECTA    GROUP_POLICY_OBJECT;
typedef PGROUP_POLICY_OBJECTA   PGROUP_POLICY_OBJECT;
#endif
#endif

/* RSOP target */
#if (WINVER >= 0x0500)
typedef struct _RSOP_TARGET {
    WCHAR                   *pwszAccountName;
    WCHAR                   *pwszNewSOM;
    SAFEARRAY               *pszSecurityGroups;
    PRSOPTOKEN              pRsopToken;
    PGROUP_POLICY_OBJECT    pGPOList;
    IWbemServices           *pWbemServices;
} RSOP_TARGET;
typedef RSOP_TARGET *PRSOP_TARGET;
#endif

/* Group policy callbacks */
#if (WINVER >= 0x0500)
typedef DWORD (CALLBACK *PFNSTATUSMESSAGECALLBACK)( BOOL, LPWSTR );
typedef DWORD (CALLBACK *PFNPROCESSGROUPPOLICY)( DWORD, HANDLE, HKEY, PGROUP_POLICY_OBJECT, PGROUP_POLICY_OBJECT, ASYNCCOMPLETIONHANDLE, BOOL *, PFNSTATUSMESSAGECALLBACK );
typedef DWORD (CALLBACK *PFNPROCESSGROUPPOLICYEX)( DWORD, HANDLE, HKEY, PGROUP_POLICY_OBJECT, PGROUP_POLICY_OBJECT, ASYNCCOMPLETIONHANDLE, BOOL *, PFNSTATUSMESSAGECALLBACK, IWbemServices *, HRESULT * );
typedef DWORD (CALLBACK *PFNGENERATEGROUPPOLICY)( DWORD, BOOL *, WCHAR *, PRSOP_TARGET, PRSOP_TARGET );
#endif

/* Setting status values */
typedef enum _SETTINGSTATUS {
    RSOPUnspecified         = 0,
    RSOPApplied             = 1,
    RSOPIgnored             = 2,
    RSOPFailed              = 3,
    RSOPSubsettingFailed    = 4
} SETTINGSTATUS;

/* Policy setting status information */
typedef struct _POLICYSETTINGSTATUSINFO {
    LPWSTR          szKey;
    LPWSTR          szEventSource;
    LPWSTR          szEventLogName;
    DWORD           dwEventID;
    DWORD           dwErrorCode;
    SETTINGSTATUS   status;
    SYSTEMTIME      timeLogged;
} POLICYSETTINGSTATUSINFO;
typedef POLICYSETTINGSTATUSINFO *LPPOLICYSETTINGSTATUSINFO;

/* Functions in USERENV.DLL */
USERENVAPI BOOL WINAPI      CreateEnvironmentBlock( LPVOID *, HANDLE, BOOL );
USERENVAPI BOOL WINAPI      DestroyEnvironmentBlock( LPVOID );
USERENVAPI BOOL WINAPI      GetProfilesDirectoryA( LPSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetProfilesDirectoryW( LPWSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetUserProfileDirectoryA( HANDLE, LPSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetUserProfileDirectoryW( HANDLE, LPWSTR, LPDWORD );
USERENVAPI BOOL WINAPI      LoadUserProfileA( HANDLE, LPPROFILEINFOA );
USERENVAPI BOOL WINAPI      LoadUserProfileW( HANDLE, LPPROFILEINFOW );
USERENVAPI HRESULT WINAPI   RsopResetPolicySettingStatus( DWORD, IWbemServices *, IWbemClassObject * );
USERENVAPI HRESULT WINAPI   RsopSetPolicySettingStatus( DWORD, IWbemServices *, IWbemClassObject *, DWORD, POLICYSETTINGSTATUSINFO * );
USERENVAPI BOOL WINAPI      UnloadUserProfile( HANDLE, HANDLE );
#if (WINVER >= 0x0500)
USERENVAPI BOOL WINAPI      DeleteProfileA( LPCSTR, LPCSTR, LPCSTR );
USERENVAPI BOOL WINAPI      DeleteProfileW( LPCWSTR, LPCWSTR, LPCWSTR );
USERENVAPI HANDLE WINAPI    EnterCriticalPolicySection( BOOL );
USERENVAPI BOOL WINAPI      ExpandEnvironmentStringsForUserA( HANDLE, LPCSTR, LPSTR, DWORD );
USERENVAPI BOOL WINAPI      ExpandEnvironmentStringsForUserW( HANDLE, LPCWSTR, LPWSTR, DWORD );
USERENVAPI BOOL WINAPI      FreeGPOListA( PGROUP_POLICY_OBJECTA );
USERENVAPI BOOL WINAPI      FreeGPOListW( PGROUP_POLICY_OBJECTW );
USERENVAPI BOOL WINAPI      GetAllUsersProfileDirectoryA( LPSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetAllUsersProfileDirectoryW( LPWSTR, LPDWORD );
USERENVAPI DWORD WINAPI     GetAppliedGPOListA( DWORD, LPCSTR, PSID, GUID *, PGROUP_POLICY_OBJECTA * );
USERENVAPI DWORD WINAPI     GetAppliedGPOListW( DWORD, LPCWSTR, PSID, GUID *, PGROUP_POLICY_OBJECTW * );
USERENVAPI BOOL WINAPI      GetDefaultUserProfileDirectoryA( LPSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetDefaultUserProfileDirectoryW( LPWSTR, LPDWORD );
USERENVAPI BOOL WINAPI      GetGPOListA( HANDLE, LPCSTR, LPCSTR, LPCSTR, DWORD, PGROUP_POLICY_OBJECTA * );
USERENVAPI BOOL WINAPI      GetGPOListW( HANDLE, LPCWSTR, LPCWSTR, LPCWSTR, DWORD, PGROUP_POLICY_OBJECTW * );
USERENVAPI BOOL WINAPI      GetProfileType( DWORD * );
USERENVAPI BOOL WINAPI      LeaveCriticalPolicySection( HANDLE );
USERENVAPI DWORD WINAPI     ProcessGroupPolicyCompleted( REFGPEXTENSIONID, ASYNCCOMPLETIONHANDLE, DWORD );
USERENVAPI DWORD WINAPI     ProcessGroupPolicyCompletedEx( REFGPEXTENSIONID, ASYNCCOMPLETIONHANDLE, DWORD, HRESULT );
USERENVAPI BOOL WINAPI      RefreshPolicy( BOOL );
USERENVAPI BOOL WINAPI      RefreshPolicyEx( BOOL, DWORD );
USERENVAPI BOOL WINAPI      RegisterGPNotification( HANDLE, BOOL );
USERENVAPI HRESULT WINAPI   RsopAccessCheckByType( PSECURITY_DESCRIPTOR, PSID, PRSOPTOKEN, DWORD, POBJECT_TYPE_LIST, DWORD, PGENERIC_MAPPING, PPRIVILEGE_SET, LPDWORD, LPDWORD, LPBOOL );
USERENVAPI HRESULT WINAPI   RsopFileAccessCheck( LPWSTR, PRSOPTOKEN, DWORD, LPDWORD, LPBOOL );
USERENVAPI BOOL WINAPI      UnregisterGPNotification( HANDLE );
#endif
#if (WINVER >= 0x0600)
USERENVAPI HRESULT WINAPI   CreateProfile( LPCWSTR, LPCWSTR, LPWSTR, DWORD );
#endif

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define GetUserProfileDirectory             GetUserProfileDirectoryW
    #define GetProfilesDirectory                GetProfilesDirectoryW
    #define LoadUserProfile                     LoadUserProfileW
    #if (WINVER >= 0x0500)
        #define DeleteProfile                   DeleteProfileW
        #define ExpandEnvironmentStringsForUser ExpandEnvironmentStringsForUserW
        #define FreeGPOList                     FreeGPOListW
        #define GetAllUsersProfileDirectory     GetAllUsersProfileDirectoryW
        #define GetAppliedGPOList               GetAppliedGPOListW
        #define GetDefaultUserProfileDirectory  GetDefaultUserProfileDirectoryW
        #define GetGPOList                      GetGPOListW
    #endif
#else
    #define GetUserProfileDirectory             GetUserProfileDirectoryA
    #define GetProfilesDirectory                GetProfilesDirectoryA
    #define LoadUserProfile                     LoadUserProfileA
    #if (WINVER >= 0x0500)
        #define DeleteProfile                   DeleteProfileA
        #define ExpandEnvironmentStringsForUser ExpandEnvironmentStringsForUserA
        #define FreeGPOList                     FreeGPOListA
        #define GetAllUsersProfileDirectory     GetAllUsersProfileDirectoryA
        #define GetAppliedGPOList               GetAppliedGPOListA
        #define GetDefaultUserProfileDirectory  GetDefaultUserProfileDirectoryA
        #define GetGPOList                      GetGPOListA
    #endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _INC_USERENV */
