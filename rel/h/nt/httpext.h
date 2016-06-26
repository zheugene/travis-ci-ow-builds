/*
 *  httpext.h   HTTP server extension definitions
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

#ifndef _HTTPEXT_H_
#define _HTTPEXT_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <windows.h>
#if (_WIN32_WINNT >= 0x0400)
    #include <wincrypt.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Connection handle */
typedef LPVOID  HCONN;

/* Version numbers */
#define HSE_VERSION_MAJOR   7
#define HSE_VERSION_MINOR   5
#define HSE_VERSION         MAKELONG( HSE_VERSION_MINOR, HSE_VERSION_MAJOR )

/* String lengths */
#define HSE_LOG_BUFFER_LEN          80
#define HSE_MAX_EXT_DLL_NAME_LEN    256

/* HTTP server extension status codes */
#define HSE_STATUS_SUCCESS                  1
#define HSE_STATUS_SUCCESS_AND_KEEP_CONN    2
#define HSE_STATUS_PENDING                  3
#define HSE_STATUS_ERROR                    4

/* HTTP server extension request codes */
#define HSE_REQ_BASE                            0
#define HSE_REQ_SEND_URL_REDIRECT_RESP          (HSE_REQ_BASE + 1)
#define HSE_REQ_SEND_URL                        (HSE_REQ_BASE + 2)
#define HSE_REQ_SEND_RESPONSE_HEADER            (HSE_REQ_BASE + 3)
#define HSE_REQ_DONE_WITH_SESSION               (HSE_REQ_BASE + 4)
#define HSE_REQ_END_RESERVED                    1000
#define HSE_REQ_MAP_URL_TO_PATH                 (HSE_REQ_END_RESERVED + 1)
#define HSE_REQ_GET_SSPI_INFO                   (HSE_REQ_END_RESERVED + 2)
#define HSE_APPEND_LOG_PARAMETER                (HSE_REQ_END_RESERVED + 3)
#define HSE_REQ_IO_COMPLETION                   (HSE_REQ_END_RESERVED + 5)
#define HSE_REQ_TRANSMIT_FILE                   (HSE_REQ_END_RESERVED + 6)
#define HSE_REQ_REFRESH_ISAPI_ACL               (HSE_REQ_END_RESERVED + 7)
#define HSE_REQ_IS_KEEP_CONN                    (HSE_REQ_END_RESERVED + 8)
#define HSE_REQ_ASYNC_READ_CLIENT               (HSE_REQ_END_RESERVED + 10)
#define HSE_REQ_GET_IMPERSONATION_TOKEN         (HSE_REQ_END_RESERVED + 11)
#define HSE_REQ_MAP_URL_TO_PATH_EX              (HSE_REQ_END_RESERVED + 12)
#define HSE_REQ_ABORTIVE_CLOSE                  (HSE_REQ_END_RESERVED + 14)
#define HSE_REQ_GET_CERT_INFO_EX                (HSE_REQ_END_RESERVED + 15)
#define HSE_REQ_SEND_RESPONSE_HEADER_EX         (HSE_REQ_END_RESERVED + 16)
#define HSE_REQ_CLOSE_CONNECTION                (HSE_REQ_END_RESERVED + 17)
#define HSE_REQ_IS_CONNECTED                    (HSE_REQ_END_RESERVED + 18)
#define HSE_REQ_MAP_UNICODE_URL_TO_PATH         (HSE_REQ_END_RESERVED + 23)
#define HSE_REQ_MAP_UNICODE_URL_TO_PATH_EX      (HSE_REQ_END_RESERVED + 24)
#define HSE_REQ_EXEC_UNICODE_URL                (HSE_REQ_END_RESERVED + 25)
#define HSE_REQ_EXEC_URL                        (HSE_REQ_END_RESERVED + 26)
#define HSE_REQ_GET_EXEC_URL_STATUS             (HSE_REQ_END_RESERVED + 27)
#define HSE_REQ_SEND_CUSTOM_ERROR               (HSE_REQ_END_RESERVED + 28)
#define HSE_REQ_IS_IN_PROGRESS                  (HSE_REQ_END_RESERVED + 30)
#define HSE_REQ_REPORT_UNHEALTHY                (HSE_REQ_END_RESERVED + 32)
#define HSE_REQ_NORMALIZE_URL                   (HSE_REQ_END_RESERVED + 33)
#define HSE_REQ_VECTOR_SEND                     (HSE_REQ_END_RESERVED + 37)
#define HSE_REQ_GET_ANONYMOUS_TOKEN             (HSE_REQ_END_RESERVED + 38)
#define HSE_REQ_GET_CACHE_INVALIDATION_CALLBACK (HSE_REQ_END_RESERVED + 40)
#define HSE_REQ_GET_UNICODE_ANONYMOUS_TOKEN     (HSE_REQ_END_RESERVED + 41)
#define HSE_REQ_GET_TRACE_INFO                  (HSE_REQ_END_RESERVED + 42)
#define HSE_REQ_SET_FLUSH_FLAG                  (HSE_REQ_END_RESERVED + 43)
#define HSE_REQ_GET_TRACE_INFO_EX               (HSE_REQ_END_RESERVED + 44)
#define HSE_REQ_RAISE_TRACE_EVENT               (HSE_REQ_END_RESERVED + 45)
#define HSE_REQ_GET_CONFIG_OBJECT               (HSE_REQ_END_RESERVED + 46)
#define HSE_REQ_GET_WORKER_PROCESS_SETTINGS     (HSE_REQ_END_RESERVED + 47)
#define HSE_REQ_GET_PROTOCOL_MANAGER_CUSTOM_INTERFACE_CALLBACK  (HSE_REQ_END_RESERVED + 48)
#define HSE_REQ_CANCEL_IO                       (HSE_REQ_END_RESERVED + 49)
#define HSE_REQ_GET_CHANNEL_BINDING_TOKEN       (HSE_REQ_END_RESERVED + 50)

/* TerminateExtension() flags */
#define HSE_TERM_ADVISORY_UNLOAD    0x00000001L
#define HSE_TERM_MUST_UNLOAD        0x00000002L

/* I/O flags */
#define HSE_IO_SYNC                     0x00000001L
#define HSE_IO_ASYNC                    0x00000002L
#define HSE_IO_DISCONNECT_AFTER_SEND    0x00000004L
#define HSE_IO_SEND_HEADERS             0x00000008L
#define HSE_IO_FINAL_SEND               0x00000010L
#define HSE_IO_CACHE_RESPONSE           0x00000020L
#define HSE_IO_TRY_SKIP_CUSTOM_ERRORS   0x00000040L
#define HSE_IO_NODELAY                  0x00001000L

/* URL flags */
#define HSE_URL_FLAGS_READ          0x00000001L
#define HSE_URL_FLAGS_WRITE         0x00000002L
#define HSE_URL_FLAGS_EXECUTE       0x00000004L
#define HSE_URL_FLAGS_SSL           0x00000008L
#define HSE_URL_FLAGS_DONT_CACHE    0x00000010L
#define HSE_URL_FLAGS_NEGO_CERT     0x00000020L
#define HSE_URL_FLAGS_REQUIRE_CERT  0x00000040L
#define HSE_URL_FLAGS_MAP_CERT      0x00000080L
#define HSE_URL_FLAGS_SSL128        0x00000100L
#define HSE_URL_FLAGS_SCRIPT        0x00000200L
#define HSE_URL_FLAGS_MASK          0x000003FFL

/* HSE_REQ_EXEC_URL flags */
#define HSE_EXEC_URL_NO_HEADERS                     0x00000002L
#define HSE_EXEC_URL_IGNORE_CURRENT_INTERCEPTOR     0x00000004L
#define HSE_EXEC_URL_IGNORE_VALIDATION_AND_RANGE    0x00000010L
#define HSE_EXEC_URL_DISABLE_CUSTOM_ERROR           0x00000020L
#define HSE_EXEC_URL_SSI_CMD                        0x00000040L
#define HSE_EXEC_URL_HTTP_CACHE_ELIGIBLE            0x00000080L

/* Vector element types */
#define HSE_VECTOR_ELEMENT_TYPE_MEMORY_BUFFER   0L
#define HSE_VECTOR_ELEMENT_TYPE_FILE_HANDLE     1L

/* Application type flags */
#define HSE_APP_FLAG_IN_PROCESS     0L
#define HSE_APP_FLAG_ISOLATED_OOP   1L
#define HSE_APP_FLAG_POOLED_OOP     2L

/* GetExtensionVersion() parameters */
typedef struct _HSE_VERSION_INFO {
    DWORD   dwExtensionVersion;
    CHAR    lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];
} HSE_VERSION_INFO;
typedef HSE_VERSION_INFO    *LPHSE_VERSION_INFO;

/* Extension control block */
typedef struct _EXTENSION_CONTROL_BLOCK {
    DWORD   cbSize;
    DWORD   dwVersion;
    HCONN   ConnID;
    DWORD   dwHttpStatusCode;
    CHAR    lpszLogData[HSE_LOG_BUFFER_LEN];
    LPSTR   lpszMethod;
    LPSTR   lpszQueryString;
    LPSTR   lpszPathInfo;
    LPSTR   lpszPathTranslated;
    DWORD   cbTotalBytes;
    DWORD   cbAvailable;
    LPBYTE  lpbData;
    LPSTR   lpszContentType;
    BOOL    (WINAPI *GetServerVariable)( HCONN, LPSTR, LPVOID, LPDWORD );
    BOOL    (WINAPI *WriteClient)( HCONN, LPVOID, LPDWORD, DWORD );
    BOOL    (WINAPI *ReadClient)( HCONN, LPVOID, LPDWORD );
    BOOL    (WINAPI *ServerSupportFunction)( HCONN, DWORD, LPVOID, LPDWORD, LPDWORD );
} EXTENSION_CONTROL_BLOCK;
typedef EXTENSION_CONTROL_BLOCK *LPEXTENSION_CONTROL_BLOCK;

/* Extended URL mapping information */
typedef struct _HSE_URL_MAPEX_INFO {
    CHAR    lpszPath[MAX_PATH];
    DWORD   dwFlags;
    DWORD   cchMatchingPath;
    DWORD   cchMatchingURL;
    DWORD   dwReserved1;
    DWORD   dwReserved2;
} HSE_URL_MAPEX_INFO;
typedef HSE_URL_MAPEX_INFO  *LPHSE_URL_MAPEX_INFO;

/* Unicode extended URL mapping information */
typedef struct _HSE_UNICODE_URL_MAPEX_INFO {
    WCHAR   lpszPath[MAX_PATH];
    DWORD   dwFlags;
    DWORD   cchMatchingPath;
    DWORD   cchMatchingURL;
} HSE_UNICODE_URL_MAPEX_INFO;
typedef HSE_UNICODE_URL_MAPEX_INFO  *LPHSE_UNICODE_URL_MAPEX_INFO;

/* I/O completion callback */
typedef VOID (WINAPI *PFN_HSE_IO_COMPLETION)( EXTENSION_CONTROL_BLOCK *, PVOID, DWORD, DWORD );

/* HSE_REQ_TRANSMIT_FILE parameters */
typedef struct _HSE_TF_INFO {
    PFN_HSE_IO_COMPLETION   pfnHseIO;
    PVOID                   pContext;
    HANDLE                  hFile;
    LPCSTR                  pszStatusCode;
    DWORD                   BytesToWrite;
    DWORD                   Offset;
    PVOID                   pHead;
    DWORD                   HeadLength;
    PVOID                   pTail;
    DWORD                   TailLength;
    DWORD                   dwFlags;
} HSE_TF_INFO;
typedef HSE_TF_INFO *LPHSE_TF_INFO;

/* Extended send header information */
typedef struct _HSE_SEND_HEADER_EX_INFO {
    LPCSTR  pszStatus;
    LPCSTR  pszHeader;
    DWORD   cchStatus;
    DWORD   cchHeader;
    BOOL    fKeepConn;
} HSE_SEND_HEADER_EX_INFO;
typedef HSE_SEND_HEADER_EX_INFO *LPHSE_SEND_HEADER_EX_INFO;

/* HSE_REQ_EXEC_URL user information */
typedef struct _HSE_EXEC_URL_USER_INFO {
    HANDLE  hImpersonationToken;
    LPSTR   pszCustomUserName;
    LPSTR   pszCustomAuthType;
} HSE_EXEC_URL_USER_INFO;
typedef HSE_EXEC_URL_USER_INFO  *LPHSE_EXEC_URL_USER_INFO;

/* HSE_REQ_EXEC_URL entity information */
typedef struct _HSE_EXEC_URL_ENTITY_INFO {
    DWORD   cbAvailable;
    LPVOID  lpbData;
} HSE_EXEC_URL_ENTITY_INFO;
typedef HSE_EXEC_URL_ENTITY_INFO    *LPHSE_EXEC_URL_ENTITY_INFO;

/* HSE_REQ_EXEC_URL status */
typedef struct _HSE_EXEC_URL_STATUS {
    USHORT  uHttpStatusCode;
    USHORT  uHttpSubStatus;
    DWORD   dwWin32Error;
} HSE_EXEC_URL_STATUS;
typedef HSE_EXEC_URL_STATUS *LPHSE_EXEC_URL_STATUS;

/* HSE_REQ_EXEC_URL parameters */
typedef struct _HSE_EXEC_URL_INFO {
    LPSTR                       pszUrl;
    LPSTR                       pszMethod;
    LPSTR                       pszChildHeaders;
    LPHSE_EXEC_URL_USER_INFO    pUserInfo;
    LPHSE_EXEC_URL_ENTITY_INFO  pEntity;
    DWORD                       dwExecUrlFlags;
} HSE_EXEC_URL_FLAGS;
typedef HSE_EXEC_URL_FLAGS  *LPHSE_EXEC_URL_FLAGS;

/* HSE_REQ_EXEC_UNICODE_URL user information */
typedef struct _HSE_EXEC_UNICODE_URL_USER_INFO {
    HANDLE  hImpersonationToken;
    LPWSTR  pszCustomUserName;
    LPSTR   pszCustomAuthType;
} HSE_EXEC_UNICODE_URL_USER_INFO;
typedef HSE_EXEC_UNICODE_URL_USER_INFO  *LPHSE_EXEC_UNICODE_URL_USER_INFO;

/* HSE_REQ_EXEC_UNICODE_URL parameters */
typedef struct _HSE_EXEC_UNICODE_URL_INFO {
    LPWSTR                              pszUrl;
    LPSTR                               pszMethod;
    LPSTR                               pszChildHeaders;
    LPHSE_EXEC_UNICODE_URL_USER_INFO    pUserInfo;
    LPHSE_EXEC_URL_ENTITY_INFO          pEntity;
    DWORD                               dwExecUrlFlags;
} HSE_EXEC_UNICODE_URL_INFO;
typedef HSE_EXEC_UNICODE_URL_INFO   *LPHSE_EXEC_UNICODE_URL_INFO;

/* Custom error information */
typedef struct _HSE_CUSTOM_ERROR_INFO {
    CHAR    *pszStatus;
    USHORT  uHttpSubError;
    BOOL    fAsync;
} HSE_CUSTOM_ERROR_INFO;
typedef HSE_CUSTOM_ERROR_INFO   *LPHSE_CUSTOM_ERROR_INFO;

/* Vector element */
typedef struct _HSE_VECTOR_ELEMENT {
    DWORD       ElementType;
    PVOID       pvContext;
    ULONGLONG   cbOffset;
    ULONGLONG   cbSize;
} HSE_VECTOR_ELEMENT;
typedef HSE_VECTOR_ELEMENT  *LPHSE_VECTOR_ELEMENT;

/* Response vector */
typedef struct _HSE_RESPONSE_VECTOR {
    DWORD                   dwFlags;
    LPSTR                   pszStatus;
    LPSTR                   pszHeaders;
    DWORD                   nElementCount;
    LPHSE_VECTOR_ELEMENT    lpElementArray;
} HSE_RESPONSE_VECTOR;
typedef HSE_RESPONSE_VECTOR *LPHSE_RESPONSE_VECTOR;

/* Cache invalidation callback */
typedef HRESULT (WINAPI *PFN_HSE_CACHE_INVALIDATION_CALLBACK)( WCHAR * );

/* Certificate context (extended version) */
#if (_WIN32_WINNT >= 0x0400)
typedef struct _CERT_CONTEXT_EX {
    CERT_CONTEXT    CertContext;
    DWORD           cbAllocated;
    DWORD           dwCertificateFlags;
} CERT_CONTEXT_EX;
#endif

/* Trace information */
typedef struct _HSE_TRACE_INFO {
    BOOL    fTraceRequest;
    BYTE    TraceContextId[16];
    DWORD   dwReserved1;
    DWORD   dwReserved2;
} HSE_TRACE_INFO;
typedef HSE_TRACE_INFO  *LPHSE_TRACE_INFO;

/* Custom interface callback */
typedef HRESULT (WINAPI *PFN_HSE_GET_PROTOCOL_MANAGER_CUSTOM_INTERFACE_CALLBACK)( LPCWSTR, LPCWSTR, DWORD, PVOID * );

/* Functions exported by HTTP server extensions */
BOOL WINAPI     GetExtensionVersion( HSE_VERSION_INFO * );
DWORD WINAPI    HttpExtensionProc( EXTENSION_CONTROL_BLOCK * );
BOOL WINAPI     TerminateExtension( DWORD );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _HTTPEXT_H_ */
