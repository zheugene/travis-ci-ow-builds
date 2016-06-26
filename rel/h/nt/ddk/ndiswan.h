/*
 *  ndiswan.h   NDIS WAN definitions
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

#ifndef _NDIS_WAN_
#define _NDIS_WAN_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Special value for NdisRegisterMiniport() and NdisRegisterSpecial() */
#define NDIS_USE_WAN_WRAPPER    0x00000001L

/* NDIS TAPI status codes */
#define NDIS_STATUS_TAPI_INDICATION 0x40010080L

/* Framing bits */
#define RAS_FRAMING                     0x00000001L
#define RAS_COMPRESSION                 0x00000002L
#define ARAP_V1_FRAMING                 0x00000004L
#define ARAP_V2_FRAMING                 0x00000008L
#define ARAP_FRAMING                    (ARAP_V1_FRAMING | ARAP_V2_FRAMING)
#define PPP_MULTILINK_FRAMING           0x00000010L
#define PPP_SHORT_SEQUENCE_HDR_FORMAT   0x00000020L
#define PPP_MC_MULTILINK_FRAMING        0x00000040L
#define PPP_FRAMING                     0x00000100L
#define PPP_COMPRESS_ADDRESS_CONTROL    0x00000200L
#define PPP_COMPRESS_PROTOCOL_FIELD     0x00000400L
#define PPP_ACCM_SUPPORTED              0x00000800L
#define SLIP_FRAMING                    0x00001000L
#define SLIP_VJ_COMPRESSION             0x00002000L
#define SLIP_VJ_AUTODETECT              0x00004000L
#define MEDIA_NRZ_ENCODING              0x00010000L
#define MEDIA_NRZI_ENCODING             0x00020000L
#define MEDIA_NLPID                     0x00040000L
#define RFC_1356_FRAMING                0x00100000L
#define RFC_1483_FRAMING                0x00200000L
#define RFC_1490_FRAMING                0x00400000L
#define LLC_ENCAPSULATION               0x00800000L
#define SHIVA_FRAMING                   0x01000000L
#define NBF_PRESERVE_MAC_ADDRESS        0x01000000L
#define PASS_THROUGH_MODE               0x10000000L
#ifndef _WAN50_
    #define RAW_PASS_THROUGH_MODE       0x20000000L
#endif
#define TAPI_PROVIDER                   0x80000000L

/* Bridging flags */
#define BRIDGING_FLAG_LANFCS    0x00000001L
#define BRIDGING_FLAG_LANID     0x00000002L
#define BRIDGING_FLAG_PADDING   0x00000004L

/* Bridging capability flags */
#define BRIDGING_TINYGRAM               0x00000001L
#define BRIDGING_LANID                  0x00000002L
#define BRIDGING_NO_SPANNING_TREE       0x00000004L
#define BRIDGING_8021D_SPANNING_TREE    0x00000008L
#define BRIDGING_8021G_SPANNING_TREE    0x00000010L
#define BRIDGING_SOURCE_ROUTING         0x00000020L
#define BRIDGING_DEC_LANBRIDGE          0x00000040L

/* Bridging types */
#define BRIDGING_TYPE_8023_CANON    0x00000002L
#define BRIDGING_TYPE_8024_NO_CANON 0x00000004L
#define BRIDGING_TYPE_8025_NO_CANON 0x00000008L
#define BRIDGING_TYPE_FDDI_NO_CANON 0x00000010L
#define BRIDGING_TYPE_8024_CANON    0x00000400L
#define BRIDGING_TYPE_8025_CANON    0x00000800L
#define BRIDGING_TYPE_FDDI_CANON    0x00001000L

/* Compression type flags */
#define NDISWAN_COMPRESSION     0x00000001L
#define NDISWAN_ENCRYPTION      0x00000010L
#define NDISWAN_40_ENCRYPTION   0x00000020L
#define NDISWAN_128_ENCRYPTION  0x00000040L
#define NDISWAN_56_ENCRYPTION   0x00000080L
#define NDISWAN_HISTORY_LESS    0x01000000L

/* Compression type codes */
#define COMPTYPE_OUI        0
#define COMPTYPE_NT31RAS    254
#define COMPTYPE_NONE       255

/* WAN error codes */
#define WAN_ERROR_CRC               0x00000001L
#define WAN_ERROR_FRAMING           0x00000002L
#define WAN_ERROR_HARDWAREOVERRUN   0x00000004L
#define WAN_ERROR_BUFFEROVERRUN     0x00000008L
#define WAN_ERROR_TIMEOUT           0x00000010L
#define WAN_ERROR_ALIGNMENT         0x00000020L

/* NDIS WAN information */
typedef struct _NDIS_WAN_INFO {
    ULONG                   MaxFrameSize;
    ULONG                   MaxTransmit;
    ULONG                   HeaderPadding;
    ULONG                   TailPadding;
    ULONG                   Endpoints;
    UINT                    MemoryFlags;
    NDIS_PHYSICAL_ADDRESS   HighestAcceptableAddress;
    ULONG                   FramingBits;
    ULONG                   DesiredACCM;
} NDIS_WAN_INFO;
typedef NDIS_WAN_INFO   *PNDIS_WAN_INFO;

/* NDIS WAN set link information */
typedef struct _NDIS_WAN_SET_LINK_INFO {
    NDIS_HANDLE NdisLinkHandle;
    ULONG       MaxSendFrameSize;
    ULONG       MaxRecvFrameSize;
    ULONG       HeaderPadding;
    ULONG       TailPadding;
    ULONG       SendFramingBits;
    ULONG       RecvFramingBits;
    ULONG       SendCompressionBits;
    ULONG       RecvCompressionBits;
    ULONG       SendACCM;
    ULONG       RecvACCM;
} NDIS_WAN_SET_LINK_INFO;
typedef NDIS_WAN_SET_LINK_INFO  *PNDIS_WAN_SET_LINK_INFO;

/* NDIS WAN get link information */
typedef struct _NDIS_WAN_GET_LINK_INFO {
    NDIS_HANDLE NdisLinkHandle;
    ULONG       MaxSendFrameSize;
    ULONG       MaxRecvFrameSize;
    ULONG       HeaderPadding;
    ULONG       TailPadding;
    ULONG       SendFramingBits;
    ULONG       RecvFramingBits;
    ULONG       SendCompressionBits;
    ULONG       RecvCompressionBits;
    ULONG       SendACCM;
    ULONG       RecvACCM;
} NDIS_WAN_GET_LINK_INFO;
typedef NDIS_WAN_GET_LINK_INFO  *PNDIS_WAN_GET_LINK_INFO;

/* NDIS WAN get bridge information */
typedef struct _NDIS_WAN_GET_BRIDGE_INFO {
    NDIS_HANDLE NdisLinkHandle;
    USHORT      LanSegmentNumber;
    UCHAR       BridgeNumber;
    UCHAR       BridgingOptions;
    ULONG       BridgingCapabilities;
    UCHAR       BridgingType;
    UCHAR       MacBytes[6];
} NDIS_WAN_GET_BRIDGE_INFO;
typedef NDIS_WAN_GET_BRIDGE_INFO    *PNDIS_WAN_GET_BRIDGE_INFO;

/* NDIS WAN set bridge information */
typedef struct _NDIS_WAN_SET_BRIDGE_INFO {
    NDIS_HANDLE NdisLinkHandle;
    USHORT      LanSegmentNumber;
    UCHAR       BridgeNumber;
    UCHAR       BridgingOptions;
    ULONG       BridgingCapabilities;
    UCHAR       BridgingType;
    UCHAR       MacBytes[6];
} NDIS_WAN_SET_BRIDGE_INFO;
typedef NDIS_WAN_SET_BRIDGE_INFO    *PNDIS_WAN_SET_BRIDGE_INFO;

/* NDIS WAN compression information */
typedef struct _NDIS_WAN_COMPRESS_INFO {
    UCHAR   SessionKey[8];
    ULONG   MSCompType;
    UCHAR   CompType;
    USHORT  CompLength;
    union {
        struct {
            UCHAR   CompOUI[3];
            UCHAR   CompSubType;
            UCHAR   CompValues[32];
        } Proprietary;
        struct {
            UCHAR   CompValues[32];
        } Public;
    };
} NDIS_WAN_COMPRESS_INFO;
typedef NDIS_WAN_COMPRESS_INFO  *PNDIS_WAN_COMPRESS_INFO;

/* NDIS WAN get compression information */
typedef struct _NDIS_WAN_GET_COMP_INFO {
    NDIS_HANDLE             NdisLinkHandle;
    NDIS_WAN_COMPRESS_INFO  SendCapabilities;
    NDIS_WAN_COMPRESS_INFO  RecvCapabilities;
} NDIS_WAN_GET_COMP_INFO;
typedef NDIS_WAN_GET_COMP_INFO  *PNDIS_WAN_GET_COMP_INFO;

/* NDIS WAN set compression information */
typedef struct _NDIS_WAN_SET_COMP_INFO {
    NDIS_HANDLE             NdisLinkHandle;
    NDIS_WAN_COMPRESS_INFO  SendCapabilities;
    NDIS_WAN_COMPRESS_INFO  RecvCapabilities;
} NDIS_WAN_SET_COMP_INFO;
typedef NDIS_WAN_SET_COMP_INFO  *PNDIS_WAN_SET_COMP_INFO;

/* NDIS WAN get statistics information */
typedef struct _NDIS_WAN_GET_STATS_INFO {
    NDIS_HANDLE NdisLinkHandle;
    ULONG       BytesSent;
    ULONG       BytesRcvd;
    ULONG       FramesSent;
    ULONG       FramesRcvd;
    ULONG       CRCErrors;
    ULONG       TimeoutErrors;
    ULONG       AlignmentErrors;
    ULONG       SerialOverrunErrors;
    ULONG       FramingErrors;
    ULONG       BufferOverrunErrors;
    ULONG       BytesTransmittedUncompressed;
    ULONG       BytesReceivedUncompressed;
    ULONG       BytesTransmittedCompressed;
    ULONG       BytesReceivedCompressed;
    ULONG       TunnelPacketsReceived;
    ULONG       TunnelReceivePacketsPending;
    ULONG       TunnelPacketsIndicatedUp;
    ULONG       TunnelReceivePacketsRejected;
    ULONG       TunnelPacketsSent;
    ULONG       TunnelPacketsSentComplete;
    ULONG       TunnelTransmitPacketsPending;
    ULONG       TunnelPacketsTransmitError;
    ULONG       TunnelPacketsSentError;
    ULONG       TunnelTransmitPacketsRejected;
    ULONG       TunnelAcksSent;
    ULONG       TunnelAcksSentComplete;
    ULONG       TunnelGeneric1;
    ULONG       TunnelGeneric2;
    ULONG       TunnelGeneric3;
} NDIS_WAN_GET_STATS_INFO;
typedef NDIS_WAN_GET_STATS_INFO *PNDIS_WAN_GET_STATS_INFO;

/* NDIS MAC line up */
typedef struct _NDIS_MAC_LINE_UP {
    ULONG               LinkSpeed;
    NDIS_WAN_QUALITY    Quality;
    USHORT              SendWindow;
    NDIS_HANDLE         ConnectionWrapperID;
    NDIS_HANDLE         NdisLinkHandle;
    NDIS_HANDLE         NdisLinkContext;
} NDIS_MAC_LINE_UP;
typedef NDIS_MAC_LINE_UP    *PNDIS_MAC_LINE_UP;

/* NDIS MAC line down */
typedef struct _NDIS_MAC_LINE_DOWN {
    NDIS_HANDLE NdisLinkContext;
} NDIS_MAC_LINE_DOWN;
typedef NDIS_MAC_LINE_DOWN  *PNDIS_MAC_LINE_DOWN;

/* NDIS MAC fragment */
typedef struct _NDIS_MAC_FRAGMENT {
    NDIS_HANDLE NdisLinkContext;
    ULONG       Errors;
} NDIS_MAC_FRAGMENT;
typedef NDIS_MAC_FRAGMENT   *PNDIS_MAC_FRAGMENT;

/* NDIS WAN CO information */
typedef struct _NDIS_WAN_CO_INFO {
    ULONG   MaxFrameSize;
    ULONG   MaxSendWindow;
    ULONG   FramingBits;
    ULONG   DesiredACCM;
} NDIS_WAN_CO_INFO;
typedef NDIS_WAN_CO_INFO    *PNDIS_WAN_CO_INFO;

/* NDIS WAN CO set link information */
typedef struct _NDIS_WAN_CO_SET_LINK_INFO {
    ULONG   MaxSendFrameSize;
    ULONG   MaxRecvFrameSize;
    ULONG   SendFramingBits;
    ULONG   RecvFramingBits;
    ULONG   SendCompressionBits;
    ULONG   RecvCompressionBits;
    ULONG   SendACCM;
    ULONG   RecvACCM;
} NDIS_WAN_CO_SET_LINK_INFO;
typedef NDIS_WAN_CO_SET_LINK_INFO   *PNDIS_WAN_CO_SET_LINK_INFO;

/* NDIS WAN CO get link information */
typedef struct _NDIS_WAN_CO_GET_LINK_INFO {
    ULONG   MaxSendFrameSize;
    ULONG   MaxRecvFrameSize;
    ULONG   SendFramingBits;
    ULONG   RecvFramingBits;
    ULONG   SendCompressionBits;
    ULONG   RecvCompressionBits;
    ULONG   SendACCM;
    ULONG   RecvACCM;
} NDIS_WAN_CO_GET_LINK_INFO;
typedef NDIS_WAN_CO_GET_LINK_INFO   *PNDIS_WAN_CO_GET_LINK_INFO;

/* NDIS WAN CO get compression information */
typedef struct _NDIS_WAN_CO_GET_COMP_INFO {
    NDIS_WAN_COMPRESS_INFO  SendCapabilities;
    NDIS_WAN_COMPRESS_INFO  RecvCapabilities;
} NDIS_WAN_CO_GET_COMP_INFO;
typedef NDIS_WAN_CO_GET_COMP_INFO   *PNDIS_WAN_CO_GET_COMP_INFO;

/* NDIS WAN CO set compression information */
typedef struct _NDIS_WAN_CO_SET_COMP_INFO {
    NDIS_WAN_COMPRESS_INFO  SendCapabilities;
    NDIS_WAN_COMPRESS_INFO  RecvCapabilities;
} NDIS_WAN_CO_SET_COMP_INFO;
typedef NDIS_WAN_CO_SET_COMP_INFO   *PNDIS_WAN_CO_SET_COMP_INFO;

/* NDIS WAN CO get statistics information */
typedef struct _NDIS_WAN_CO_GET_STATS_INFO {
    ULONG   BytesSent;
    ULONG   BytesRcvd;
    ULONG   FramesSent;
    ULONG   FramesRcvd;
    ULONG   CRCErrors;
    ULONG   TimeoutErrors;
    ULONG   AlignmentErrors;
    ULONG   SerialOverrunErrors;
    ULONG   FramingErrors;
    ULONG   BufferOverrunErrors;
    ULONG   BytesTransmittedUncompressed;
    ULONG   BytesReceivedUncompressed;
    ULONG   BytesTransmittedCompressed;
    ULONG   BytesReceivedCompressed;
    ULONG   TunnelPacketsReceived;
    ULONG   TunnelReceivePacketsPending;
    ULONG   TunnelPacketsIndicatedUp;
    ULONG   TunnelReceivePacketsRejected;
    ULONG   TunnelPacketsSent;
    ULONG   TunnelPacketsSentComplete;
    ULONG   TunnelTransmitPacketsPending;
    ULONG   TunnelPacketsTransmitError;
    ULONG   TunnelPacketsSentError;
    ULONG   TunnelTransmitPacketsRejected;
    ULONG   TunnelAcksSent;
    ULONG   TunnelAcksSentComplete;
    ULONG   TunnelGeneric1;
    ULONG   TunnelGeneric2;
    ULONG   TunnelGeneric3;
} NDIS_WAN_CO_GET_STATS_INFO;
typedef NDIS_WAN_CO_GET_STATS_INFO  *PNDIS_WAN_CO_GET_STATS_INFO;

/* NDIS WAN CO fragment */
typedef struct _NDIS_WAN_CO_FRAGMENT {
    ULONG   Errors;
} NDIS_WAN_CO_FRAGMENT;
typedef NDIS_WAN_CO_FRAGMENT    *PNDIS_WAN_CO_FRAGMENT;

/* WAN CO link parameters */
typedef struct _WAN_CO_LINKPARAMS {
    ULONG   TransmitSpeed;
    ULONG   ReceiveSpeed;
    ULONG   SendWindow;
} WAN_CO_LINKPARAMS;
typedef WAN_CO_LINKPARAMS   *PWAN_CO_LINKPARAMS;

/* WAN CO MTU link parameters */
typedef struct _WAN_CO_MTULINKPARAMS {
    ULONG   Version;
    ULONG   TransmitSpeed;
    ULONG   ReceiveSpeed;
    ULONG   SendWindow;
    ULONG   MTU;
} WAN_CO_MTULINKPARAMS;
typedef WAN_CO_MTULINKPARAMS    *PWAN_CO_MTULINKPARAMS;

/* Functions implemented as macros */
#define NdisMWanInitializeWrapper( x, p1, p2, p3 ) \
    NdisMInitializeWrapper( x, p1, p2, p3 )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NDIS_WAN_ */
