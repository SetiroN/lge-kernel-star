/* ironkrnL Tweak File */

#define RAMHACK64
#define USE_FAKE_SHMOO

// Overclock
#define IRON_AVP_FREQ 240000
#define IRON_VDE_FREQ IRON_AVP_FREQ
#define IRON_SYSTEM_FREQ IRON_AVP_FREQ
#define IRON_EMC_VOLT 1200
#define IRON_GPU_FREQ 300000
#define IRON_EMC2_FREQ ( IRON_VDE_FREQ * 5 / 2 )
#define IRON_DDR_FREQ ( IRON_EMC2_FREQ / 2 )

#define IRON_GPU_DIVIDER (7)

#define IRON_PLLA0 11289
#define IRON_PLLX0 1000000

#define IRON_BOOT_CLOCK 1312000

#define IRONVOLT_216 800
#define IRONVOLT_503 800
#define IRONVOLT_655 825
#define IRONVOLT_912 850
#define IRONVOLT_1100 950
#define IRONVOLT_1312 1075
#define IRONVOLT_1408 1175
#define IRONVOLT_1504 1275

#define max_screenoff_frequency 503000

// /mm
#define vm_dirty_ratio_default 50
#define dirty_background_ratio_default 30
#define inactive_file_ratio_default 20
#define vfs_cache_pressure 10000
#define default_swappiness 99
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

