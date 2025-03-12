/**
 * @file xf_sle_config_internal.h
 * @author dotc (dotchan@qq.com)
 * @brief 此处列出了 XF_SLE 的可配置项。
 *  移植时请定义对应的外部配置文件 (xf_sle_config.h)，以影响此处的配置。
 * @date 2025-03-12
 *
 * @Copyright (c) 2025, CorAL. All rights reserved.
 */

#ifndef __XF_SLE_CONFIG_INTERNAL_H__
#define __XF_SLE_CONFIG_INTERNAL_H__

/* ==================== [Includes] ========================================== */

#include "xf_sle_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

#if (!defined(XF_SLE_ENABLE) || (XF_SLE_ENABLE) || defined(__DOXYGEN__))
#define XF_SLE_IS_ENABLE        (1)
#else
#define XF_SLE_IS_ENABLE        (0)
#endif

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __XF_SLE_CONFIG_INTERNAL_H__
