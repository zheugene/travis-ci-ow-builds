/*
 *  atm.h       ATM definitions
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

#ifndef _ATM_H_
#define _ATM_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Primitive data types */
typedef ULONG   ATM_ADDRESSTYPE;
typedef ULONG   ATM_AAL_TYPE;
typedef ULONG   *PATM_AAL_TYPE;
typedef ULONG   ATM_SERVICE_CATEGORY;
typedef ULONG   *PATM_SERVICE_CATEGORY;
typedef ULONG   ATM_SERVICE_REGISTRY_TYPE;

/* ATM address types */
#define ATM_NSAP    0L
#define ATM_E164    1L

/* ATM address lengths */
#define ATM_MAC_ADDRESS_LENGTH  6
#define ATM_ADDRESS_LENGTH      20

/* ATM address characters */
#define ATM_ADDR_BLANK_CHAR         L' '
#define ATM_ADDR_PUNCTUATION_CHAR   L'.'
#define ATM_ADDR_E164_START_CHAR    L'+'

/* AAL types */
#define AAL_TYPE_AAL0   1
#define AAL_TYPE_AAL1   2
#define AAL_TYPE_AAL34  4
#define AAL_TYPE_AAL5   8

/* SAP types */
#define SAP_TYPE_NSAP   0x00000001L
#define SAP_TYPE_E164   0x00000002L

/* AAL5 modes */
#define AAL5_MODE_MESSAGE   0x01
#define AAL5_MODE_STREAMING 0x02

/* AAL5 SSCS types */
#define AAL5_SSCS_NULL              0x00
#define AAL5_SSCS_SSCOP_ASSURED     0x01
#define AAL5_SSCS_SSCOP_NON_ASSURED 0x02
#define AAL5_SSCS_FRAME_RELAY       0x04

/* Bearer classes */
#define BCOB_A  0x00
#define BCOB_C  0x01
#define BCOB_X  0x02

/* Traffic types */
#define TT_NOIND    0x00
#define TT_CBR      0x04
#define TT_VBR      0x08

/* Timing requirements */
#define TR_NOIND            0x00
#define TR_END_TO_END       0x01
#define TR_NO_END_TO_END    0x02

/* Clipping susceptabilities */
#define CLIP_NOT    0x00
#define CLIP_SUS    0x20

/* User plane connection configuration values */
#define UP_P2P  0x00
#define UP_P2MP 0x01

/* Broadband high layer information types */
#define BHLI_ISO                    0x00
#define BHLI_UserSpecific           0x01
#define BHLI_HighLayerProfile       0x02
#define BHLI_VendorSpecificAppId    0x03

/* Layer 2 protocols */
#define BLLI_L2_ISO_1745        0x01
#define BLLI_L2_Q921            0x02
#define BLLI_L2_X25L            0x06
#define BLLI_L2_X25M            0x07
#define BLLI_L2_ELAPB           0x08
#define BLLI_L2_HDLC_ARM        0x09
#define BLLI_L2_HDLC_NRM        0x0A
#define BLLI_L2_HDLC_ABM        0x0B
#define BLLI_L2_LLC             0x0C
#define BLLI_L2_X75             0x0D
#define BLLI_L2_Q922            0x0E
#define BLLI_L2_USER_SPECIFIC   0x10
#define BLLI_L2_ISO_7776        0x11

/* Layer 3 protocols */
#define BLLI_L3_X25             0x06
#define BLLI_L3_ISO_8208        0x07
#define BLLI_L3_X223            0x08
#define BLLI_L3_SIO_8473        0x09
#define BLLI_L3_T70             0x0A
#define BLLI_L3_ISO_TR9577      0x0B
#define BLLI_L3_USER_SPECIFIC   0x10

/* Layer 3 initial protocol identifiers */
#define BLLI_L3_IPI_SNAP    0x80
#define BLLI_L3_IPI_IP      0xCC

/* Quality of service classes */
#define QOS_CLASS0  0x00
#define QOS_CLASS1  0x01
#define QOS_CLASS2  0x02
#define QOS_CLASS3  0x03
#define QOS_CLASS4  0x04

/* Transit network selection types */
#define TNS_TYPE_NATIONAL   0x40

/* Transit network selection plans */
#define TNS_PLAN_CARRIER_ID_CODE    0x01

/* ATM cause locations */
#define ATM_CAUSE_LOC_USER                  0x00
#define ATM_CAUSE_LOC_PRIVATE_LOCAL         0x01
#define ATM_CAUSE_LOC_PUBLIC_LOCAL          0x02
#define ATM_CAUSE_LOC_TRANSIT_NETWORK       0x03
#define ATM_CAUSE_LOC_PUBLIC_REMOTE         0x04
#define ATM_CAUSE_LOC_PRIVATE_REMOTE        0x05
#define ATM_CAUSE_LOC_INTERNATIONAL_NETWORK 0x07
#define ATM_CAUSE_LOC_BEYOND_INTERWORKING   0x0A

/* ATM causes */
#define ATM_CAUSE_UNALLOCATED_NUMBER                0x01
#define ATM_CAUSE_NO_ROUTE_TO_TRANSIT_NETWORK       0x02
#define ATM_CAUSE_NO_ROUTE_TO_DESTINATION           0x03
#define ATM_CAUSE_VPI_VCI_UNACCEPTABLE              0x0A
#define ATM_CAUSE_NORMAL_CALL_CLEARING              0x10
#define ATM_CAUSE_USER_BUSY                         0x11
#define ATM_CAUSE_NO_USER_RESPONDING                0x12
#define ATM_CAUSE_CALL_REJECTED                     0x15
#define ATM_CAUSE_NUMBER_CHANGED                    0x16
#define ATM_CAUSE_USER_REJECTS_CLIR                 0x17
#define ATM_CAUSE_DESTINATION_OUT_OF_ORDER          0x1B
#define ATM_CAUSE_INVALID_NUMBER_FORMAT             0x1C
#define ATM_CAUSE_STATUS_ENQUIRY_RESPONSE           0x1E
#define ATM_CAUSE_NORMAL_UNSPECIFIED                0x1F
#define ATM_CAUSE_VPI_VCI_UNAVAILABLE               0x23
#define ATM_CAUSE_NETWORK_OUT_OF_ORDER              0x26
#define ATM_CAUSE_TEMPORARY_FAILURE                 0x29
#define ATM_CAUSE_ACCESS_INFORMATION_DENIED         0x2B
#define ATM_CAUSE_NO_VPI_VCI_AVAILABLE              0x2D
#define ATM_CAUSE_RESOURCE_UNAVAILABLE              0x2F
#define ATM_CAUSE_QOS_UNAVAILABLE                   0x31
#define ATM_CAUSE_USER_CELL_RATE_UNAVAILABLE        0x33
#define ATM_CAUSE_BEARER_CAPABILITY_UNAUTHORIZED    0x39
#define ATM_CAUSE_BEARER_CAPABILITY_UNAVAILABLE     0x3A
#define ATM_CAUSE_OPTION_UNAVAILABLE                0x3F
#define ATM_CAUSE_BEARER_CAPABILITY_UNIMPLEMENTED   0x41
#define ATM_CAUSE_UNSUPPORTED_TRAFFIC_PARAMETERS    0x49
#define ATM_CAUSE_INVALID_CALL_REFERENCE            0x51
#define ATM_CAUSE_CHANNEL_NONEXISTENT               0x52
#define ATM_CAUSE_INCOMPATIBLE_DESTINATION          0x58
#define ATM_CAUSE_INVALID_ENDPOINT_REFERENCE        0x59
#define ATM_CAUSE_INVALID_TRAFFIC_NETWORK_SELECTION 0x5B
#define ATM_CAUSE_TOO_MANY_PENDING_ADD_PARTY        0x5C
#define ATM_CAUSE_AAL_PARAMETERS_UNSUPPORTED        0x5D
#define ATM_CAUSE_MANDATORY_IE_MISSING              0x60
#define ATM_CAUSE_UNIMPLEMENTED_MESSAGE_TYPE        0x61
#define ATM_CAUSE_UNIMPLEMENTED_IE                  0x63
#define ATM_CAUSE_INVALID_IE_CONTENTS               0x64
#define ATM_CAUSE_INVALID_STATE_FOR_MESSAGE         0x65
#define ATM_CAUSE_RECOVERY_ON_TIMEOUT               0x66
#define ATM_CAUSE_INCORRECT_MESSAGE_LENGTH          0x68
#define ATM_CAUSE_PROTOCOL_ERROR                    0x6F

/* ATM cause conditions */
#define ATM_CAUSE_COND_UNKNOWN      0x00
#define ATM_CAUSE_COND_PERMANENT    0x01
#define ATM_CAUSE_COND_TRANSIENT    0x02

/* ATM cause reasons */
#define ATM_CAUSE_REASON_USER               0x00
#define ATM_CAUSE_REASON_IE_MISSING         0x04
#define ATM_CAUSE_REASON_IE_INSUFFICIENT    0x08

/* ATM cause P-U flags */
#define ATM_CAUSE_PU_PROVIDER   0x00
#define ATM_CAUSE_PU_USER       0x08

/* ATM cause N-A flags */
#define ATM_CAUSE_NA_NORMAL     0x00
#define ATM_CAUSE_NA_ABNORMAL   0x04

/* Parameter type special values */
#define ATM_MEDIA_SPECIFIC      0x00000001L
#define CALLMGR_SPECIFIC_Q2931  0x00000001L

/* ATM service categories */
#define ATM_SERVICE_CATEGORY_CBR    1L
#define ATM_SERVICE_CATEGORY_VBR    2L
#define ATM_SERVICE_CATEGORY_UBR    4L
#define ATM_SERVICE_CATEGORY_ABR    8L

/* SAP field values */
#ifndef SAP_FIELD_ABSENT
    #define SAP_FIELD_ABSENT    0xFFFFFFFEL
#endif
#ifndef SAP_FIELD_ANY
    #define SAP_FIELD_ANY       0xFFFFFFFFL
#endif
#define SAP_FIELD_ANY_AESA_SEL  0xFFFFFFFAL
#define SAP_FIELD_ANY_AESA_REST 0xFFFFFFFBL

/* Add PVC flags */
#define CO_FLAG_SIGNALING_VC    0x00000001L
#define CO_FLAG_NO_DEST_SAP     0x00000002L
#define CO_FLAG_NO_LOCAL_SAP    0x00000004L

/* ATM physical rates */
#define ATM_PHYS_RATE_SONET_STS3C   155520000
#define ATM_PHYS_RATE_IBM_25        25600000

/* ATM cell transfer capacities */
#define ATM_CELL_TRANSFER_CAPACITY_SONET_STS3C  149760000
#define ATM_CELL_TRANSFER_CAPACITY_IBM_25       25125926

/* ATM user data rates */
#define ATM_USER_DATA_RATE_SONET_125    1356317
#define ATM_USER_DATA_RATE_IBM_25       227556

/* ATM service registry types */
#define ATM_SERVICE_REGISTRY_LECS   1L
#define ATM_SERVICE_REGISTRY_ANS    2L

/* ATM address */
typedef struct _ATM_ADDRESS {
    ATM_ADDRESSTYPE AddressType;
    ULONG           NumberOfDigits;
    UCHAR           Address[ATM_ADDRESS_LENGTH];
} ATM_ADDRESS;
typedef ATM_ADDRESS *PATM_ADDRESS;
typedef ATM_ADDRESS ATM_CALLED_PARTY_NUMBER_IE;
typedef ATM_ADDRESS ATM_CALLED_PARTY_SUBADDRESS_IE;
typedef ATM_ADDRESS ATM_CALLING_PARTY_SUBADDRESS_IE;

/* Information element types */
typedef enum {
    IE_AALParameters                = 0,
    IE_TrafficDescriptor            = 1,
    IE_BroadbandBearerCapability    = 2,
    IE_BHLI                         = 3,
    IE_BLLI                         = 4,
    IE_CalledPartyNumber            = 5,
    IE_CalledPartySubaddress        = 6,
    IE_CallingPartyNumber           = 7,
    IE_CallingPartySubaddress       = 8,
    IE_Cause                        = 9,
    IE_QOSClass                     = 10,
    IE_TransitNetworkSelection      = 11,
    IE_BroadcastSendingComplete     = 12,
    IE_LIJCallId                    = 13,
    IE_Raw                          = 14
} Q2931_IE_TYPE;

/* Information element */
typedef struct _Q2931_IE {
    Q2931_IE_TYPE   IEType;
    ULONG           IELength;
    UCHAR           IE[1];
} Q2931_IE;
typedef Q2931_IE    *PQ2931_IE;

/* AAL1 parameters */
typedef struct _AAL1_PARAMETERS {
    UCHAR   Subtype;
    UCHAR   CBRRate;
    USHORT  Multiplier;
    UCHAR   SourceClockRecoveryMethod;
    UCHAR   ErrorCorrectionMethod;
    USHORT  StructuredDataTransferBlockSize;
    UCHAR   PartiallyFilledCellsMethod;
} AAL1_PARAMETERS;
typedef AAL1_PARAMETERS *PAAL1_PARAMETERS;

/* AAL34 parameters */
typedef struct _AAL34_PARAMETERS {
    USHORT  ForwardMaxCPCSSDUSize;
    USHORT  BackwardMaxCPCSSDUSize;
    USHORT  LowestMID;
    USHORT  HighestMID;
    UCHAR   SSCSType;
} AAL34_PARAMETERS;
typedef AAL34_PARAMETERS    *PAAL34_PARAMETERS;

/* AAL5 parameters */
typedef struct _AAL5_PARAMETERS {
    ULONG   ForwardMaxCPCSSDUSize;
    ULONG   BackwardMaxCPCSSDUSize;
    UCHAR   Mode;
    UCHAR   SSCSType;
} AAL5_PARAMETERS;
typedef AAL5_PARAMETERS *PAAL5_PARAMETERS;

/* AAL user parameters */
typedef struct _AALUSER_PARAMETERS {
    ULONG   UserDefined;
} AALUSER_PARAMETERS;
typedef AALUSER_PARAMETERS  *PAALUSER_PARAMETERS;

/* AAL parameters information element */
typedef struct _AAL_PARAMETERS_IE {
    ATM_AAL_TYPE    AALType;
    union {
        AAL1_PARAMETERS     AAL1Parameters;
        AAL34_PARAMETERS    AAL34Parameters;
        AAL5_PARAMETERS     AAL5Parameters;
        AALUSER_PARAMETERS  AALUserParameters;
    } AALSpecificParameters;
} AAL_PARAMETERS_IE;
typedef AAL_PARAMETERS_IE   *PAAL_PARAMETERS_IE;

/* ATM traffic descriptor */
typedef struct _ATM_TRAFFIC_DESCRIPTOR {
    ULONG   PeakCellRateCLP0;
    ULONG   PeakCellRateCLP01;
    ULONG   SustainableCellRateCLP0;
    ULONG   SustainableCellRateCLP01;
    ULONG   MaximumBurstSizeCLP0;
    ULONG   MaximumBurstSizeCLP01;
    BOOLEAN Tagging;
} ATM_TRAFFIC_DESCRIPTOR;
typedef ATM_TRAFFIC_DESCRIPTOR  *PATM_TRAFFIC_DESCRIPTOR;

/* ATM traffic descriptor information element */
typedef struct _ATM_TRAFFIC_DESCRIPTOR_IE {
    ATM_TRAFFIC_DESCRIPTOR  ForwardTD;
    ATM_TRAFFIC_DESCRIPTOR  BackwardTD;
    BOOLEAN                 BestEffort;
} ATM_TRAFFIC_DESCRIPTOR_IE;
typedef ATM_TRAFFIC_DESCRIPTOR_IE   *PATM_TRAFFIC_DESCRIPTOR_IE;

/* ATM broadband bearer capability information element */
typedef struct _ATM_BROADCAST_BEARER_CAPABILITY_IE {
    UCHAR   BearerClass;
    UCHAR   TrafficType;
    UCHAR   TimingRequirements;
    UCHAR   ClippingSusceptability;
    UCHAR   UserPlaneConnectionConfig;
} ATM_BROADCAST_BEARER_CAPABILITY_IE;
typedef ATM_BROADCAST_BEARER_CAPABILITY_IE  *PATM_BROADCAST_BEARER_CAPABILITY_IE;

/* ATM broadband high layer information information element */
typedef struct _ATM_BHLI_IE {
    ULONG   HighLayerInfoType;
    ULONG   HighLayerInfoLength;
    UCHAR   HighLayerInfo[8];
} ATM_BHLI_IE;
typedef ATM_BHLI_IE *PATM_BHLI_IE;

/* ATM broadband lower layer information information element */
typedef struct _ATM_BLLI_IE {
    ULONG   Layer2Protocol;
    UCHAR   Layer2Mode;
    UCHAR   Layer2WindowSize;
    ULONG   Layer2UserSpecifiedProtocol;
    ULONG   Layer3Protocol;
    UCHAR   Layer3Mode;
    UCHAR   Layer3DefaultPacketSize;
    UCHAR   Layer3PacketWindowSize;
    ULONG   Layer3UserSpecifiedProtocol;
    ULONG   Layer3IPI;
    UCHAR   SnapId[5];
} ATM_BLLI_IE;
typedef ATM_BLLI_IE *PATM_BLLI_IE;

/* ATM calling party number information element */
typedef struct _ATM_CALLING_PARTY_NUMBER_IE {
    ATM_ADDRESS Number;
    UCHAR       PresentationIndication;
    UCHAR       ScreeningIndicator;
} ATM_CALLING_PARTY_NUMBER_IE;
typedef ATM_CALLING_PARTY_NUMBER_IE *PATM_CALLING_PARTY_NUMBER_IE;

/* ATM quality of service class information element */
typedef struct _ATM_QOS_CLASS_IE {
    UCHAR   QOSClassForward;
    UCHAR   QOSClassBackward;
} ATM_QOS_CLASS_IE;
typedef ATM_QOS_CLASS_IE    *PATM_QOS_CLASS_IE;

/* ATM broadband sending complete information element */
typedef struct _ATM_BROADBAND_SENDING_COMPLETE_IE {
    UCHAR   SendingComplete;
} ATM_BROADBAND_SENDING_COMPLETE_IE;
typedef ATM_BROADBAND_SENDING_COMPLETE_IE   *PATM_BROADBAND_SENDING_COMPLETE_IE;

/* ATM transit network selection information element */
typedef struct _ATM_TRANSIT_NETWORK_SELECTION_IE {
    UCHAR   TypeOfNetworkId;
    UCHAR   NetworkIdPlan;
    UCHAR   NetworkIdLength;
    UCHAR   NetworkId[1];
} ATM_TRANSIT_NETWORK_SELECTION_IE;
typedef ATM_TRANSIT_NETWORK_SELECTION_IE    *PATM_TRANSIT_NETWORK_SELECTION_IE;

/* ATM cause information element */
typedef struct _ATM_CAUSE_IE {
    UCHAR   Location;
    UCHAR   Cause;
    UCHAR   DiagnosticsLength;
    UCHAR   Diagnostics[4];
} ATM_CAUSE_IE;
typedef ATM_CAUSE_IE    *PATM_CAUSE_IE;

/* ATM leaf initiated join call identifier information element */
typedef struct _ATM_LIJ_CALLID_IE {
    ULONG   Identifier;
} ATM_LIJ_CALLID_IE;
typedef ATM_LIJ_CALLID_IE   *PATM_LIJ_CALLID_IE;

/* ATM raw information element */
typedef struct _ATM_RAW_IE {
    ULONG   RawIELength;
    ULONG   RawIEType;
    UCHAR   RawIEValue[1];
} ATM_RAW_IE;
typedef ATM_RAW_IE  *PATM_RAW_IE;

/* Call manager parameters */
typedef struct _Q2931_CALLMGR_PARAMETERS {
    ATM_ADDRESS CalledParty;
    ATM_ADDRESS CallingParty;
    ULONG       InfoElementCount;
    UCHAR       InfoElements[1];
} Q2931_CALLMGR_PARAMETERS;
typedef Q2931_CALLMGR_PARAMETERS    *PQ2931_CALLMGR_PARAMETERS;

/* ATM VPIVCI */
typedef struct _ATM_VPIVCI {
    ULONG   Vpi;
    ULONG   Vci;
} ATM_VPIVCI;
typedef ATM_VPIVCI  *PATM_VPIVCI;

/* ATM flow parameters */
typedef struct _ATM_FLOW_PARAMETERS {
    ATM_SERVICE_CATEGORY    ServiceCategory;
    ULONG                   AverageCellRate;
    ULONG                   PeakCellRate;
    ULONG                   MinimumCellRate;
    ULONG                   InitialCellRate;
    ULONG                   BurstLengthCells;
    ULONG                   MaxSduSize;
    ULONG                   TransientBufferExposure;
    ULONG                   CumulativeRMFixedRTT;
    UCHAR                   RateIncreaseFactor;
    UCHAR                   RateDecreaseFactor;
    USHORT                  ACRDecreaseTimeFactor;
    UCHAR                   MaximumCellsPerForwardRMCell;
    UCHAR                   MaximumForwardRMCellInterval;
    UCHAR                   CutoffDecreaseFactor;
    UCHAR                   Reserved1;
    ULONG                   MissingRMCellCount;
    ULONG                   Reserved2;
    ULONG                   Reserved3;
} ATM_FLOW_PARAMETERS;
typedef ATM_FLOW_PARAMETERS *PATM_FLOW_PARAMETERS;

/* ATM media parameters */
typedef struct _ATM_MEDIA_PARAMETERS {
    ATM_VPIVCI          ConnectionId;
    ATM_AAL_TYPE        AALType;
    ULONG               CellDelayVariationCLP0;
    ULONG               CellDelayVariationCLP1;
    ULONG               CellLossRatioCLP0;
    ULONG               CellLossRatioCLP1;
    ULONG               CellTransferDelayCLP0;
    ULONG               CellTransferDelayCLP1;
    ULONG               DefaultCLP;
    ATM_FLOW_PARAMETERS Transmit;
    ATM_FLOW_PARAMETERS Receive;
} ATM_MEDIA_PARAMETERS;
typedef ATM_MEDIA_PARAMETERS    *PATM_MEDIA_PARAMETERS;

/* ATM SAP */
typedef struct _ATM_SAP {
    ATM_BLLI_IE Blli;
    ATM_BHLI_IE Bhli;
    ULONG       NumberOfAddresses;
    UCHAR       Addresses[1];
} ATM_SAP;
typedef ATM_SAP *PATM_SAP;

/* ATM PVC SAP */
typedef struct _ATM_PVC_SAP {
    ATM_BLLI_IE Blli;
    ATM_BHLI_IE Bhli;
} ATM_PVC_SAP;
typedef ATM_PVC_SAP *PATM_PVC_SAP;

/* Add PVC */
typedef struct _Q2931_ADD_PVC {
    ATM_ADDRESS         CalledParty;
    ATM_ADDRESS         CallingParty;
    ATM_VPIVCI          ConnectionId;
    ATM_AAL_TYPE        AALType;
    ATM_FLOW_PARAMETERS ForwardFP;
    ATM_FLOW_PARAMETERS BackwardFP;
    ULONG               Flags;
    ATM_PVC_SAP         LocalSap;
    ATM_PVC_SAP         DestinationSap;
    BOOLEAN             LIJIdPresent;
    ATM_LIJ_CALLID_IE   LIJId;
} Q2931_ADD_PVC;
typedef Q2931_ADD_PVC   *PQ2931_ADD_PVC;

/* Delete PVC */
typedef struct _Q2931_DELETE_PVC {
    ATM_VPIVCI  ConnectionId;
} Q2931_DELETE_PVC;
typedef Q2931_DELETE_PVC    *PQ2931_DELETE_PVC;

/* Get call information */
typedef struct _CO_GET_CALL_INFORMATION {
    ULONG   CallInfoType;
    ULONG   CallInfoLength;
    PVOID   CallInfoBuffer;
} CO_GET_CALL_INFORMATION;
typedef CO_GET_CALL_INFORMATION *PCO_GET_CALL_INFORMATION;

/* ATM VC rates supported */
typedef struct ATM_VC_RATES_SUPPORTED {
    ULONG   MinCellRate;
    ULONG   MaxCellRate;
} ATM_VC_RATES_SUPPORTED;
typedef ATM_VC_RATES_SUPPORTED  *PATM_VC_RATES_SUPPORTED;

/* ATM AAL OOB information */
typedef struct _ATM_AAL_OOB_INFO {
    ATM_AAL_TYPE    AalType;
    union {
        struct _ATM_AAL5_INFO {
            BOOLEAN CellLossPriority;
            UCHAR   UserToUserIndication;
            UCHAR   CommonPartIndicator;
        } ATM_AAL5_INFO;
        struct _ATM_AAL0_INFO {
            BOOLEAN CellLossPriority;
            UCHAR   PayLoadTypeIdentifier;
        } ATM_AAL0_INFO;
    };
} ATM_AAL_OOB_INFO;
typedef ATM_AAL_OOB_INFO    *PATM_AAL_OOB_INFO;

/* ATM service address list */
typedef struct _ATM_SERVICE_ADDRESS_LIST {
    ATM_SERVICE_REGISTRY_TYPE   ServiceRegistryType;
    ULONG                       NumberOfAddressesAvailable;
    ULONG                       NumberOfAddressesReturned;
    ATM_ADDRESS                 Address[1];
} ATM_SERVICE_ADDRESS_LIST;
typedef ATM_SERVICE_ADDRESS_LIST    *PATM_SERVICE_ADDRESS_LIST;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _ATM_H_ */
