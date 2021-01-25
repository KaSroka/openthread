/*
 *  Copyright (c) 2019, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes nrf52833 compile-time configuration constants
 *   for OpenThread.
 */

#ifndef OPENTHREAD_CORE_NRF52833_CONFIG_H_
#define OPENTHREAD_CORE_NRF52833_CONFIG_H_

/*
 * The GNU Autoconf system defines a PACKAGE macro which is the name
 * of the software package. This name collides with PACKAGE field in
 * the nRF52 Factory Information Configuration Registers (FICR)
 * structure.
 */
#undef PACKAGE

/**
 * @def OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE
 *
 * Define to 1 to enable Border Agent support.
 *
 */
#ifndef OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE
#define OPENTHREAD_CONFIG_BORDER_AGENT_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE
 *
 * Define to 1 to enable Border Router support.
 *
 */
#ifndef OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE
#define OPENTHREAD_CONFIG_BORDER_ROUTER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_COMMISSIONER_ENABLE
 *
 * Define to 1 to enable Commissioner support.
 *
 */
#ifndef OPENTHREAD_CONFIG_COMMISSIONER_ENABLE
#define OPENTHREAD_CONFIG_COMMISSIONER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_DIAG_ENABLE
 *
 * Define to 1 to enable Factory Diagnostics support.
 *
 */
#ifndef OPENTHREAD_CONFIG_DIAG_ENABLE
#define OPENTHREAD_CONFIG_DIAG_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE
 *
 * Define to 1 to enable DHCPv6 Server support.
 *
 */
#ifndef OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE
#define OPENTHREAD_CONFIG_DHCP6_SERVER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE
 *
 * Define to 1 to enable DHCPv6 Client support.
 *
 */
#ifndef OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE
#define OPENTHREAD_CONFIG_DHCP6_CLIENT_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS
 *
 * Define as 1 to enable bultin-mbedtls.
 *
 * Note that the OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS determines whether to use bultin-mbedtls as well as
 * whether to manage mbedTLS internally, such as memory allocation and debug.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS
#define OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS 1
#endif

/**
 * @def OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE
 *
 * Define as 1 to enable support for adding of auto-configured SLAAC addresses by OpenThread.
 *
 */
#ifndef OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE
#define OPENTHREAD_CONFIG_IP6_SLAAC_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_JOINER_ENABLE
 *
 * Define to 1 to enable Joiner support.
 *
 */
#ifndef OPENTHREAD_CONFIG_JOINER_ENABLE
#define OPENTHREAD_CONFIG_JOINER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_FILTER_ENABLE
 *
 * Define to 1 to enable MAC filter support.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_FILTER_ENABLE
#define OPENTHREAD_CONFIG_MAC_FILTER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_UART_ENABLE
 *
 * Define to 1 to enable NCP UART support.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_UART_ENABLE
#define OPENTHREAD_CONFIG_NCP_UART_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_NETWORK_DIAG_MTD_ENABLE
 *
 * Define to 1 to enable TMF network diagnostics on MTDs.
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_NETWORK_DIAG_MTD_ENABLE
#define OPENTHREAD_CONFIG_TMF_NETWORK_DIAG_MTD_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_ENABLE
 *
 * Define to 1 to support injecting Service entries into the Thread Network Data.
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_ENABLE
#define OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_MAX_ALOCS
 *
 * The maximum number of supported Service ALOCs registrations for this device.
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_MAX_ALOCS
#define OPENTHREAD_CONFIG_TMF_NETDATA_SERVICE_MAX_ALOCS 2
#endif

/**
 * @def OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE
 *
 * Define to 1 to enable UDP forward support.
 *
 */
#ifndef OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE
#define OPENTHREAD_CONFIG_UDP_FORWARD_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_LEVEL
 *
 * The log level (used at compile time). If `OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE`
 * is set, this defines the most verbose log level possible. See
 *`OPENTHREAD_CONFIG_INITIAL_LOG_LEVEL` to set the initial log level.
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_LEVEL
#define OPENTHREAD_CONFIG_LOG_LEVEL OT_LOG_LEVEL_DEBG
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_OUTPUT
 *
 * The nrf52833 platform provides an otPlatLog() function.
 */
#define OPENTHREAD_CONFIG_LOG_OUTPUT OPENTHREAD_CONFIG_LOG_OUTPUT_APP

/**
 * @def OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE
 *
 * Define as 1 to enable dynamic log level control.
 *
 * Note that the OPENTHREAD_CONFIG_LOG_LEVEL determines the log level at
 * compile time. The dynamic log level control (if enabled) only allows
 * decreasing the log level from the compile time value.
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE
#define OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_REGION_LOG_LEVEL
 *
 * Define as 1 to enable region log level control.
 *
 * Region log levels can be controlled separately either at compile time or
 * dynamically (when OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE is enabled).
 * Note that these values cannot exceed the OPENTHREAD_CONFIG_LOG_LEVEL value.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_REGION_LOG_LEVEL
#define OPENTHREAD_CONFIG_ENABLE_REGION_LOG_LEVEL 1
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_LEVEL_INIT
 *
 * The initial log level used when OpenThread is initialized. See
 * `OPENTHREAD_CONFIG_LOG_LEVEL_DYNAMIC_ENABLE`.
 */
#ifndef OPENTHREAD_CONFIG_LOG_LEVEL_INIT
#define OPENTHREAD_CONFIG_LOG_LEVEL_INIT OPENTHREAD_CONFIG_LOG_LEVEL
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_PKT_DUMP
 *
 * Define to enable log content of packets.
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_PKT_DUMP
#define OPENTHREAD_CONFIG_LOG_PKT_DUMP 0
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_MAC_RX_FRAMES_WITH_MISMATCHED_ADDRESS
 *
 * If defined as 1 when MAC frame is received with mismatched address, log will be printed.
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_MAC_RX_FRAMES_WITH_MISMATCHED_ADDRESS
#define OPENTHREAD_CONFIG_LOG_MAC_RX_FRAMES_WITH_MISMATCHED_ADDRESS 0
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE
 *
 * The maximum OpenThread log string size (number of chars) supported by NCP using Spinel `StreamWrite`.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE
#define OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE 512
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE
 *
 * The size of NCP message buffer in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE
#define OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE (32768/2)
#endif

/**
 * @def OPENTHREAD_CONFIG_STACK_VENDOR_OUI
 *
 * The Organizationally Unique Identifier for the vendor.
 *
 */
#ifndef OPENTHREAD_CONFIG_STACK_VENDOR_OUI
#define OPENTHREAD_CONFIG_STACK_VENDOR_OUI 0xf4ce36
#endif

/**
 * @def #define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_ENABLE
 *
 * Define to 1 to enable reading the IEEE EUI-64 address from the UICR.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_ENABLE
#define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_ENABLE 1
#endif

/**
 * @def #define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG1
 *
 * Define the number of UICR CUSTOMER register which stores the first part of the factory-assigned eui64.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG1
#define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG1 0
#endif

/**
 * @def #define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG2
 *
 * Define the number of UICR CUSTOMER register which stores the second part of the factory-assigned eui64.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG2
#define OPENTHREAD_CONFIG_PLATFORM_EUI64_UICR_REG2 1
#endif

/**
 * @def #define OPENTHREAD_CONFIG_PLATFORM_POWER_LIMIT_UICR_REG
 *
 * Define the currently selected power limit table.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_POWER_LIMIT_UICR_REG
#define OPENTHREAD_CONFIG_PLATFORM_POWER_LIMIT_UICR_REG 2
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_MAX_CHILDREN
 *
 * The maximum number of children.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_MAX_CHILDREN
#define OPENTHREAD_CONFIG_MLE_MAX_CHILDREN 32
#endif

/**
 * @def OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS
 *
 * The number of message buffers in the buffer pool.
 *
 */
#ifndef OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS
#define OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS 200
#endif

/**
 * @def OPENTHREAD_CONFIG_MESSAGE_BUFFER_HIGH_THRESHOLD
 *
 * The Message Buffer threshold level in percent indicating high utilization of the buffer.
 *
 */
#ifndef OPENTHREAD_CONFIG_MESSAGE_BUFFER_HIGH_THRESHOLD
#define OPENTHREAD_CONFIG_MESSAGE_BUFFER_HIGH_THRESHOLD 75
#endif

/**
 * @def OPENTHREAD_CONFIG_MESSAGE_BUFFER_LOW_THRESHOLD
 *
 * The Message Buffer threshold level in percent indicating low utilization of the buffer.
 *
 */
#ifndef OPENTHREAD_CONFIG_MESSAGE_BUFFER_LOW_THRESHOLD
#define OPENTHREAD_CONFIG_MESSAGE_BUFFER_LOW_THRESHOLD 45
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_IP_ADDRS_PER_CHILD
 *
 * The maximum number of supported IPv6 address registrations per child.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_IP_ADDRS_PER_CHILD
#define OPENTHREAD_CONFIG_MLE_IP_ADDRS_PER_CHILD 6
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS
 *
 * The maximum number of state-changed callback handlers (set using `otSetStateChangedCallback()`).
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS
#define OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS 3
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_ADDRESS_CACHE_ENTRIES
 *
 * The number of EID-to-RLOC cache entries.
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_ADDRESS_CACHE_ENTRIES
#define OPENTHREAD_CONFIG_TMF_ADDRESS_CACHE_ENTRIES 100
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_INITIAL_RETRY_DELAY
 *
 * Initial retry delay for address query (in seconds).
 *
 * Default: 15 seconds
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_INITIAL_RETRY_DELAY
#define OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_INITIAL_RETRY_DELAY 8
#endif

/**
 * @def OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_MAX_RETRY_DELAY
 *
 * Maximum retry delay for address query (in seconds).
 *
 * Default: 28800 seconds (480 minutes or 8 hours)
 *
 */
#ifndef OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_MAX_RETRY_DELAY
#define OPENTHREAD_CONFIG_TMF_ADDRESS_QUERY_MAX_RETRY_DELAY 64
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_PREPREND_LEVEL
 *
 * Define to prepend the log level to all log messages
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL
#define OPENTHREAD_CONFIG_LOG_PREPEND_LEVEL 0
#endif

/**
 * @def OPENTHREAD_CONFIG_LOG_PREPEND_REGION
 *
 * Define to prepend the log region to all log messages.
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_PREPEND_REGION
#define OPENTHREAD_CONFIG_LOG_PREPEND_REGION 0
#endif

#ifndef OPENTHREAD_CONFIG_LOG_PLATFORM
#define OPENTHREAD_CONFIG_LOG_PLATFORM 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_SOFTWARE_ACK_TIMEOUT_ENABLE
 *
 * Define to 1 if you want to enable software ACK timeout logic.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_SOFTWARE_ACK_TIMEOUT_ENABLE
#define OPENTHREAD_CONFIG_MAC_SOFTWARE_ACK_TIMEOUT_ENABLE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_SOFTWARE_RETRANSMIT_ENABLE
 *
 * Define to 1 if you want to enable software retransmission logic.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_SOFTWARE_RETRANSMIT_ENABLE
#define OPENTHREAD_CONFIG_MAC_SOFTWARE_RETRANSMIT_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_SOFTWARE_CSMA_BACKOFF_ENABLE
 *
 * Define to 1 if you want to enable software CSMA-CA backoff logic.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_SOFTWARE_CSMA_BACKOFF_ENABLE
#define OPENTHREAD_CONFIG_MAC_SOFTWARE_CSMA_BACKOFF_ENABLE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_USEC_TIMER_ENABLE
 *
 * Define to 1 if you want to support microsecond timer in platform.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_USEC_TIMER_ENABLE
#define OPENTHREAD_CONFIG_PLATFORM_USEC_TIMER_ENABLE 1
#endif

/**
 * @def SETTINGS_CONFIG_BASE_ADDRESS
 *
 * The base address of settings.
 *
 */
#ifndef SETTINGS_CONFIG_BASE_ADDRESS
#define SETTINGS_CONFIG_BASE_ADDRESS 0
#endif

/**
 * @def SETTINGS_CONFIG_PAGE_SIZE
 *
 * The page size of settings.
 *
 */
#ifndef SETTINGS_CONFIG_PAGE_SIZE
#define SETTINGS_CONFIG_PAGE_SIZE 4096
#endif

/**
 * @def SETTINGS_CONFIG_PAGE_NUM
 *
 * The page number of settings.
 *
 */
#ifndef SETTINGS_CONFIG_PAGE_NUM
#define SETTINGS_CONFIG_PAGE_NUM 4
#endif

/**
 * @def OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE
 *
 * The size of heap buffer when DTLS is enabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE
#define OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE (4096 * sizeof(void *))
#endif

/**
 * @def OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE_NO_DTLS
 *
 * The size of heap buffer when DTLS is disabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE_NO_DTLS
#define OPENTHREAD_CONFIG_HEAP_INTERNAL_SIZE_NO_DTLS 2048
#endif

/**
 * @def OPENTHREAD_CONFIG_CLI_TX_BUFFER_SIZE
 *
 *  The size of CLI message buffer in bytes
 *
 */
#ifndef OPENTHREAD_CONFIG_CLI_UART_TX_BUFFER_SIZE
#define OPENTHREAD_CONFIG_CLI_UART_TX_BUFFER_SIZE 2048
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_ENABLE
 *
 * Define to 1 to enable MAC retry histogram support.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_ENABLE
#define OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_ERROR_HISTOGRAM_ENABLE
 *
 * Define to 1 to enable MAC error histogram support.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_ERROR_HISTOGRAM_ENABLE
#define OPENTHREAD_CONFIG_MAC_ERROR_HISTOGRAM_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_MAX_SIZE_COUNT_DIRECT
 *
 * The default size of MAC histogram array for success message retry direct transmission.
 *
 * Default value is 16 (15 retransmissions + 1).
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_MAX_SIZE_COUNT_DIRECT
#define OPENTHREAD_CONFIG_MAC_RETRY_SUCCESS_HISTOGRAM_MAX_SIZE_COUNT_DIRECT 16
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_TRANSMISSION_ERROR_HISTOGRAM_MAX_SIZE_COUNT_DIRECT
 *
 * The default size of MAC histogram array for direct transmission errors.
 *
 * Default value is 17 (16 transmissions + 1).
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_TRANSMISSION_ERROR_HISTOGRAM_MAX_SIZE_COUNT_DIRECT
#define OPENTHREAD_CONFIG_MAC_TRANSMISSION_ERROR_HISTOGRAM_MAX_SIZE_COUNT_DIRECT 17
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_STATISTICS_ENABLE
 *
 * Define to 1 to enable MAC diagnostic histogram support.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_STATISTICS_ENABLE
#define OPENTHREAD_CONFIG_MAC_STATISTICS_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_STATISTICS_ENABLE
 *
 * Define to 1 to enable MLE connected neighbors histogram support.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_STATISTICS_ENABLE
#define OPENTHREAD_CONFIG_MLE_STATISTICS_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_CHANNEL_MONITOR_ENABLE
 *
 * Define to 1 to enable Channel Monitor support.
 *
 */
#ifndef OPENTHREAD_CONFIG_CHANNEL_MONITOR_ENABLE
#define OPENTHREAD_CONFIG_CHANNEL_MONITOR_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_CHANNEL_MANAGER_ENABLE
 *
 * Define as 1 to enable Channel Manager support.
 *
 */
#ifndef OPENTHREAD_CONFIG_CHANNEL_MANAGER_ENABLE
#define OPENTHREAD_CONFIG_CHANNEL_MANAGER_ENABLE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_COMMON_ASSERT
 *
 * Define as 1 to use common assert implementation
 *
 */
#ifndef OPENTHREAD_CONFIG_COMMON_ASSERT
#define OPENTHREAD_CONFIG_COMMON_ASSERT 1
#endif

/**
 * @def OPENTHREAD_DATASET_RAM
 *
 * Define as 1 to keep activ and pending datasets in RAM, not in NVM
 *
 */
#ifndef OPENTHREAD_DATASET_RAM
#define OPENTHREAD_DATASET_RAM 0
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT
 *
 * Define to 1 to send an MLE Link Request when MAX_NEIGHBOR_AGE is reached for a neighboring router.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT
#define OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT 1
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_TX_NUM_MLE_ADV
 *
 * The number of times each frame carrying an MLE Advertisement is transmitted.
 *
 * The minimum value is 1.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_TX_NUM_MLE_ADV
#define OPENTHREAD_CONFIG_MAC_TX_NUM_MLE_ADV 3
#endif

/**
 * @def OPENTHREAD_CONFIG_IP6_MAX_EXT_UCAST_ADDRS
 *
 * The maximum number of supported IPv6 addresses allows to be externally added.
 *
 */
#ifndef OPENTHREAD_CONFIG_IP6_MAX_EXT_UCAST_ADDRS
#define OPENTHREAD_CONFIG_IP6_MAX_EXT_UCAST_ADDRS 8
#endif

/**
 * @def OPENTHREAD_CONFIG_IP6_MAX_EXT_MCAST_ADDRS
 *
 * The maximum number of supported IPv6 multicast addresses allows to be externally added.
 *
 */
#ifndef OPENTHREAD_CONFIG_IP6_MAX_EXT_MCAST_ADDRS
#define OPENTHREAD_CONFIG_IP6_MAX_EXT_MCAST_ADDRS 4
#endif

/**
 * @def OPENTHREAD_CONFIG_MAC_DEFAULT_MAX_FRAME_RETRIES_DIRECT
 *
 * The default maximum number of retries allowed after a transmission failure for direct transmissions.
 *
 * Equivalent to macMaxFrameRetries, default value is 3.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAC_DEFAULT_MAX_FRAME_RETRIES_DIRECT
#define OPENTHREAD_CONFIG_MAC_DEFAULT_MAX_FRAME_RETRIES_DIRECT 15
#endif

/**
 * @def OPENTHREAD_CONFIG_MPL_SEED_SET_ENTRIES
 *
 * The number of MPL Seed Set entries for duplicate detection.
 *
 */
#ifndef OPENTHREAD_CONFIG_MPL_SEED_SET_ENTRIES
#define OPENTHREAD_CONFIG_MPL_SEED_SET_ENTRIES 256
#endif

/**
 * @def TEST_BUILD_MODE_UNSAFE_FOR_PRODUCTION
 *
 * This flag enable additional testing features for openthread.
 * Warning! Enable this flag with caution.
 * This flag should never be used for production release
 *
 */
#ifndef TEST_BUILD_MODE_UNSAFE_FOR_PRODUCTION
#define TEST_BUILD_MODE_UNSAFE_FOR_PRODUCTION 0
#endif

/**
 * @def OPENTHREAD_CONFIG_PLAT_LOG_FUNCTION
 * @def OPENTHREAD_CONFIG_LOG_DEFINE_AS_MACRO_ONLY
 *
 * Set to 1 to require all the logging related definition to user macro only (up to the call to the platform log API).
 * Otherwise the logging implementation uses functions (which is preferred and recommended model).
 *
 * This is intended for special platform requirements where the logging needs to be defined a macro (e.g., for log
 * tokenization or similar features).
 *
 */
#ifndef OPENTHREAD_CONFIG_LOG_DEFINE_AS_MACRO_ONLY
#define OPENTHREAD_CONFIG_LOG_DEFINE_AS_MACRO_ONLY 1
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_FLASH_API_ENABLE
 *
 * Define to 1 to enable otPlatFlash* APIs to support non-volatile storage.
 *
 * When defined to 1, the platform MUST implement the otPlatFlash* APIs instead of the otPlatSettings* APIs.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_FLASH_API_ENABLE
#define OPENTHREAD_CONFIG_PLATFORM_FLASH_API_ENABLE 1
#endif

/**
 * @def OPENTHREAD_ENABLE_NCP_VENDOR_PCAP_HANDLER
 *
 * Enables vendor handler for PCAP packets.
 *
 */
#ifndef OPENTHREAD_ENABLE_NCP_VENDOR_PCAP_HANDLER
#define OPENTHREAD_ENABLE_NCP_VENDOR_PCAP_HANDLER 1
#endif


#ifndef OPENTHREAD_CONFIG_THREAD_VERSION
#define OPENTHREAD_CONFIG_THREAD_VERSION 3
#endif

#ifndef OPENTHREAD_CONFIG_DUA_ENABLE
#define OPENTHREAD_CONFIG_DUA_ENABLE 1
#endif

#ifndef OPENTHREAD_CONFIG_MLR_ENABLE
#define OPENTHREAD_CONFIG_MLR_ENABLE 1
#endif

#ifndef OPENTHREAD_CONFIG_BACKBONE_ROUTER_ENABLE
#define OPENTHREAD_CONFIG_BACKBONE_ROUTER_ENABLE 1
#endif

#ifndef OPENTHREAD_CONFIG_MAC_CSL_RECEIVER_ENABLE
#define OPENTHREAD_CONFIG_MAC_CSL_RECEIVER_ENABLE 1
#endif

#ifndef OPENTHREAD_CONFIG_MLE_LINK_METRICS_ENABLE
#define OPENTHREAD_CONFIG_MLE_LINK_METRICS_ENABLE 1
#endif

/*
 * Suppress the ARMCC warning on unreachable statement,
 * e.g. break after assert(false) or ExitNow() macro.
 */
#if defined(__CC_ARM)
_Pragma("diag_suppress=111") _Pragma("diag_suppress=128")
#endif

#endif // OPENTHREAD_CORE_NRF52833_CONFIG_H_
