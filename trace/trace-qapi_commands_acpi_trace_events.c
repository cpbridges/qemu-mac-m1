/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_acpi_trace_events.h"

uint16_t _TRACE_QMP_ENTER_QUERY_ACPI_OSPM_STATUS_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_ACPI_OSPM_STATUS_DSTATE;
TraceEvent _TRACE_QMP_ENTER_QUERY_ACPI_OSPM_STATUS_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_acpi_ospm_status",
    .sstate = TRACE_QMP_ENTER_QUERY_ACPI_OSPM_STATUS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_ACPI_OSPM_STATUS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_ACPI_OSPM_STATUS_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_acpi_ospm_status",
    .sstate = TRACE_QMP_EXIT_QUERY_ACPI_OSPM_STATUS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_ACPI_OSPM_STATUS_DSTATE 
};
TraceEvent *qapi_commands_acpi_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_QUERY_ACPI_OSPM_STATUS_EVENT,
    &_TRACE_QMP_EXIT_QUERY_ACPI_OSPM_STATUS_EVENT,
  NULL,
};

static void trace_qapi_commands_acpi_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_acpi_trace_events_trace_events);
}
trace_init(trace_qapi_commands_acpi_trace_events_register_events)
