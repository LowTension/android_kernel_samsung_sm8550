// SPDX-License-Identifier: GPL-2.0-only
/* vendor_hook.c
 *
 * Copyright 2022 Google LLC
 */
#ifndef __GENKSYMS__
#include "sched.h"
#include "pelt.h"
#include "smp.h"
#else
/*
 * These includes are necessary to preserve the KMI for the
 * scheduler-related vendor hooks.
 */
#include <trace/hooks/gic.h>
#include <trace/hooks/mm.h>
#include <trace/hooks/ufshcd.h>
#include <trace/hooks/block.h>
#include <trace/hooks/pm_domain.h>
#include <trace/hooks/remoteproc.h>
#include <trace/hooks/power.h>
#include <trace/hooks/fault.h>
#include <trace/hooks/traps.h>
#include <trace/hooks/fips140.h>
#include <trace/hooks/thermal.h>
#include <trace/hooks/cfg80211.h>
#endif

#define CREATE_TRACE_POINTS
#include <trace/hooks/vendor_hooks.h>
#include <linux/tracepoint.h>
#include <trace/hooks/sched.h>
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_select_task_rq_fair);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_select_task_rq_rt);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_select_task_rq_dl);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_select_fallback_rq);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_scheduler_tick);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_enqueue_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_dequeue_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_can_migrate_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_find_lowest_rq);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_prepare_prio_fork);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_finish_prio_fork);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_rtmutex_prepare_setprio);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_rto_next_cpu);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_is_cpu_allowed);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_get_nohz_timer_target);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_user_nice);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_setscheduler);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_find_busiest_group);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_dump_throttled_rt_tasks);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_jiffies_update);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_newidle_balance);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_nohz_balancer_kick);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_rebalance_domains);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_find_busiest_queue);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_migrate_queued_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_find_energy_efficient_cpu);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_sugov_sched_attr);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_iowait);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_sugov_update);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_cpu_overutilized);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_setaffinity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_getaffinity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_update_cpus_allowed);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_task_cpu);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_try_to_wake_up);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_try_to_wake_up_success);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_fork);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_wake_up_new_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_new_task_stats);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_flush_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_tick_entry);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_schedule);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_cpu_starting);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_cpu_dying);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_account_irq);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_account_irq_start);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_account_irq_end);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_place_entity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_build_perf_domains);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_update_cpu_capacity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_update_misfit_status);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_fork_init);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_ttwu_cond);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_schedule_bug);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_exec);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_map_util_freq);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_map_util_freq_new);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_em_cpu_energy);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_build_sched_domains);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_check_preempt_tick);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_check_preempt_wakeup_ignore);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_replace_next_task_fair);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_sched_balance_rt);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_pick_next_entity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_check_preempt_wakeup);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_cpus_allowed_ptr_locked);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_cpus_allowed_by_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_do_sched_yield);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_free_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_irqtime_account_process_tick);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_sched_pelt_multiplier);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_uclamp_eff_get);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_after_enqueue_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_after_dequeue_task);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_enqueue_entity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_dequeue_entity);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_entity_tick);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_enqueue_task_fair);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_dequeue_task_fair);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_em_dev_register_pd);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_sched_stat_runtime_rt);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_post_init_entity_util_avg);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_find_new_ilb);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_util_est_update);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_setscheduler_uclamp);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_do_wake_up_sync);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_set_wake_flags);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_effective_cpu_util);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_force_compatible_pre);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_force_compatible_post);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_dup_task_struct);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_account_task_time);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_set_cpus_allowed_comm);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_sched_setaffinity_early);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_rvh_update_rt_rq_load_avg);
EXPORT_TRACEPOINT_SYMBOL_GPL(android_vh_mmput);
