/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-root.h"

uint16_t _TRACE_BREAKPOINT_INSERT_DSTATE;
uint16_t _TRACE_BREAKPOINT_REMOVE_DSTATE;
uint16_t _TRACE_BREAKPOINT_SINGLESTEP_DSTATE;
uint16_t _TRACE_DMA_BLK_IO_DSTATE;
uint16_t _TRACE_DMA_AIO_CANCEL_DSTATE;
uint16_t _TRACE_DMA_COMPLETE_DSTATE;
uint16_t _TRACE_DMA_BLK_CB_DSTATE;
uint16_t _TRACE_DMA_MAP_WAIT_DSTATE;
uint16_t _TRACE_JOB_STATE_TRANSITION_DSTATE;
uint16_t _TRACE_JOB_APPLY_VERB_DSTATE;
uint16_t _TRACE_JOB_COMPLETED_DSTATE;
uint16_t _TRACE_QMP_JOB_CANCEL_DSTATE;
uint16_t _TRACE_QMP_JOB_PAUSE_DSTATE;
uint16_t _TRACE_QMP_JOB_RESUME_DSTATE;
uint16_t _TRACE_QMP_JOB_COMPLETE_DSTATE;
uint16_t _TRACE_QMP_JOB_FINALIZE_DSTATE;
uint16_t _TRACE_QMP_JOB_DISMISS_DSTATE;
TraceEvent _TRACE_BREAKPOINT_INSERT_EVENT = {
    .id = 0,
    .name = "breakpoint_insert",
    .sstate = TRACE_BREAKPOINT_INSERT_ENABLED,
    .dstate = &_TRACE_BREAKPOINT_INSERT_DSTATE 
};
TraceEvent _TRACE_BREAKPOINT_REMOVE_EVENT = {
    .id = 0,
    .name = "breakpoint_remove",
    .sstate = TRACE_BREAKPOINT_REMOVE_ENABLED,
    .dstate = &_TRACE_BREAKPOINT_REMOVE_DSTATE 
};
TraceEvent _TRACE_BREAKPOINT_SINGLESTEP_EVENT = {
    .id = 0,
    .name = "breakpoint_singlestep",
    .sstate = TRACE_BREAKPOINT_SINGLESTEP_ENABLED,
    .dstate = &_TRACE_BREAKPOINT_SINGLESTEP_DSTATE 
};
TraceEvent _TRACE_DMA_BLK_IO_EVENT = {
    .id = 0,
    .name = "dma_blk_io",
    .sstate = TRACE_DMA_BLK_IO_ENABLED,
    .dstate = &_TRACE_DMA_BLK_IO_DSTATE 
};
TraceEvent _TRACE_DMA_AIO_CANCEL_EVENT = {
    .id = 0,
    .name = "dma_aio_cancel",
    .sstate = TRACE_DMA_AIO_CANCEL_ENABLED,
    .dstate = &_TRACE_DMA_AIO_CANCEL_DSTATE 
};
TraceEvent _TRACE_DMA_COMPLETE_EVENT = {
    .id = 0,
    .name = "dma_complete",
    .sstate = TRACE_DMA_COMPLETE_ENABLED,
    .dstate = &_TRACE_DMA_COMPLETE_DSTATE 
};
TraceEvent _TRACE_DMA_BLK_CB_EVENT = {
    .id = 0,
    .name = "dma_blk_cb",
    .sstate = TRACE_DMA_BLK_CB_ENABLED,
    .dstate = &_TRACE_DMA_BLK_CB_DSTATE 
};
TraceEvent _TRACE_DMA_MAP_WAIT_EVENT = {
    .id = 0,
    .name = "dma_map_wait",
    .sstate = TRACE_DMA_MAP_WAIT_ENABLED,
    .dstate = &_TRACE_DMA_MAP_WAIT_DSTATE 
};
TraceEvent _TRACE_JOB_STATE_TRANSITION_EVENT = {
    .id = 0,
    .name = "job_state_transition",
    .sstate = TRACE_JOB_STATE_TRANSITION_ENABLED,
    .dstate = &_TRACE_JOB_STATE_TRANSITION_DSTATE 
};
TraceEvent _TRACE_JOB_APPLY_VERB_EVENT = {
    .id = 0,
    .name = "job_apply_verb",
    .sstate = TRACE_JOB_APPLY_VERB_ENABLED,
    .dstate = &_TRACE_JOB_APPLY_VERB_DSTATE 
};
TraceEvent _TRACE_JOB_COMPLETED_EVENT = {
    .id = 0,
    .name = "job_completed",
    .sstate = TRACE_JOB_COMPLETED_ENABLED,
    .dstate = &_TRACE_JOB_COMPLETED_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_CANCEL_EVENT = {
    .id = 0,
    .name = "qmp_job_cancel",
    .sstate = TRACE_QMP_JOB_CANCEL_ENABLED,
    .dstate = &_TRACE_QMP_JOB_CANCEL_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_PAUSE_EVENT = {
    .id = 0,
    .name = "qmp_job_pause",
    .sstate = TRACE_QMP_JOB_PAUSE_ENABLED,
    .dstate = &_TRACE_QMP_JOB_PAUSE_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_RESUME_EVENT = {
    .id = 0,
    .name = "qmp_job_resume",
    .sstate = TRACE_QMP_JOB_RESUME_ENABLED,
    .dstate = &_TRACE_QMP_JOB_RESUME_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_COMPLETE_EVENT = {
    .id = 0,
    .name = "qmp_job_complete",
    .sstate = TRACE_QMP_JOB_COMPLETE_ENABLED,
    .dstate = &_TRACE_QMP_JOB_COMPLETE_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_FINALIZE_EVENT = {
    .id = 0,
    .name = "qmp_job_finalize",
    .sstate = TRACE_QMP_JOB_FINALIZE_ENABLED,
    .dstate = &_TRACE_QMP_JOB_FINALIZE_DSTATE 
};
TraceEvent _TRACE_QMP_JOB_DISMISS_EVENT = {
    .id = 0,
    .name = "qmp_job_dismiss",
    .sstate = TRACE_QMP_JOB_DISMISS_ENABLED,
    .dstate = &_TRACE_QMP_JOB_DISMISS_DSTATE 
};
TraceEvent *root_trace_events[] = {
    &_TRACE_BREAKPOINT_INSERT_EVENT,
    &_TRACE_BREAKPOINT_REMOVE_EVENT,
    &_TRACE_BREAKPOINT_SINGLESTEP_EVENT,
    &_TRACE_DMA_BLK_IO_EVENT,
    &_TRACE_DMA_AIO_CANCEL_EVENT,
    &_TRACE_DMA_COMPLETE_EVENT,
    &_TRACE_DMA_BLK_CB_EVENT,
    &_TRACE_DMA_MAP_WAIT_EVENT,
    &_TRACE_JOB_STATE_TRANSITION_EVENT,
    &_TRACE_JOB_APPLY_VERB_EVENT,
    &_TRACE_JOB_COMPLETED_EVENT,
    &_TRACE_QMP_JOB_CANCEL_EVENT,
    &_TRACE_QMP_JOB_PAUSE_EVENT,
    &_TRACE_QMP_JOB_RESUME_EVENT,
    &_TRACE_QMP_JOB_COMPLETE_EVENT,
    &_TRACE_QMP_JOB_FINALIZE_EVENT,
    &_TRACE_QMP_JOB_DISMISS_EVENT,
  NULL,
};

static void trace_root_register_events(void)
{
    trace_event_register_group(root_trace_events);
}
trace_init(trace_root_register_events)
