/**
 * @file xf_sle_connection_manager_types.h
 * @author dotc (dotchan@qq.com)
 * @brief
 * @date 2024-08-06
 *
 * Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

#ifndef __XF_SLE_XF_SLE_CONNECTION_MANAGER_TYPES_H__
#define __XF_SLE_XF_SLE_CONNECTION_MANAGER_TYPES_H__

/* ==================== [Includes] ========================================== */

#include "xf_utils.h"
#include "xf_sle_types.h"

#if XF_SLE_IS_ENABLE || defined(__DOXYGEN__)

/**
 * @cond (XFAPI_USER || XFAPI_PORT)
 * @addtogroup group_xf_wal_sle
 * @endcond
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* TODO xf_sle_conn_param_update_t conn_id 移至函数参数处，
                supervision_timeout 改 timeout */
/**
 * @brief SLE 连接参数更新的信息
 */
typedef struct {
    uint16_t conn_id;             /*!< 链接 (连接) ID */
    uint16_t interval_min;        /*!< 链路调度最小间隔，单位slot */
    uint16_t interval_max;        /*!< 链路调度最大间隔，单位slot */
    uint16_t max_latency;         /*!< 延迟周期，单位slot */
    uint16_t supervision_timeout; /*!< 超时时间，单位10ms */
} xf_sle_conn_param_update_t;

/**
 * @brief SLE 配对状态
 */
typedef enum {
    XF_SLE_PAIR_STATE_NONE    = 0x01,    /*!< 未配对状态 */
    XF_SLE_PAIR_STATE_PAIRING = 0x02,    /*!< 正在配对 */
    XF_SLE_PAIR_STATE_PAIRED  = 0x03     /*!< 已完成配对 */
} xf_sle_pair_state_t;

/**
 * @brief SLE 断连原因
 */
typedef enum {
    XF_SLE_DISCONNECT_BY_REMOTE = 0x10,    /*!< 远端断链 */
    XF_SLE_DISCONNECT_BY_LOCAL  = 0x11,    /*!< 本端断链 */
} xf_sle_disconnect_reason_t;


/**
 * @brief 星闪无线帧类型，bitmap表示
 */
typedef enum {
    XF_SLE_RADIO_FRAME_1    = 0,      /*!< @if Eng Radio frame type 1.
                                             @else 无线帧类型1。 @endif */
    XF_SLE_RADIO_FRAME_2    = 1,      /*!< @if Eng Eng Radio frame type 2.
                                             @else 无线帧类型2。 @endif */
    XF_SLE_RADIO_FRAME_3_M0 = 2,      /*!< @if Eng Radio frame type 3 and m sequence 0.
                                             @else 无线帧类型3，m序列0。 @endif */
    XF_SLE_RADIO_FRAME_3_M1 = 3,      /*!< @if Eng Radio frame type 3 and m sequence 1.
                                             @else 无线帧类型3，m序列1。 @endif */
    XF_SLE_RADIO_FRAME_3_M2 = 4,      /*!< @if Eng Radio frame type 3 and m sequence 2.
                                             @else 无线帧类型3，m序列2。 @endif */
    XF_SLE_RADIO_FRAME_3_M3 = 5,      /*!< @if Eng Radio frame type 3 and m sequence 3.
                                             @else 无线帧类型3，m序列3。 @endif */
    XF_SLE_RADIO_FRAME_3_M4 = 6,      /*!< @if Eng Radio frame type 3 and m sequence 4.
                                             @else 无线帧类型3，m序列4。 @endif */
    XF_SLE_RADIO_FRAME_3_M5 = 7,      /*!< @if Eng Radio frame type 3 and m sequence 5.
                                             @else 无线帧类型3，m序列5。 @endif */
    XF_SLE_RADIO_FRAME_4_M0 = 8,      /*!< @if Eng Radio frame type 4 and m sequence 0.
                                             @else 无线帧类型4，m序列0 @endif */
    XF_SLE_RADIO_FRAME_4_M1 = 9,      /*!< @if Eng Radio frame type 4 and m sequence 1.
                                             @else 无线帧类型4，m序列1 @endif */
    XF_SLE_RADIO_FRAME_4_M2 = 10,     /*!< @if Eng Radio frame type 4 and m sequence 2.
                                             @else 无线帧类型4，m序列2。 @endif */
    XF_SLE_RADIO_FRAME_4_M3 = 11,     /*!< @if Eng Radio frame type 4 and m sequence 3.
                                             @else 无线帧类型4，m序列3。 @endif */
    XF_SLE_RADIO_FRAME_4_M4 = 12,     /*!< @if Eng Radio frame type 4 and m sequence 4.
                                             @else 无线帧类型4，m序列4。 @endif */
    XF_SLE_RADIO_FRAME_4_M5 = 13,     /*!< @if Eng Radio frame type 4 and m sequence 5.
                                             @else 无线帧类型4，m序列5。 @endif */
    XF_SLE_RADIO_FRAME_END
} xf_sle_radio_frame_t;

/**
 * @brief 星闪发送/接收PHY类型，bitmap表示
 */
typedef enum {
    XF_SLE_PHY_1M = 0x0,          /*!< @if Eng 1M PHY
                                         @else 1M PHY @endif */
    XF_SLE_PHY_2M = 0x1,          /*!< @if Eng 2M PHY
                                         @else 2M PHY @endif */
    XF_SLE_PHY_4M = 0x2,          /*!< @if Eng 4M PHY
                                         @else 4M PHY @endif */
    XF_SLE_PHY_SUPPORT_NUM,
} xf_sle_phy_t;

/**
 * @brief 星闪发送/接收导频密度指示，bitmap表示
 */
typedef enum {
    XF_SLE_PHY_PILOT_DENSITY_4_TO_1  = 0x0,    /*!< @if Eng The pilot density is 4:1.
                                             @else 导频密度为4:1 @endif */
    XF_SLE_PHY_PILOT_DENSITY_8_TO_1  = 0x1,    /*!< @if Eng The pilot density is 8:1.
                                             @else 导频密度为8:1 @endif */
    XF_SLE_PHY_PILOT_DENSITY_16_TO_1 = 0x2,    /*!< @if Eng The pilot density is 16:1.
                                             @else 导频密度为16:1 @endif */
    XF_SLE_PHY_PILOT_DENSITY_NO = 0x3,         /*!< @if Eng No pilot.
                                             @else 无导频 @endif */
    XF_SLE_PHY_PILOT_DENSITY_NUM,
} xf_sle_phy_pilot_density_t;

/**
 * @brief SLE PHY 参数
 */
typedef struct {
    xf_sle_radio_frame_t tx_format;          /*!< 发送无线帧类型 */
    xf_sle_radio_frame_t rx_format;          /*!< 接收无线帧类型 */
    xf_sle_phy_t tx_phy;             /*!< 发送 PHY */
    xf_sle_phy_t rx_phy;             /*!< 接收 PHY */
    xf_sle_phy_pilot_density_t tx_pilot_density;   /*!< 发送导频密度指示 */
    xf_sle_phy_pilot_density_t rx_pilot_density;   /*!< 接收导频密度指示 */
    uint8_t g_feedback;         /*!< 先发链路反馈类型指示，取值范围 0-63 */
    uint8_t t_feedback;         /*!< 后发链路反馈类型指示，取值范围 0-7 */
} xf_sle_set_phy_t;

/**
 * @brief SLE 默认连接参数
 */
typedef struct {
    uint8_t  en_filter;         /*!< 链路是否打开过滤功能 */
    uint8_t  scan_phy;          /*!< 链路扫描通信带宽： 1:1M, 2:2M */
    uint8_t  en_gt_negotiate;   /*!< 链路建立时是否进行 G 和 T 交互 */
    uint16_t scan_interval;     /*!< 链路建立时扫描对端设备的 interval */
    uint16_t scan_window;       /*!< 链路建立时扫描对端设备的 windows */
    uint16_t interval_min;      /*!< 链路调度最小 interval */
    uint16_t interval_max;      /*!< 链路调度最大 interval */
    uint16_t timeout;           /*!< 链路超时时间 */
} xf_sle_conn_param_def_t;

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

/**
 * End of addtogroup group_xf_wal_sle
 * @}
 */

#endif /* XF_SLE_IS_ENABLE */

#endif /* __XF_SLE_XF_SLE_CONNECTION_MANAGER_TYPES_H__ */
