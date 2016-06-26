/*
 *  subauth.h   Subauthentication definitions
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

#ifndef _NTSUBAUTH_
#define _NTSUBAUTH_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* NT error code data type */
#ifndef _NTSTATUS_DEFINED
#define _NTSTATUS_DEFINED
typedef LONG    NTSTATUS;
typedef LONG    *PNTSTATUS;
#endif

/* SAM handle data type */
typedef PVOID   SAM_HANDLE;
typedef PVOID   *PSAM_HANDLE;

/* Macro to test a status code for success */
#ifndef _NTDEF_
    #define NT_SUCCESS( x ) ((NTSTATUS)(x) >= 0)
#endif

/* User account control flags */
#define USER_ACCOUNT_DISABLED                       0x00000001L
#define USER_HOME_DIRECTORY_REQUIRED                0x00000002L
#define USER_PASSWORD_NOT_REQUIRED                  0x00000004L
#define USER_TEMP_DUPLICATE_ACCOUNT                 0x00000008L
#define USER_NORMAL_ACCOUNT                         0x00000010L
#define USER_MNS_LOGON_ACCOUNT                      0x00000020L
#define USER_INTERDOMAIN_TRUST_ACCOUNT              0x00000040L
#define USER_WORKSTATION_TRUST_ACCOUNT              0x00000080L
#define USER_SERVER_TRUST_ACCOUNT                   0x00000100L
#define USER_DONT_EXPIRE_PASSWORD                   0x00000200L
#define USER_ACCOUNT_AUTO_LOCKED                    0x00000400L
#define USER_ENCRYPTED_TEXT_PASSWORD_ALLOWED        0x00000800L
#define USER_SMARTCARD_REQUIRED                     0x00001000L
#define USER_TRUSTED_FOR_DELEGATION                 0x00002000L
#define USER_NOT_DELEGATED                          0x00004000L
#define USER_USE_DES_KEY_ONLY                       0x00008000L
#define USER_DONT_REQUIRE_PREAUTH                   0x00010000L
#define USER_PASSWORD_EXPIRED                       0x00020000L
#define USER_TRUSTED_TO_AUTHENTICATE_FOR_DELEGATION 0x00040000L
#define USER_NO_AUTH_DATA_REQUIRED                  0x00080000L
#define USER_PARTIAL_SECRETS_ACCOUNT                0x00100000L
#define USER_USE_AES_KEYS                           0x00200000L
#define USER_MACHINE_ACCOUNT_MASK \
    (USER_INTERDOMAIN_TRUST_ACCOUNT | USER_WORKSTATION_TRUST_ACCOUNT | \
    USER_SERVER_TRUST_ACCOUNT)
#define USER_ACCOUNT_TYPE_MASK \
    (USER_TEMP_DUPLICATE_ACCOUNT | USER_NORMAL_ACCOUNT | USER_MACHINE_ACCOUNT_MASK)
#define USER_COMPUTED_ACCOUNT_CONTROL_BITS \
    (USER_ACCOUNT_AUTO_LOCKED | USER_PASSWORD_EXPIRED)

/* Conversion factors */
#define SAM_DAYS_PER_WEEK       7
#define SAM_HOURS_PER_WEEK      (24 * SAM_DAYS_PER_WEEK)
#define SAM_MINUTES_PER_WEEK    (60 * SAM_HOURS_PER_WEEK)

/* User parameters */
#define USER_ALL_PARAMETERS 0x00200000L

/* Block length */
#define CLEAR_BLOCK_LENGTH      8
#define CYPHER_BLOCK_LENGTH     8
#define USER_SESSION_KEY_LENGTH (CYPHER_BLOCK_LENGTH * 2)

/* Msv1_0SubAuthenticationRoutine() flags */
#define MSV1_0_PASSTHRU     0x00000001L
#define MSV1_0_GUEST_LOGON  0x00000002L

/* MSV1.0 validation information fields */
#define MSV1_0_VALIDATION_LOGOFF_TIME   0x00000001L
#define MSV1_0_VALIDATION_KICKOFF_TIME  0x00000002L
#define MSV1_0_VALIDATION_LOGON_SERVER  0x00000004L
#define MSV1_0_VALIDATION_LOGON_DOMAIN  0x00000008L
#define MSV1_0_VALIDATION_SESSION_KEY   0x00000010L
#define MSV1_0_VALIDATION_USER_FLAGS    0x00000020L
#define MSV1_0_VALIDATION_USER_ID       0x00000040L

/* MSV1.0 subauthentication action flags */
#define MSV1_0_SUBAUTH_ACCOUNT_DISABLED 0x00000001L
#define MSV1_0_SUBAUTH_PASSWORD         0x00000002L
#define MSV1_0_SUBAUTH_WORKSTATIONS     0x00000004L
#define MSV1_0_SUBAUTH_LOGON_HOURS      0x00000008L
#define MSV1_0_SUBAUTH_ACCOUNT_EXPIRY   0x00000010L
#define MSV1_0_SUBAUTH_PASSWORD_EXPIRY  0x00000020L
#define MSV1_0_SUBAUTH_ACCOUNT_TYPE     0x00000040L
#define MSV1_0_SUBAUTH_LOCKOUT          0x00000080L

/* Status codes */
#define STATUS_SUCCESS                  0x00000000L
#define STATUS_INVALID_INFO_CLASS       0xC0000003L
#define STATUS_NO_SUCH_USER             0xC0000064L
#define STATUS_WRONG_PASSWORD           0xC000006AL
#define STATUS_PASSWORD_RESTRICTION     0xC000006CL
#define STATUS_LOGON_FAILURE            0xC000006DL
#define STATUS_ACCOUNT_RESTRICTION      0xC000006EL
#define STATUS_INVALID_LOGON_HOURS      0xC000006FL
#define STATUS_INVALID_WORKSTATION      0xC0000070L
#define STATUS_PASSWORD_EXPIRED         0xC0000071L
#define STATUS_ACCOUNT_DISABLED         0xC0000072L
#define STATUS_INSUFFICIENT_RESOURCES   0xC000009AL
#define STATUS_ACCOUNT_EXPIRED          0xC0000193L
#define STATUS_PASSWORD_MUST_CHANGE     0xC0000224L
#define STATUS_ACCOUNT_LOCKED_OUT       0xC0000234L

/* Unicode string */
#if !defined( _NTDEF_ ) && !defined( _NTSECAPI_ )
typedef struct _UNICODE_STRING {
    USHORT  Length;
    USHORT  MaximumLength;
    PWSTR   Buffer;
} UNICODE_STRING;
typedef UNICODE_STRING  *PUNICODE_STRING;
#endif

/* String */
#if !defined( _NTDEF_ ) && !defined( _NTSECAPI_ )
typedef struct _STRING {
    USHORT  Length;
    USHORT  MaximumLength;
    PCHAR   Buffer;
} STRING;
typedef STRING   *PSTRING;
#endif

/* Old large integer */
#ifndef _NTDEF_
typedef struct _OLD_LARGE_INTEGER {
    ULONG   LowPart;
    LONG    HighPart;
} OLD_LARGE_INTEGER;
typedef OLD_LARGE_INTEGER   *POLD_LARGE_INTEGER;
#endif

/* Logon hours */
typedef struct _LOGON_HOURS {
    USHORT  UnitsPerWeek;
    PUCHAR  LogonHours;
} LOGON_HOURS;
typedef LOGON_HOURS *PLOGON_HOURS;

/* Security descriptor */
typedef struct _SR_SECURITY_DESCRIPTOR {
    ULONG   Length;
    PUCHAR  SecurityDescriptor;
} SR_SECURITY_DESCRIPTOR;
typedef SR_SECURITY_DESCRIPTOR  *PSR_SECURITY_DESCRIPTOR;

/* User all information */
#include <pshpack4.h>
typedef struct _USER_ALL_INFORMATION {
    LARGE_INTEGER   LastLogon;
    LARGE_INTEGER   LastLogoff;
    LARGE_INTEGER   PasswordLastSet;
    LARGE_INTEGER   AccountExpires;
    LARGE_INTEGER   PasswordCanChange;
    LARGE_INTEGER   PasswordMustChange;
    UNICODE_STRING  UserName;
    UNICODE_STRING  FullName;
    UNICODE_STRING  HomeDirectory;
    UNICODE_STRING  HomeDirectoryDrive;
    UNICODE_STRING  ScriptPath;
    UNICODE_STRING  ProfilePath;
    UNICODE_STRING  AdminComment;
    UNICODE_STRING  WorkStations;
    UNICODE_STRING  UserComment;
    UNICODE_STRING  Parameters;
    UNICODE_STRING  LmPassword;
    UNICODE_STRING  NtPassword;
    UNICODE_STRING  PrivateData;
    SR_SECURITY_DESCRIPTOR  SecurityDescriptor;
    ULONG           UserId;
    ULONG           PrimaryGroupId;
    ULONG           UserAccountControl;
    ULONG           WhichFields;
    LOGON_HOURS     LogonHours;
    USHORT          BadPasswordCount;
    USHORT          LogonCount;
    USHORT          CountryCode;
    USHORT          CodePage;
    BOOLEAN         LmPasswordPresent;
    BOOLEAN         NtPasswordPresent;
    BOOLEAN         PasswordExpired;
    BOOLEAN         PrivateDataSensitive;
} USER_ALL_INFORMATION;
typedef USER_ALL_INFORMATION    *PUSER_ALL_INFORMATION;
#include <poppack.h>

/* Clear block */
typedef struct _CLEAR_BLOCK {
    CHAR    data[CLEAR_BLOCK_LENGTH];
} CLEAR_BLOCK;
typedef CLEAR_BLOCK     *PCLEAR_BLOCK;
typedef CLEAR_BLOCK     LM_CHALLENGE;
typedef LM_CHALLENGE    *PLM_CHALLENGE;
typedef LM_CHALLENGE    NT_CHALLENGE;
typedef NT_CHALLENGE    *PNT_CHALLENGE;

/* Cypher block */
typedef struct _CYPHER_BLOCK {
    CHAR    data[CYPHER_BLOCK_LENGTH];
} CYPHER_BLOCK;
typedef CYPHER_BLOCK    *PCYPHER_BLOCK;

/* LAN Manager OWF password */
typedef struct _LM_OWF_PASSWORD {
    CYPHER_BLOCK    data[2];
} LM_OWF_PASSWORD;
typedef LM_OWF_PASSWORD *PLM_OWF_PASSWORD;
typedef LM_OWF_PASSWORD NT_OWF_PASSWORD;
typedef NT_OWF_PASSWORD *PNT_OWF_PASSWORD;

/* User session key */
typedef struct _USER_SESSION_KEY {
    CYPHER_BLOCK    data[2];
} USER_SESSION_KEY;
typedef USER_SESSION_KEY    *PUSER_SESSION_KEY;

/* Network logon information classes */
typedef enum _NETLOGON_LOGON_INFO_CLASS {
    NetlogonInteractiveInformation              = 1,
    NetlogonNetworkInformation                  = 2,
    NetlogonServiceInformation                  = 3,
    NetlogonGenericInformation                  = 4,
    NetlogonInteractiveTransitiveInformation    = 5,
    NetlogonNetworkTransitiveInformation        = 6,
    NetlogonServiceTransitiveInformation        = 7
} NETLOGON_LOGON_INFO_CLASS;
    
/* Network logon identity information */
typedef struct _NETLOGON_LOGON_IDENTITY_INFO {
    UNICODE_STRING      LogonDomainName;
    ULONG               ParameterControl;
    OLD_LARGE_INTEGER   LogonId;
    UNICODE_STRING      UserName;
    UNICODE_STRING      Workstation;
} NETLOGON_LOGON_IDENTITY_INFO;
typedef NETLOGON_LOGON_IDENTITY_INFO    *PNETLOGON_LOGON_IDENTITY_INFO;

/* Network logon interactive information */
typedef struct _NETLOGON_INTERACTIVE_INFO {
    NETLOGON_LOGON_IDENTITY_INFO    Identity;
    LM_OWF_PASSWORD                 LmOwfPassword;
    NT_OWF_PASSWORD                 NtOwfPassword;
} NETLOGON_INTERACTIVE_INFO;
typedef NETLOGON_INTERACTIVE_INFO   *PNETLOGON_INTERACTIVE_INFO;

/* Network logon service information */
typedef struct _NETLOGON_SERVICE_INFO {
    NETLOGON_LOGON_IDENTITY_INFO    Identity;
    LM_OWF_PASSWORD                 LmOwfPassword;
    NT_OWF_PASSWORD                 NtOwfPassword;
} NETLOGON_SERVICE_INFO;
typedef NETLOGON_SERVICE_INFO   *PNETLOGON_SERVICE_INFO;

/* Network logon network information */
typedef struct _NETLOGON_NETWORK_INFO {
    NETLOGON_LOGON_IDENTITY_INFO    Identity;
    LM_CHALLENGE                    LmChallenge;
    STRING                          NtChallengeResponse;
    STRING                          LmChallengeResponse;
} NETLOGON_NETWORK_INFO;
typedef NETLOGON_NETWORK_INFO   *PNETLOGON_NETWORK_INFO;

/* Network logon generic information */
typedef struct _NETLOGON_GENERIC_INFO {
    NETLOGON_LOGON_IDENTITY_INFO    Identity;
    UNICODE_STRING                  PackageName;
    ULONG                           DataLength;
    PUCHAR                          LogonData;
} NETLOGON_GENERIC_INFO;
typedef NETLOGON_GENERIC_INFO   *PNETLOGON_GENERIC_INFO;

/* MSV1.0 validation information */
typedef struct _MSV1_0_VALIDATION_INFO {
    LARGE_INTEGER       LogoffTime;
    LARGE_INTEGER       KickoffTime;
    UNICODE_STRING      LogonServer;
    UNICODE_STRING      LogonDomainName;
    USER_SESSION_KEY    SessionKey;
    BOOLEAN             Authoritative;
    ULONG               UserFlags;
    ULONG               WhichFields;
    ULONG               UserId;
} MSV1_0_VALIDATION_INFO;
typedef MSV1_0_VALIDATION_INFO  *PMSV1_0_VALIDATION_INFO;

/* Functions exported by subauthentication packages */
NTSTATUS NTAPI  Msv1_0SubAuthenticationFilter( NETLOGON_LOGON_INFO_CLASS, PVOID, ULONG, PUSER_ALL_INFORMATION, PULONG, PULONG, PBOOLEAN, PLARGE_INTEGER, PLARGE_INTEGER );
NTSTATUS NTAPI  Msv1_0SubAuthenticationRoutine( NETLOGON_LOGON_INFO_CLASS, PVOID, ULONG, PUSER_ALL_INFORMATION, PULONG, PULONG, PBOOLEAN, PLARGE_INTEGER, PLARGE_INTEGER );
NTSTATUS NTAPI  Msv1_0SubAuthenticationRoutineEx( NETLOGON_LOGON_INFO_CLASS, PVOID, ULONG, PUSER_ALL_INFORMATION, SAM_HANDLE, PMSV1_0_VALIDATION_INFO, PULONG );
NTSTATUS NTAPI  Msv1_0SubAuthenticationRoutineGeneric( PVOID, ULONG, PULONG, PVOID * );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTSUBAUTH_ */
