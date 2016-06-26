/*
 *  ws2def.h    Windows Sockets (version 2) definitions
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

#ifndef _WS2DEF_
#define _WS2DEF_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <inaddr.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Address family data type */
typedef USHORT  ADDRESS_FAMILY;

/* Address families */
#define AF_UNSPEC           0
#define AF_UNIX             1
#define AF_INET             2
#define AF_IMPLINK          3
#define AF_PUP              4
#define AF_CHAOS            5
#define AF_NS               6
#define AF_IPX              AF_NS
#define AF_ISO              7
#define AF_OSI              AF_ISO
#define AF_ECMA             8
#define AF_DATAKIT          9
#define AF_CCITT            10
#define AF_SNA              11
#define AF_DECnet           12
#define AF_DLI              13
#define AF_LAT              14
#define AF_HYLINK           15
#define AF_APPLETALK        16
#define AF_NETBIOS          17
#define AF_VOICEVIEW        18
#define AF_FIREFOX          19
#define AF_UNKNOWN1         20
#define AF_BAN              21
#define AF_ATM              22
#define AF_INET6            23
#define AF_CLUSTER          24
#define AF_12844            25
#define AF_IRDA             26
#define AF_NETDES           28
#if (_WIN32_WINNT >= 0x0501)
    #define AF_TCNPROCESS   29
    #define AF_TCNMESSAGE   30
    #define AF_ICLFXBM      31
#endif
#if (_WIN32_WINNT >= 0x0600)
    #define AF_BTH          32
#endif
#if (_WIN32_WINNT >= 0x0601)
    #define AF_LINK         33
    #define AF_MAX          34
#elif (_WIN32_WINNT >= 0x0600)
    #define AF_MAX          33
#elif (_WIN32_WINNT >= 0x0501)
    #define AF_MAX          32
#else
    #define AF_MAX          29
#endif

/* Socket types */
#define SOCK_STREAM     1
#define SOCK_DGRAM      2
#define SOCK_RAW        3
#define SOCK_RDM        4
#define SOCK_REQPACKET  5

/* Socket I/O control level */
#define SOL_SOCKET  0xFFFF

/* Socket options */
#define SO_DEBUG                0x0001
#define SO_ACCEPTCONN           0x0002
#define SO_REUSEADDR            0x0004
#define SO_KEEPALIVE            0x0008
#define SO_DONTROUTE            0x0010
#define SO_BROADCAST            0x0020
#define SO_USELOOPBACK          0x0040
#define SO_LINGER               0x0080
#define SO_OOBINLINE            0x0100
#define SO_DONTLINGER           (int)(~SO_LINGER)
#define SO_EXCLUSIVEADDRUSE     (int)(~SO_REUSEADDR)
#define SO_SNDBUF               0x1001
#define SO_RCVBUF               0x1002
#define SO_SNDLOWAT             0x1003
#define SO_RCVLOWAT             0x1004
#define SO_SNDTIMEO             0x1005
#define SO_RCVTIMEO             0x1006
#define SO_ERROR                0x1007
#define SO_TYPE                 0x1008
#define SO_BSP_STATE            0x1009
#define SO_GROUP_ID             0x2001
#define SO_GROUP_PRIORITY       0x2002
#define SO_MAX_MSG_SIZE         0x2003
#define SO_CONDITIONAL_ACCEPT   0x3002
#define SO_PAUSE_ACCEPT         0x3003
#define SO_COMPARTMENT_ID       0x3004
#if (_WIN32_WINNT >= 0x0600)
    #define SO_RANDOMIZE_PORT   0x3005
    #define SO_PORT_SCALABILITY 0x3006
#endif
#define WSK_SO_BASE             0x4000

/* TCP socket options */
#define TCP_NODELAY 0x0001

/* Socket storage padding sizes */
#define _SS_MAXSIZE     128
#define _SS_ALIGNSIZE   sizeof( __int64 )
#if (_WIN32_WINNT >= 0x0600)
    #define _SS_PAD1SIZE \
        (_SS_ALIGNSIZE - sizeof( USHORT ))
    #define _SS_PAD2SIZE \
        (_SS_MAXSIZE - (sizeof( USHORT ) + _SS_PAD1SIZE + _SS_ALIGNSIZE))
#else
    #define _SS_PAD1SIZE \
        (_SS_ALIGNSIZE - sizeof( short ))
    #define _SS_PAD2SIZE \
        (_SS_MAXSIZE - (sizeof( short ) + _SS_PAD1SIZE + _SS_ALIGNSIZE))
#endif

/* Flags to define ioctlsocket() and WSAIoctl() commands */
#define IOCPARM_MASK    0x0000007F
#define IOC_VOID        0x20000000
#define IOC_OUT         0x40000000
#define IOC_IN          0x80000000
#define IOC_INOUT       (IOC_IN | IOC_OUT)
#define IOC_UNIX        0x00000000
#define IOC_WS2         0x08000000
#define IOC_PROTOCOL    0x10000000
#define IOC_VENDOR      0x18000000
#if (_WIN32_WINNT >= 0x0600)
    #define IOC_WSK     (IOC_WS2 | 0x07000000)
#endif

/* Macros to define ioctlsocket() commands */
#define _IO( p1, p2 )   (IOC_VOID | ((p1) << 8) | (p2))
#define _IOR( p1, p2, p3 ) \
    (IOC_OUT | (((long)sizeof( p3 ) & IOCPARM_MASK) << 16) | ((p1) << 8) | (p2))
#define _IOW( p1, p2, p3 ) \
    (IOC_IN | (((long)sizeof( p3 ) & IOCPARM_MASK) << 16) | ((p1) << 8) | (p2))

/* Macros to define WSAIoctl() commands */
#define _WSAIO( p1, p2 )    (IOC_VOID | (p1) | (p2))
#define _WSAIOR( p1, p2 )   (IOC_OUT | (p1) | (p2))
#define _WSAIOW( p1, p2 )   (IOC_IN | (p1) | (p2))
#define _WSAIORW( p1, p2 )  (IOC_INOUT | (p1) | (p2))

/* Socket I/O control codes */
#define SIO_ASSOCIATE_HANDLE                _WSAIOW( IOC_WS2, 1 )
#define SIO_ENABLE_CIRCULAR_QUEUEING        _WSAIO( IOC_WS2, 2 )
#define SIO_FIND_ROUTE                      _WSAIOR( IOC_WS2, 3 )
#define SIO_FLUSH                           _WSAIO( IOC_WS2, 4 )
#define SIO_GET_BROADCAST_ADDRESS           _WSAIOR( IOC_WS2, 5 )
#define SIO_GET_EXTENSION_FUNCTION_POINTER  _WSAIORW( IOC_WS2, 6 )
#define SIO_GET_QOS                         _WSAIORW( IOC_WS2, 7 )
#define SIO_GET_GROUP_QOS                   _WSAIORW( IOC_WS2, 8 )
#define SIO_MULTIPOINT_LOOPBACK             _WSAIOW( IOC_WS2, 9 )
#define SIO_MULTICAST_SCOPE                 _WSAIOW( IOC_WS2, 10 )
#define SIO_SET_QOS                         _WSAIOW( IOC_WS2, 11 )
#define SIO_SET_GROUP_QOS                   _WSAIOW( IOC_WS2, 12 )
#define SIO_TRANSLATE_HANDLE                _WSAIORW( IOC_WS2, 13 )
#define SIO_ROUTING_INTERFACE_QUERY         _WSAIORW( IOC_WS2, 20 )
#define SIO_ROUTING_INTERFACE_CHANGE        _WSAIOW( IOC_WS2, 21 )
#define SIO_ADDRESS_LIST_QUERY              _WSAIOR( IOC_WS2, 22 )
#define SIO_ADDRESS_LIST_CHANGE             _WSAIO( IOC_WS2, 23 )
#define SIO_QUERY_TARGET_PNP_HANDLE         _WSAIOR( IOC_WS2, 24 )
#if (_WIN32_WINNT >= 0x0501)
    #define SIO_ADDRESS_LIST_SORT           _WSAIORW( IOC_WS2, 25 )
#endif

/* IP protocol special value */
#define IPPROTO_IP  0

/* IP port numbers */
#define IPPORT_TCPMUX       1
#define IPPORT_ECHO         7
#define IPPORT_DISCARD      9
#define IPPORT_SYSTAT       11
#define IPPORT_DAYTIME      13
#define IPPORT_NETSTAT      15
#define IPPORT_QOTD         17
#define IPPORT_MSP          18
#define IPPORT_CHARGEN      19
#define IPPORT_FTP_DATA     20
#define IPPORT_FTP          21
#define IPPORT_TELNET       23
#define IPPORT_SMTP         25
#define IPPORT_TIMESERVER   37
#define IPPORT_NAMESERVER   42
#define IPPORT_WHOIS        43
#define IPPORT_MTP          57
#define IPPORT_TFTP         69
#define IPPORT_RJE          77
#define IPPORT_FINGER       79
#define IPPORT_TTYLINK      87
#define IPPORT_SUPDUP       95
#define IPPORT_POP3         110
#define IPPORT_NTP          123
#define IPPORT_EPMAP        135
#define IPPORT_NETBIOS_NS   137
#define IPPORT_NETBIOS_DGM  138
#define IPPORT_NETBIOS_SSN  139
#define IPPORT_IMAP         143
#define IPPORT_SNMP         161
#define IPPORT_SNMP_TRAP    162
#define IPPORT_IMAP3        220
#define IPPORT_LDAP         389
#define IPPORT_HTTPS        443
#define IPPORT_MICROSOFT_DS 445
#define IPPORT_EXECSERVER   512
#define IPPORT_LOGINSERVER  513
#define IPPORT_CMDSERVER    514
#define IPPORT_EFSSERVER    520
#define IPPORT_BIFFUDP      512
#define IPPORT_WHOSERVER    513
#define IPPORT_ROUTESERVER  520

/* Constants to manipulate Internet addresses */
#define IN_CLASSA_NET       0xFF000000L
#define IN_CLASSA_NSHIFT    24
#define IN_CLASSA_HOST      0x00FFFFFFL
#define IN_CLASSA_MAX       128
#define IN_CLASSB_NET       0xFFFF0000L
#define IN_CLASSB_NSHIFT    16
#define IN_CLASSB_HOST      0x0000FFFFL
#define IN_CLASSB_MAX       65536
#define IN_CLASSC_NET       0xFFFFFF00L
#define IN_CLASSC_NSHIFT    8
#define IN_CLASSC_HOST      0x000000FFL
#define IN_CLASSD_NET       0xF0000000L
#define IN_CLASSD_NSHIFT    28
#define IN_CLASSD_HOST      0x0FFFFFFFL
#define INADDR_ANY          0x00000000L
#define INADDR_LOOPBACK     0x7F000001L
#define INADDR_BROADCAST    0xFFFFFFFFL
#define INADDR_NONE         0xFFFFFFFFL

/* Macros to manipulate Internet addresses */
#define IN_CLASSA( x )      (((LONG)(x) & 0x80000000L) == 0)
#define IN_CLASSB( x )      (((LONG)(x) & 0xC0000000L) == 0x80000000L)
#define IN_CLASSC( x )      (((LONG)(x) & 0xE0000000L) == 0xC0000000L)
#define IN_CLASSD( x )      (((LONG)(x) & 0xF0000000L) == 0xE0000000L)
#define IN_MULTICAST( x )   IN_CLASSD( x )

/* Scope identifier special value */
#define SCOPEID_UNSPECIFIED_INIT    { 0 }

/* Message flags */
#define MSG_TRUNC   0x00000100L
#define MSG_CTRUNC  0x00000200L
#define MSG_BCAST   0x00000400L
#define MSG_MCAST   0x00000800L

/* getaddrinfo() hint flags */
#define AI_PASSIVE                  0x00000001L
#define AI_CANONNAME                0x00000002L
#define AI_NUMERICHOST              0x00000004L
#define AI_NUMERICSERV              0x00000008L
#define AI_ALL                      0x00000100L
#define AI_ADDRCONFIG               0x00000400L
#define AI_V4MAPPED                 0x00000800L
#define AI_NON_AUTHORITATIVE        0x00004000L
#define AI_SECURE                   0x00008000L
#define AI_RETURN_PREFERRED_NAMES   0x00010000L
#define AI_FQDN                     0x00020000L
#define AI_FILESERVER               0x00040000L

/* Namespaces */
#define NS_ALL              0
#define NS_SAP              1
#define NS_NDS              2
#define NS_PEER_BROWSE      3
#define NS_SLP              5
#define NS_DHCP             6
#define NS_TCPIP_LOCAL      10
#define NS_TCPIP_HOSTS      11
#define NS_DNS              12
#define NS_NETBT            13
#define NS_WINS             14
#if (_WIN32_WINNT >= 0x0501)
    #define NS_NLA          15
#endif
#if (_WIN32_WINNT >= 0x0600)
    #define NS_BTH          16
#endif
#define NS_NBP              20
#define NS_MS               30
#define NS_STDA             31
#define NS_NTDS             32
#if (_WIN32_WINNT >= 0x0600)
    #define NS_EMAIL        37
    #define NS_PNRPNAME     38
    #define NS_PNRPCLOUD    39
#endif
#define NS_X5000            40
#define NS_NIS              41
#define NS_NISPLUS          42
#define NS_WRQ              50
#define NS_NETDES           60

/* Maximum sizes */
#define NI_MAXHOST  1025
#define NI_MAXSERV  32

/* Flags for getnameinfo() */
#define NI_NOFQDN       0x00000001
#define NI_NUMERICHOST  0x00000002
#define NI_NAMEREQD     0x00000004
#define NI_NUMERICSERV  0x00000008
#define NI_DGRAM        0x00000010

/* Socket address */
typedef struct sockaddr {
#if (_WIN32_WINNT >= 0x0600)
    ADDRESS_FAMILY  sa_family;
#else
    u_short         sa_family;
#endif
    CHAR            sa_data[14];
} SOCKADDR;
typedef SOCKADDR    *PSOCKADDR;
typedef SOCKADDR    *LPSOCKADDR;

/* Socket address information */
typedef struct _SOCKET_ADDRESS {
    LPSOCKADDR  lpSockaddr;
    INT         iSockaddrLength;
} SOCKET_ADDRESS;
typedef SOCKET_ADDRESS  *PSOCKET_ADDRESS;
typedef SOCKET_ADDRESS  *LPSOCKET_ADDRESS;

/* Socket address list */
typedef struct _SOCKET_ADDRESS_LIST {
    INT             iAddressCount;
    SOCKET_ADDRESS  Address[1];
} SOCKET_ADDRESS_LIST;
typedef SOCKET_ADDRESS_LIST *PSOCKET_ADDRESS_LIST;
typedef SOCKET_ADDRESS_LIST *LPSOCKET_ADDRESS_LIST;

/* CS address information */
typedef struct _CSADDR_INFO {
    SOCKET_ADDRESS  LocalAddr;
    SOCKET_ADDRESS  RemoteAddr;
    INT             iSocketType;
    INT             iProtocol;
} CSADDR_INFO;
typedef CSADDR_INFO *PCSADDR_INFO;
typedef CSADDR_INFO *LPCSADDR_INFO;

/* Socket address storage */
typedef struct sockaddr_storage {
    ADDRESS_FAMILY  ss_family;
    CHAR            __ss_pad1[_SS_PAD1SIZE];
    __int64         __ss_align;
    CHAR            __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE_LH;
typedef SOCKADDR_STORAGE_LH *PSOCKADDR_STORAGE_LH;
typedef SOCKADDR_STORAGE_LH *LPSOCKADDR_STORAGE_LH;
typedef struct sockaddr_storage_xp {
    short   ss_family;
    CHAR    __ss_pad1[_SS_PAD1SIZE];
    __int64 __ss_align;
    CHAR    __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE_XP;
typedef SOCKADDR_STORAGE_XP *PSOCKADDR_STORAGE_XP;
typedef SOCKADDR_STORAGE_XP *LPSOCKADDR_STORAGE_XP;
#if (_WIN32_WINNT >= 0x0600)
typedef SOCKADDR_STORAGE_LH SOCKADDR_STORAGE;
#elif (_WIN32_WINNT >= 0x0501)
typedef SOCKADDR_STORAGE_XP SOCKADDR_STORAGE;
#endif
#if (_WIN32_WINNT >= 0x0501)
typedef SOCKADDR_STORAGE    *PSOCKADDR_STORAGE;
typedef SOCKADDR_STORAGE    *LPSOCKADDR_STORAGE;
#endif

/* IP protocols */
typedef enum {
#if (_WIN32_WINNT >= 0x0501)
    IPPROTO_HOPOPTS     = 0,
#endif
    IPPROTO_ICMP        = 1,
    IPPROTO_IGMP        = 2,
    IPPROTO_GGP         = 3,
#if (_WIN32_WINNT >= 0x0501)
    IPPROTO_IPV4        = 4,
#endif
#if (_WIN32_WINNT >= 0x0600)
    IPPROTO_ST          = 5,
#endif
    IPPROTO_TCP         = 6,
#if (_WIN32_WINNT >= 0x0600)
    IPPROTO_CBT         = 7,
    IPPROTO_EGP         = 8,
    IPPROTO_IGP         = 9,
#endif
    IPPROTO_PUP         = 12,
    IPPROTO_UDP         = 17,
    IPPROTO_IDP         = 22,
#if (_WIN32_WINNT >= 0x0600)
    IPPROTO_RDP         = 27,
#endif
#if (_WIN32_WINNT >= 0x0501)
    IPPROTO_IPV6        = 41,
    IPPROTO_ROUTING     = 43,
    IPPROTO_FRAGMENT    = 44,
    IPPROTO_ESP         = 50,
    IPPROTO_AH          = 51,
    IPPROTO_ICMPV6      = 58,
    IPPROTO_NONE        = 59,
    IPPROTO_DSTOPTS     = 60,
#endif
    IPPROTO_ND          = 77,
#if (_WIN32_WINNT >= 0x0501)
    IPPROTO_ICLFXBM     = 78,
#endif
#if (_WIN32_WINNT >= 0x0600)
    IPPROTO_PIM         = 103,
    IPPROTO_PGM         = 113,
    IPPROTO_L2TP        = 115,
    IPPROTO_SCTP        = 132,
#endif
    IPPROTO_RAW         = 255,
    IPPROTO_MAX         = 256
} IPPROTO;
typedef IPPROTO *PIPPROTO;

/* Scope levels */
typedef enum {
    ScopeLevelInterface     = 1,
    ScopeLevelLink          = 2,
    ScopeLevelSubnet        = 3,
    ScopeLevelAdmin         = 4,
    ScopeLevelSite          = 5,
    ScopeLevelOrganization  = 8,
    ScopeLevelGlobal        = 14,
    ScopeLevelCount         = 16
} SCOPE_LEVEL;

/* Scope identifier */
typedef struct {
    union {
        struct {
            ULONG   Zone    : 28;
            ULONG   Level   : 4;
        };
        ULONG   Value;
    };
} SCOPE_ID;
typedef SCOPE_ID    *PSCOPE_ID;

/* Internet socket address */
typedef struct sockaddr_in {
#if (_WIN32_WINNT >= 0x0600)
    ADDRESS_FAMILY  sin_family;
#else
    short           sin_family;
#endif
    USHORT          sin_port;
    IN_ADDR         sin_addr;
    CHAR            sin_zero[8];
} SOCKADDR_IN;
typedef SOCKADDR_IN *PSOCKADDR_IN;

/* Datalink socket address */
#if (_WIN32_WINNT >= 0x0601)
typedef struct sockaddr_dl {
    ADDRESS_FAMILY  sdl_family;
    UCHAR           sdl_data[8];
    UCHAR           sdl_zero[4];
} SOCKADDR_DL;
typedef SOCKADDR_DL *PSOCKADDR_DL;
#endif

/* Windows Sockets buffer */
typedef struct _WSABUF {
    ULONG   len;
    CHAR    *buf;
} WSABUF;
typedef WSABUF  *LPWSABUF;

/* Windows Sockets message */
typedef struct _WSAMSG {
    LPSOCKADDR  name;
    INT         namelen;
    LPWSABUF    lpBuffers;
#if (_WIN32_WINNT >= 0x0600)
    ULONG       dwBufferCount;
#else
    DWORD       dwBufferCount;
#endif
    WSABUF      Control;
#if (_WIN32_WINNT >= 0x0600)
    ULONG       dwFlags;
#else
    DWORD       dwFlags;
#endif
} WSAMSG;
typedef WSAMSG  *PWSAMSG;
typedef WSAMSG  *LPWSAMSG;

/* Windows Sockets message header */
#if (_WIN32_WINNT >= 0x0600)
    #define _WSACMSGHDR cmsghdr
#endif
typedef struct _WSACMSGHDR {
    SIZE_T  cmsg_len;
    INT     cmsg_level;
    INT     cmsg_type;
} WSACMSGHDR;
typedef WSACMSGHDR  *PWSACMSGHDR;
typedef WSACMSGHDR  *LPWSACMSGHDR;
#if (_WIN32_WINNT >= 0x0600)
typedef WSACMSGHDR  CMSGHDR;
typedef WSACMSGHDR  *PCMSGHDR;
#endif

/* Address information */
typedef struct addrinfo {
    int             ai_flags;
    int             ai_family;
    int             ai_socktype;
    int             ai_protocol;
    size_t          ai_addrlen;
    char            *ai_canonname;
    struct sockaddr *ai_addr;
    struct addrinfo *ai_next;
} ADDRINFOA;
typedef ADDRINFOA   *PADDRINFOA;
typedef struct addrinfoW {
    int                 ai_flags;
    int                 ai_family;
    int                 ai_socktype;
    int                 ai_protocol;
    size_t              ai_addrlen;
    PWSTR               ai_canonname;
    struct sockaddr     *ai_addr;
    struct addrinfoW    *ai_next;
} ADDRINFOW;
typedef ADDRINFOW   *PADDRINFOW;

/* Address information (extended version) */
#if (_WIN32_WINNT >= 0x0600)
typedef struct addrinfoexA {
    int                 ai_flags;
    int                 ai_family;
    int                 ai_socktype;
    int                 ai_protocol;
    size_t              ai_addrlen;
    char                *ai_canonname;
    struct sockaddr     *ai_addr;
    void                *ai_blob;
    size_t              ai_bloblen;
    LPGUID              ai_provider;
    struct addrinfoexA  *ai_next;
} ADDRINFOEXA;
typedef ADDRINFOEXA     *PADDRINFOEXA;
typedef ADDRINFOEXA     *LPADDRINFOEXA;
typedef struct addrinfoexW {
    int                 ai_flags;
    int                 ai_family;
    int                 ai_socktype;
    int                 ai_protocol;
    size_t              ai_addrlen;
    PWSTR               ai_canonname;
    struct sockaddr     *ai_addr;
    void                *ai_blob;
    size_t              ai_bloblen;
    LPGUID              ai_provider;
    struct addrinfoexW  *ai_next;
} ADDRINFOEXW;
typedef ADDRINFOEXW     *PADDRINFOEXW;
typedef ADDRINFOEXW     *LPADDRINFOEXW;
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _WS2DEF_ */
