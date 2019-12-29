/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 idkwhoiam322 <idkwhoiam322@raphielgang.org>
 */

/* In-kernel powerHAL to replicate some behaviours of the pixel powerHAL */

#ifndef _POWER_HAL_H
#define _POWER_HAL_H

/* Video Playback detection */
extern bool video_streaming;

/* GPU Boosting */
enum kgsl_pwrctrl_timer_type {
	KGSL_PWR_IDLE_TIMER,
};

#ifdef CONFIG_IN_KERNEL_POWERHAL
/* powerHAL main */
void powerhal_boost_kick(void);
void powerhal_boost_kick_max(unsigned int duration_ms);

/* UFS Boosting */
void set_ufshcd_clkgate_enable_status(u32 value);
void set_ufshcd_hibern8_on_idle_enable_status(u32 value);

/* Video Playback detection */
void video_streaming_disable_schedtune(void);

/* EAS */
extern bool energy_aware_enable;
extern bool disable_boost;

#ifdef CONFIG_SCHED_TUNE
int disable_schedtune_boost(char *st_name, bool disable);
#else
static inline int disable_schedtune_boost(char *st_name, bool disable)
{
	return 0;
}
#endif

#else
static inline void powerhal_boost_kick(void) { }
static inline void powerhal_boost_kick_max(unsigned int duration_ms) { }
static inline void set_ufshcd_clkgate_enable_status(u32 value) { }
static inline void set_ufshcd_hibern8_on_idle_enable_status(u32 value) { }
static inline void video_streaming_disable_schedtune(void) { }
#endif /* IN_KERNEL_POWERHAL */

#endif /* _POWER_HAL_H */
