/* AUTOMATICALLY GENERATED by qapi-gen.py DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_VISIT_MACHINE_COMMON_H
#define QAPI_VISIT_MACHINE_COMMON_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-machine-common.h"


bool visit_type_S390CpuEntitlement(Visitor *v, const char *name,
                 S390CpuEntitlement *obj, Error **errp);

#endif /* QAPI_VISIT_MACHINE_COMMON_H */
