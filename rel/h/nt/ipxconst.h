/*
 *  ipxconst.h  IPX constants
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

#ifndef _IPXCONST_
#define _IPXCONST_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Administrative states */
#define ADMIN_STATE_DISABLED                                1
#define ADMIN_STATE_ENABLED                                 2
#define ADMIN_STATE_ENABLED_ONLY_FOR_NETBIOS_STATIC_ROUTING 3
#define ADMIN_STATE_ENABLED_ONLY_FOR_OPER_STATE_UP          4

/* Operational states */
#define OPER_STATE_DOWN     1
#define OPER_STATE_UP       2
#define OPER_STATE_SLEEPING 3
#define OPER_STATE_STARTING 4
#define OPER_STATE_STOPPING 5

/* IPX update modes */
#define IPX_STANDARD_UPDATE     1
#define IPX_NO_UPDATE           2
#define IPX_AUTO_STATIC_UPDATE  3

/* IPX packet types */
#define IPX_STANDARD_PACKET_TYPE            1
#define IPX_RELIABLE_DELIVERY_PACKET_TYPE   2

/* IPX default values */
#define IPX_PACE_DEFVAL             18
#define IPX_UPDATE_INTERVAL_DEFVAL  60

/* Alternate names of route entry fields */
#define R_Interface         RR_InterfaceID
#define R_Protocol          RR_RoutingProtocol
#define R_Network           RR_Network.N_NetNumber
#define R_TickCount         RR_FamilySpecificData.FSD_TickCount
#define R_HopCount          RR_FamilySpecificData.FSD_HopCount
#define R_NextHopMacAddress RR_NextHopAddress.NHA_Mac
#define R_Flags             RR_FamilySpecificData.FSD_Flags

/* Interface indices */
#define MAX_INTERFACE_INDEX     0xFFFFFFFEL
#define GLOBAL_INTERFACE_INDEX  0xFFFFFFFFL

/* Route flags */
#define GLOBAL_WAN_ROUTE        0x00000001L
#define DO_NOT_ADVERTISE_ROUTE  0x00000002L

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _IPXCONST_ */
