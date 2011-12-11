/* ironkrnL Tweak File */

#define RAMHACK64

// Overclock
#define IRON_AVP_FREQ 240000
#define IRON_VDE_FREQ IRON_AVP_FREQ
#define IRON_SYSTEM_FREQ IRON_AVP_FREQ
#define IRON_EMC_VOLT 1200
#define IRON_GPU_FREQ 400000
#define IRON_EMC2_FREQ ( IRON_VDE_FREQ * 5 / 2 )
#define IRON_DDR_FREQ ( IRON_EMC2_FREQ / 2 )

#define IRON_GPU_DIVIDER (7)

#define IRON_PLLA0 11289
#define IRON_PLLX0 1000000

#define IRON_BOOT_CLOCK 1312000

#define IRONVOLT_216 800
#define IRONVOLT_503 825
#define IRONVOLT_655 850
#define IRONVOLT_912 900
#define IRONVOLT_1100 1000
#define IRONVOLT_1312 1075
#define IRONVOLT_1408 1250
#define IRONVOLT_1504 1350

#define USE_FAKE_SHMOO

// /mm
#define dirty_background_ratio_default 10
#define vm_dirty_ratio_default 10
#define inactive_file_ratio_default 20
#define vfs_cache_pressure 25
#define default_swappiness 8
#define VM_MAX_READAHEAD 32
#define VM_MIN_READAHEAD 16

// Scheduler
#define sysctl_sched_latency_default 6000000ULL
#define normalized_sysctl_sched_latency_default 6000000ULL
#define sysctl_sched_min_granularity_default 750000ULL
#define normalized_sysctl_sched_min_granularity_default 750000ULL
#define sched_nr_latency_default 8
#define sysctl_sched_wakeup_granularity_default 1000000UL
#define normalized_sysctl_sched_wakeup_granularity_default 1000000UL
#define CFS_BOOST
#define CFS_BOOST_NICE -17

