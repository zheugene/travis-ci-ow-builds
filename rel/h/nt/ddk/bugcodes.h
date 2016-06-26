/*
 *  bugcodes.h  Bug check codes
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

#ifndef _BUGCODES_
#define _BUGCODES_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Bug check (stop error) codes */
#define HARDWARE_PROFILE_UNDOCKED_STRING    0x40010001L
#define HARDWARE_PROFILE_DOCKED_STRING      0x40010002L
#define HARDWARE_PROFILE_UNKNOWN_STRING     0x40010003L
#define WINDOWS_NT_BANNER                   0x4000007EL
#define BUGCHECK_MESSAGE_INTRO              0x4000007FL
#define BUGCODE_ID_DRIVER                   0x40000080L
#define PSS_MESSAGE_INTRO                   0x40000081L
#define BUGCODE_PSS_MESSAGE                 0x40000082L
#define BUGCODE_TECH_INFO                   0x40000083L
#define WINDOWS_NT_CSD_STRING               0x40000087L
#define WINDOWS_NT_INFO_STRING              0x40000088L
#define WINDOWS_NT_MP_STRING                0x40000089L
#define THREAD_TERMINATE_HELD_MUTEX         0x4000008AL
#define BUGCODE_PSS_CRASH_INIT              0x4000008BL
#define BUGCODE_PSS_CRASH_PROGRESS          0x4000008CL
#define BUGCODE_PSS_CRASH_DONE              0x4000008DL
#define WINDOWS_NT_INFO_STRING_PLURAL       0x4000009DL
#define WINDOWS_NT_RC_STRING                0x4000009EL
#define APC_INDEX_MISMATCH                  0x00000001L
#define DEVICE_QUEUE_NOT_BUSY               0x00000002L
#define INVALID_AFFINITY_SET                0x00000003L
#define INVALID_DATA_ACCESS_TRAP            0x00000004L
#define INVALID_PROCESS_ATTACH_ATTEMPT      0x00000005L
#define INVALID_PROCESS_DETACH_ATTEMPT      0x00000006L
#define INVALID_SOFTWARE_INTERRUPT          0x00000007L
#define IRQL_NOT_DISPATCH_LEVEL             0x00000008L
#define IRQL_NOT_GREATER_OR_EQUAL           0x00000009L
#define IRQL_NOT_LESS_OR_EQUAL              0x0000000AL
#define NO_EXCEPTION_HANDLING_SUPPORT       0x0000000BL
#define MAXIMUM_WAIT_OBJECTS_EXCEEDED       0x0000000CL
#define MUTEX_LEVEL_NUMBER_VIOLTION         0x0000000DL
#define NO_USER_MODE_CONTEXT                0x0000000EL
#define SPIN_LOCK_ALREADY_OWNED             0x0000000FL
#define SPIN_LOCK_NOT_OWNED                 0x00000010L
#define THREAD_NOT_MUTEX_OWNER              0x00000011L
#define TRAP_CAUSE_UNKNOWN                  0x00000012L
#define EMPTY_THREAD_REAPER_LIST            0x00000013L
#define CREATE_DELETE_LOCK_NOT_LOCKED       0x00000014L
#define LAST_CHANCE_CALLED_FROM_KMODE       0x00000015L
#define CID_HANDLE_CREATION                 0x00000016L
#define CID_HANDLE_DELETION                 0x00000017L
#define REFERENCE_BY_POINTER                0x00000018L
#define BAD_POOL_HEADER                     0x00000019L
#define MEMORY_MANAGEMENT                   0x0000001AL
#define PFN_SHARE_COUNT                     0x0000001BL
#define PFN_REFERENCE_COUNT                 0x0000001CL
#define NO_SPIN_LOCK_AVAILABLE              0x0000001DL
#define KMODE_EXCEPTION_NOT_HANDLED         0x0000001EL
#define SHARED_RESOURCE_CONV_ERROR          0x0000001FL
#define KERNEL_APC_PENDING_DURING_EXIT      0x00000020L
#define QUOTA_UNDERFLOW                     0x00000021L
#define FILE_SYSTEM                         0x00000022L
#define FAT_FILE_SYSTEM                     0x00000023L
#define NTFS_FILE_SYSTEM                    0x00000024L
#define NPFS_FILE_SYSTEM                    0x00000025L
#define CDFS_FILE_SYSTEM                    0x00000026L
#define RDR_FILE_SYSTEM                     0x00000027L
#define CORRUPT_ACCESS_TOKEN                0x00000028L
#define SECURITY_SYSTEM                     0x00000029L
#define INCONSISTENT_IRP                    0x0000002AL
#define PANIC_STACK_SWITCH                  0x0000002BL
#define PORT_DRIVER_INTERNAL                0x0000002CL
#define SCSI_DISK_DRIVER_INTERNAL           0x0000002DL
#define DATA_BUS_ERROR                      0x0000002EL
#define INSTRUCTION_BUS_ERROR               0x0000002FL
#define SET_OF_INVALID_CONTEXT              0x00000030L
#define PHASE0_INITIALIZATION_FAILED        0x00000031L
#define PHASE1_INITIALIZATION_FAILED        0x00000032L
#define UNEXPECTED_INITIALIZATION_CALL      0x00000033L
#define CACHE_MANAGER                       0x00000034L
#define NO_MORE_IRP_STACK_LOCATIONS         0x00000035L
#define DEVICE_REFERENCE_COUNT_NOT_ZERO     0x00000036L
#define FLOPPY_INTERNAL_ERROR               0x00000037L
#define SERIAL_DRIVER_INTERNAL              0x00000038L
#define SYSTEM_EXIT_OWNED_MUTEX             0x00000039L
#define SYSTEM_UNWIND_PREVIOUS_USER         0x0000003AL
#define SYSTEM_SERVICE_EXCEPTION            0x0000003BL
#define INTERRUPT_UNWIND_ATTEMPTED          0x0000003CL
#define INTERRUPT_EXCEPTION_NOT_HANDLED     0x0000003DL
#define MULTIPROCESSOR_CONFIGURATION_NOT_SUPPORTED  0x0000003EL
#define NO_MORE_SYSTEM_PTES                 0x0000003FL
#define TARGET_MDL_TOO_SMALL                0x00000040L
#define MUST_SUCCEED_POOL_EMPTY             0x00000041L
#define ATDISK_DRIVER_INTERNAL              0x00000042L
#define NO_SUCH_PARTITION                   0x00000043L
#define MULTIPLE_IRP_COMPLETE_REQUESTS      0x00000044L
#define INSUFFICIENT_SYSTEM_MAP_REGS        0x00000045L
#define DEREF_UNKNOWN_LOGON_SESSION         0x00000046L
#define REF_UNKNOWN_LOGON_SESSION           0x00000047L
#define CANCEL_STATE_IN_COMPLETED_IRP       0x00000048L
#define PAGE_FAULT_WITH_INTERRUPTS_OFF      0x00000049L
#define IRQL_GT_ZERO_AT_SYSTEM_SERVICE      0x0000004AL
#define STREAMS_INTERNAL_ERROR              0x0000004BL
#define FATAL_UNHANDLED_HARD_ERROR          0x0000004CL
#define NO_PAGES_AVAILABLE                  0x0000004DL
#define PFN_LIST_CORRUPT                    0x0000004EL
#define NDIS_INTERNAL_ERROR                 0x0000004FL
#define PAGE_FAULT_IN_NONPAGED_AREA         0x00000050L
#define PAGE_FAULT_IN_NONPAGED_AREA_M       0x10000050L
#define REGISTRY_ERROR                      0x00000051L
#define MAILSLOT_FILE_SYSTEM                0x00000052L
#define NO_BOOT_DEVICE                      0x00000053L
#define LM_SERVER_INTERNAL_ERROR            0x00000054L
#define DATA_COHERENCY_EXCEPTION            0x00000055L
#define INSTRUCTION_COHERENCY_EXCEPTION     0x00000056L
#define XNS_INTERNAL_ERROR                  0x00000057L
#define VOLMGRX_INTERNAL_ERROR              0x00000058L
#define PINBALL_FILE_SYSTEM                 0x00000059L
#define CRITICAL_SERVICE_FAILED             0x0000005AL
#define SET_ENV_VAR_FAILED                  0x0000005BL
#define HAL_INITIALIZATION_FAILED           0x0000005CL
#define UNSUPPORTED_PROCESSOR               0x0000005DL
#define OBJECT_INITIALIZATION_FAILED        0x0000005EL
#define SECURITY_INITIALIZATION_FAILED      0x0000005FL
#define PROCESS_INITIALIZATION_FAILED       0x00000060L
#define HAL1_INITIALIZATION_FAILED          0x00000061L
#define OBJECT1_INITIALIZATION_FAILED       0x00000062L
#define SECURITY1_INITIALIZATION_FAILED     0x00000063L
#define SYMBOLIC_INITIALIZATION_FAILED      0x00000064L
#define MEMORY1_INITIALIZATION_FAILED       0x00000065L
#define CACHE_INITIALIZATION_FAILED         0x00000066L
#define CONFIG_INITIALIZATION_FAILED        0x00000067L
#define FILE_INITIALIZATION_FAILED          0x00000068L
#define IO1_INITIALIZATION_FAILED           0x00000069L
#define LPC_INITIALIZATION_FAILED           0x0000006AL
#define PROCESS1_INITIALIZATION_FAILED      0x0000006BL
#define REFMON_INITIALIZATION_FAILED        0x0000006CL
#define SESSION1_INITIALIZATION_FAILED      0x0000006DL
#define SESSION2_INITIALIZATION_FAILED      0x0000006EL
#define SESSION3_INITIALIZATION_FAILED      0x0000006FL
#define SESSION4_INITIALIZATION_FAILED      0x00000070L
#define SESSION5_INITIALIZATION_FAILED      0x00000071L
#define ASSIGN_DRIVE_LETTERS_FAILED         0x00000072L
#define CONFIG_LIST_FAILED                  0x00000073L
#define BAD_SYSTEM_CONFIG_INFO              0x00000074L
#define CANNOT_WRITE_CONFIGURATION          0x00000075L
#define PROCESS_HAS_LOCKED_PAGES            0x00000076L
#define KERNEL_STACK_INPAGE_ERROR           0x00000077L
#define PHASE0_EXCEPTION                    0x00000078L
#define MISMATCHED_HAL                      0x00000079L
#define KERNEL_DATA_INPAGE_ERROR            0x0000007AL
#define INACCESSIBLE_BOOT_DEVICE            0x0000007BL
#define BUGCODE_NDIS_DRIVER                 0x0000007CL
#define INSTALL_MORE_MEMORY                 0x0000007DL
#define SYSTEM_THREAD_EXCEPTION_NOT_HANDLED 0x0000007EL
#define SYSTEM_THREAD_EXCEPTION_NOT_HANDLED_M   0x1000007EL
#define UNEXPECTED_KERNEL_MODE_TRAP         0x0000007FL
#define UNEXPECTED_KERNEL_MODE_TRAP_M       0x1000007FL
#define NMI_HARDWARE_FAILURE                0x00000080L
#define SPIN_LOCK_INIT_FAILURE              0x00000081L
#define DFS_FILE_SYSTEM                     0x00000082L
#define OFS_FILE_SYSTEM                     0x00000083L
#define RECOM_DRIVER                        0x00000084L
#define SETUP_FAILURE                       0x00000085L
#define AUDIT_FAILURE                       0x00000086L
#define MBR_CHECKSUM_MISMATCH               0x0000008BL
#define KERNEL_MODE_EXCEPTION_NOT_HANDLED   0x0000008EL
#define KERNEL_MODE_EXCEPTION_NOT_HANDLED_M 0x1000008EL
#define PP0_INITIALIZATION_FAILED           0x0000008FL
#define PP1_INITIALIZATION_FAILED           0x00000090L
#define WIN32K_INIT_OR_RIT_FAILURE          0x00000091L
#define UP_DRIVER_ON_MP_SYSTEM              0x00000092L
#define INVALID_KERNEL_HANDLE               0x00000093L
#define KERNEL_STACK_LOCKED_AT_EXIT         0x00000094L
#define PNP_INTERNAL_ERROR                  0x00000095L
#define INVALID_WORK_QUEUE_ITEM             0x00000096L
#define BOUND_IMAGE_UNSUPPORTED             0x00000097L
#define END_OF_NT_EVALUATION_PERIOD         0x00000098L
#define INVALID_REGION_OR_SEGMENT           0x00000099L
#define SYSTEM_LICENSE_VIOLATION            0x0000009AL
#define UDFS_FILE_SYSTEM                    0x0000009BL
#define MACHINE_CHECK_EXCEPTION             0x0000009CL
#define USER_MODE_HEALTH_MONITOR            0x0000009EL
#define DRIVER_POWER_STATE_FAILURE          0x0000009FL
#define INTERNAL_POWER_ERROR                0x000000A0L
#define PCI_BUS_DRIVER_INTERNAL             0x000000A1L
#define MEMORY_IMAGE_CORRUPT                0x000000A2L
#define ACPI_DRIVER_INTERNAL                0x000000A3L
#define CNSS_FILE_SYSTEM_FILTER             0x000000A4L
#define ACPI_BIOS_ERROR                     0x000000A5L
#define FP_EMULATION_ERROR                  0x000000A6L
#define BAD_EXHANDLE                        0x000000A7L
#define BOOTING_IN_SAFEMODE_MINIMAL         0x000000A8L
#define BOOTING_IN_SAFEMODE_NETWORK         0x000000A9L
#define BOOTING_IN_SAFEMODE_DSREPAIR        0x000000AAL
#define SESSION_HAS_VALID_POOL_ON_EXIT      0x000000ABL
#define HAL_MEMORY_ALLOCATION               0x000000ACL
#define VIDEO_DRIVER_DEBUG_REPORT_REQUEST   0x000000ADL
#define VIDEO_DRIVER_INIT_FAILURE           0x000000B4L
#define BOOTLOG_LOADED                      0x000000B5L
#define BOOTLOG_NOT_LOADED                  0x000000B6L
#define BOOTLOG_ENABLED                     0x000000B7L
#define ATTEMPTED_SWITCH_FROM_DPC           0x000000B8L
#define CHIPSET_DETECTED_ERROR              0x000000B9L
#define SESSION_HAS_VALID_VIEWS_ON_EXIT     0x000000BAL
#define NETWORK_BOOT_INITIALIZATION_FAILED  0x000000BBL
#define NETWORK_BOOT_DUPLICATE_ADDRESS      0x000000BCL
#define INVALID_HIBERNATED_STATE            0x000000BDL
#define ATTEMPTED_WRITE_TO_READONLY_MEMORY  0x000000BEL
#define MUTEX_ALREADY_OWNED                 0x000000BFL
#define PCI_CONFIG_SPACE_ACCESS_FAILURE     0x000000C0L
#define SPECIAL_POOL_DETECTED_MEMORY_CORRUPTION 0x000000C1L
#define BAD_POOL_CALLER                     0x000000C2L
#define BUGCODE_PSS_MESSAGE_SIGNATURE       0x000000C3L
#define DRIVER_VERIFIER_DETECTED_VIOLATION  0x000000C4L
#define DRIVER_CORRUPTED_EXPOOL             0x000000C5L
#define DRIVER_CAUGHT_MODIFYING_FREED_POOL  0x000000C6L
#define TIMER_OR_DPC_INVALID                0x000000C7L
#define IRQL_UNEXPECTED_VALUE               0x000000C8L
#define DRIVER_VERIFIER_IOMANAGER_VIOLATION 0x000000C9L
#define PNP_DETECTED_FATAL_ERROR            0x000000CAL
#define DRIVER_LEFT_LOCKED_PAGES_IN_PROCESS 0x000000CBL
#define PAGE_FAULT_IN_FREED_SPECIAL_POOL    0x000000CCL
#define PAGE_FAULT_BEYOND_END_OF_ALLOCATION 0x000000CDL
#define DRIVER_UNLOADED_WITHOUT_CANCELLING_PENDING_OPERATIONS   0x000000CEL
#define TERMINAL_SERVER_DRIVER_MADE_INCORRECT_MEMORY_REFERENCE  0x000000CFL
#define DRIVER_CORRUPTED_MMPOOL             0x000000D0L
#define DRIVER_IRQL_NOT_LESS_OR_EQUAL       0x000000D1L
#define DRIVER_PORTION_MUST_BE_NONPAGED     0x000000D3L
#define SYSTEM_SCAN_AT_RAISED_IRQL_CAUGHT_IMPROPER_DRIVER_UNLOADED  0x000000D4L
#define DRIVER_PAGE_FAULT_IN_FREED_SPECIAL_POOL 0x000000D5L
#define DRIVER_PAGE_FAULT_BEYOND_END_OF_ALLOCATION  0x000000D6L
#define DRIVER_PAGE_FAULT_BEYOND_END_OF_ALLOCATION_M    0x100000D6L
#define DRIVER_UNMAPPING_INVALID_VIEW       0x000000D7L
#define DRIVER_USED_EXCESSIVE_PTES          0x000000D8L
#define LOCKED_PAGES_TRACKER_CORRUPTION     0x000000D9L
#define SYSTEM_PTE_MISUSE                   0x000000DAL
#define DRIVER_CORRUPTED_SYSPTES            0x000000DBL
#define DRIVER_INVALID_STACK_ACCESS         0x000000DCL
#define POOL_CORRUPTION_IN_FILE_AREA        0x000000DEL
#define IMPERSONATING_WORKER_THREAD         0x000000DFL
#define ACPI_BIOS_FATAL_ERROR               0x000000E0L
#define WORKER_THREAD_RETURNED_AT_BAD_IRQL  0x000000E1L
#define MANUALLY_INITIATED_CRASH            0x000000E2L
#define RESOURCE_NOT_OWNED                  0x000000E3L
#define WORKER_INVALID                      0x000000E4L
#define POWER_FAILURE_SIMULATE              0x000000E5L
#define DRIVER_VERIFIER_DMA_VIOLATION       0x000000E6L
#define INVALID_FLOATING_POINT_STATE        0x000000E7L
#define INVALID_CANCEL_OF_FILE_OPEN         0x000000E8L
#define ACTIVE_EX_WORKER_THREAD_TERMINATION 0x000000E9L
#define THREAD_STUCK_IN_DEVICE_DRIVER       0x000000EAL
#define THREAD_STUCK_IN_DEVICE_DRIVER_M     0x100000EAL
#define DIRTY_MAPPED_PAGES_CONGESTION       0x000000EBL
#define SESSION_HAS_VALID_SPECIAL_POOL_ON_EXIT  0x000000ECL
#define UNMOUNTABLE_BOOT_VOLUME             0x000000EDL
#define CRITICAL_PROCESS_DIED               0x000000EFL
#define SCSI_VERIFIER_DETECTED_VIOLATION    0x000000F1L
#define HARDWARE_INTERRUPT_STORM            0x000000F2L
#define DISORDERLY_SHUTDOWN                 0x000000F3L
#define CRITICAL_OBJECT_TERMINATION         0x000000F4L
#define FLTMGR_FILE_SYSTEM                  0x000000F5L
#define PCI_VERIFIER_DETECTED_VIOLATION     0x000000F6L
#define DRIVER_OVERRAN_STACK_BUFFER         0x000000F7L
#define RAMDISK_BOOT_INITIALIZATION_FAILED  0x000000F8L
#define DRIVER_RETURNED_STATUS_REPARSE_FOR_VOLUME_OPEN  0x000000F9L
#define HTTP_DRIVER_CORRUPTED               0x000000FAL
#define RECURSIVE_MACHINE_CHECK             0x000000FBL
#define ATTEMPTED_EXECUTE_OF_NOEXECUTE_MEMORY   0x000000FCL
#define DIRTY_NOWRITE_PAGES_CONGESTION      0x000000FDL
#define BUGCODE_USB_DRIVER                  0x000000FEL
#define BC_BLUETOOTH_VERIFIER_FAULT         0x00000BFEL
#define RESERVE_QUEUE_OVERFLOW              0x000000FFL
#define LOADER_BLOCK_MISMATCH               0x00000100L
#define CLOCK_WATCHDOG_TIMEOUT              0x00000101L
#define DPC_WATCHDOG_TIMEOUT                0x00000102L
#define MUP_FILE_SYSTEM                     0x00000103L
#define AGP_INVALID_ACCESS                  0x00000104L
#define AGP_GART_CORRUPTION                 0x00000105L
#define AGP_ILLEGALLY_REPROGRAMMED          0x00000106L
#define KERNEL_EXPAND_STACK_ACTIVE          0x00000107L
#define THIRD_PARTY_FILE_SYSTEM_FAILURE     0x00000108L
#define CRITICAL_STRUCTURE_CORRUPTION       0x00000109L
#define APP_TAGGING_INITIALIZATION_FAILED   0x0000010AL
#define DFSC_FILE_SYSTEM                    0x0000010BL
#define FSRTL_EXTRA_CREATE_PARAMETER_VIOLATION  0x0000010CL
#define WDF_VIOLATION                       0x0000010DL
#define VIDEO_MEMORY_MANAGEMENT_INTERNAL    0x0000010EL
#define DRIVER_INVALID_CRUNTIME_PARAMETER   0x00000110L
#define RECURSIVE_NMI                       0x00000111L
#define MSRPC_STATE_VIOLATION               0x00000112L
#define VIDEO_DXGKRNL_FATAL_ERROR           0x00000113L
#define VIDEO_SHADOW_DRIVER_FATAL_ERROR     0x00000114L
#define AGP_INTERNAL                        0x00000115L
#define VIDEO_TDR_FAILURE                   0x00000116L
#define VIDEO_TDR_TIMEOUT_DETECTED          0x00000117L
#define NTHV_GUEST_ERROR                    0x00000118L
#define VIDEO_SCHEDULER_INTERNAL_ERROR      0x00000119L
#define EM_INITIALIZATION_ERROR             0x0000011AL
#define DRIVER_RETURNED_HOLDING_CANCEL_LOCK 0x0000011BL
#define ATTEMPTED_WRITE_TO_CM_PROTECTED_STORAGE 0x0000011CL
#define EVENT_TRACING_FATAL_ERROR           0x0000011DL
#define TOO_MANY_RECURSIVE_FAULTS           0x0000011EL
#define INVALID_DRIVER_HANDLE               0x0000011FL
#define BITLOCKER_FATAL_ERROR               0x00000120L
#define DRIVER_VIOLATION                    0x00000121L
#define WHEA_INTERNAL_ERROR                 0x00000122L
#define CRYPTO_SELF_TEST_FAILURE            0x00000123L
#define WHEA_UNCORRECTABLE_ERROR            0x00000124L
#define NMR_INVALID_STATE                   0x00000125L
#define NETIO_INVALID_POOL_CALLER           0x00000126L
#define PAGE_NOT_ZERO                       0x00000127L
#define WORKER_THREAD_RETURNED_WITH_BAD_IO_PRIORITY 0x00000128L
#define WORKER_THREAD_RETURNED_WITH_BAD_PAGING_IO_PRIORITY  0x00000129L
#define MUI_NO_VALID_SYSTEM_LANGUAGE        0x0000012AL
#define FAULTY_HARDWARE_CORRUPTED_PAGE      0x0000012BL
#define EXFAT_FILE_SYSTEM                   0x0000012CL
#define VOLSNAP_OVERLAPPED_TABLE_ACCESS     0x0000012DL
#define INVALID_MDL_RANGE                   0x0000012EL
#define VHD_BOOT_INITIALIZATION_FAILED      0x0000012FL
#define DYNAMIC_ADD_PROCESSOR_MISMATCH      0x00000130L
#define INVALID_EXTENDED_PROCESSOR_STATE    0x00000131L
#define RESOURCE_OWNER_POINTER_INVALID      0x00000132L
#define DPC_WATCHDOG_VIOLATION              0x00000133L
#define DRIVE_EXTENDER                      0x00000134L
#define REGISTRY_FILTER_DRIVER_EXCEPTION    0x00000135L
#define VHD_BOOT_HOST_VOLUME_NOT_ENOUGH_SPACE   0x00000136L
#define HYPERVISOR_ERROR                    0x00020001L
#define WINLOGON_FATAL_ERROR                0xC000021AL
#define MANUALLY_INITIATED_CRASH1           0xDEADDEADL

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _BUGCODES_ */
