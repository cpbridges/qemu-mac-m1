#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "s390x-core64.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2014 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.core\">\n"
        "  <reg name=\"pswm\" bitsize=\"64\" type=\"uint64\" group=\"psw\"/>\n"
        "  <reg name=\"pswa\" bitsize=\"64\" type=\"uint64\" group=\"psw\"/>\n"
        "  <reg name=\"r0\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r1\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r2\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r3\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r4\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r5\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r6\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r7\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r8\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r9\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r10\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r11\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r12\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r13\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r14\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "  <reg name=\"r15\" bitsize=\"64\" type=\"uint64\" group=\"general\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.core",
        (const char * const []) {
            [0] =
                "pswm",
            [1] =
                "pswa",
            [2] =
                "r0",
            [3] =
                "r1",
            [4] =
                "r2",
            [5] =
                "r3",
            [6] =
                "r4",
            [7] =
                "r5",
            [8] =
                "r6",
            [9] =
                "r7",
            [10] =
                "r8",
            [11] =
                "r9",
            [12] =
                "r10",
            [13] =
                "r11",
            [14] =
                "r12",
            [15] =
                "r13",
            [16] =
                "r14",
            [17] =
                "r15",
        },
        18,
    },
    {
        "s390-acr.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2014 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.acr\">\n"
        "  <reg name=\"acr0\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr1\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr2\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr3\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr4\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr5\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr6\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr7\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr8\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr9\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr10\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr11\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr12\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr13\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr14\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "  <reg name=\"acr15\" bitsize=\"32\" type=\"uint32\" group=\"access\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.acr",
        (const char * const []) {
            [0] =
                "acr0",
            [1] =
                "acr1",
            [2] =
                "acr2",
            [3] =
                "acr3",
            [4] =
                "acr4",
            [5] =
                "acr5",
            [6] =
                "acr6",
            [7] =
                "acr7",
            [8] =
                "acr8",
            [9] =
                "acr9",
            [10] =
                "acr10",
            [11] =
                "acr11",
            [12] =
                "acr12",
            [13] =
                "acr13",
            [14] =
                "acr14",
            [15] =
                "acr15",
        },
        16,
    },
    {
        "s390-fpr.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2014 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.fpr\">\n"
        "  <reg name=\"fpc\" bitsize=\"32\" type=\"uint32\" group=\"float\"/>\n"
        "  <reg name=\"f0\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f1\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f2\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f3\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f4\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f5\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f6\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f7\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f8\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f9\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f10\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f11\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f12\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f13\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f14\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "  <reg name=\"f15\" bitsize=\"64\" type=\"ieee_double\" group=\"float\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.fpr",
        (const char * const []) {
            [0] =
                "fpc",
            [1] =
                "f0",
            [2] =
                "f1",
            [3] =
                "f2",
            [4] =
                "f3",
            [5] =
                "f4",
            [6] =
                "f5",
            [7] =
                "f6",
            [8] =
                "f7",
            [9] =
                "f8",
            [10] =
                "f9",
            [11] =
                "f10",
            [12] =
                "f11",
            [13] =
                "f12",
            [14] =
                "f13",
            [15] =
                "f14",
            [16] =
                "f15",
        },
        17,
    },
    {
        "s390-vx.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2014 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.vx\">\n"
        "  <vector id=\"v4f\" type=\"ieee_single\" count=\"4\"/>\n"
        "  <vector id=\"v2d\" type=\"ieee_double\" count=\"2\"/>\n"
        "  <vector id=\"v16i8\" type=\"int8\" count=\"16\"/>\n"
        "  <vector id=\"v8i16\" type=\"int16\" count=\"8\"/>\n"
        "  <vector id=\"v4i32\" type=\"int32\" count=\"4\"/>\n"
        "  <vector id=\"v2i64\" type=\"int64\" count=\"2\"/>\n"
        "  <union id=\"vec128\">\n"
        "    <field name=\"v4_float\" type=\"v4f\"/>\n"
        "    <field name=\"v2_double\" type=\"v2d\"/>\n"
        "    <field name=\"v16_int8\" type=\"v16i8\"/>\n"
        "    <field name=\"v8_int16\" type=\"v8i16\"/>\n"
        "    <field name=\"v4_int32\" type=\"v4i32\"/>\n"
        "    <field name=\"v2_int64\" type=\"v2i64\"/>\n"
        "    <field name=\"uint128\" type=\"uint128\"/>\n"
        "  </union>\n"
        "\n"
        "  <reg name=\"v0l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v1l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v2l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v3l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v4l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v5l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v6l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v7l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v8l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v9l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v10l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v11l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v12l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v13l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v14l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "  <reg name=\"v15l\" bitsize=\"64\" type=\"uint64\"/>\n"
        "\n"
        "  <reg name=\"v16\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v17\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v18\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v19\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v20\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v21\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v22\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v23\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v24\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v25\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v26\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v27\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v28\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v29\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v30\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"v31\" bitsize=\"128\" type=\"vec128\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.vx",
        (const char * const []) {
            [0] =
                "v0l",
            [1] =
                "v1l",
            [2] =
                "v2l",
            [3] =
                "v3l",
            [4] =
                "v4l",
            [5] =
                "v5l",
            [6] =
                "v6l",
            [7] =
                "v7l",
            [8] =
                "v8l",
            [9] =
                "v9l",
            [10] =
                "v10l",
            [11] =
                "v11l",
            [12] =
                "v12l",
            [13] =
                "v13l",
            [14] =
                "v14l",
            [15] =
                "v15l",
            [16] =
                "v16",
            [17] =
                "v17",
            [18] =
                "v18",
            [19] =
                "v19",
            [20] =
                "v20",
            [21] =
                "v21",
            [22] =
                "v22",
            [23] =
                "v23",
            [24] =
                "v24",
            [25] =
                "v25",
            [26] =
                "v26",
            [27] =
                "v27",
            [28] =
                "v28",
            [29] =
                "v29",
            [30] =
                "v30",
            [31] =
                "v31",
        },
        32,
    },
    {
        "s390-cr.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright 2015 IBM Corp.\n"
        "\n"
        "     This work is licensed under the terms of the GNU GPL, version 2 or\n"
        "     (at your option) any later version. See the COPYING file in the\n"
        "     top-level directory. -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.cr\">\n"
        "  <reg name=\"cr0\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr1\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr2\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr3\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr4\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr5\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr6\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr7\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr8\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr9\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr10\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr11\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr12\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr13\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr14\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "  <reg name=\"cr15\" bitsize=\"64\" type=\"uint64\" group=\"control\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.cr",
        (const char * const []) {
            [0] =
                "cr0",
            [1] =
                "cr1",
            [2] =
                "cr2",
            [3] =
                "cr3",
            [4] =
                "cr4",
            [5] =
                "cr5",
            [6] =
                "cr6",
            [7] =
                "cr7",
            [8] =
                "cr8",
            [9] =
                "cr9",
            [10] =
                "cr10",
            [11] =
                "cr11",
            [12] =
                "cr12",
            [13] =
                "cr13",
            [14] =
                "cr14",
            [15] =
                "cr15",
        },
        16,
    },
    {
        "s390-virt.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright 2015 IBM Corp.\n"
        "\n"
        "     This work is licensed under the terms of the GNU GPL, version 2 or\n"
        "     (at your option) any later version. See the COPYING file in the\n"
        "     top-level directory. -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.virt\">\n"
        "  <reg name=\"ckc\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"cputm\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"last_break\" bitsize=\"64\" type=\"code_ptr\" group=\"system\"/>\n"
        "  <reg name=\"prefix\" bitsize=\"64\" type=\"data_ptr\" group=\"system\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.virt",
        (const char * const []) {
            [0] =
                "ckc",
            [1] =
                "cputm",
            [2] =
                "last_break",
            [3] =
                "prefix",
        },
        4,
    },
    {
        "s390-virt-kvm.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright 2023 IBM Corp.\n"
        "\n"
        "     This work is licensed under the terms of the GNU GPL, version 2 or\n"
        "     (at your option) any later version. See the COPYING file in the\n"
        "     top-level directory. -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.virt.kvm\">\n"
        "  <reg name=\"pp\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"pfault_token\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"pfault_select\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"pfault_compare\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.virt.kvm",
        (const char * const []) {
            [0] =
                "pp",
            [1] =
                "pfault_token",
            [2] =
                "pfault_select",
            [3] =
                "pfault_compare",
        },
        4,
    },
    {
        "s390-gs.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright 2017 IBM Corp.\n"
        "\n"
        "     This work is licensed under the terms of the GNU GPL, version 2 or\n"
        "     (at your option) any later version. See the COPYING file in the\n"
        "     top-level directory. -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.s390.gs\">\n"
        "  <reg name=\"gs_reserved\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"gsd\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"gssm\" bitsize=\"64\" type=\"uint64\" group=\"system\"/>\n"
        "  <reg name=\"gsepla\" bitsize=\"64\" type=\"data_ptr\" group=\"system\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.s390.gs",
        (const char * const []) {
            [0] =
                "gs_reserved",
            [1] =
                "gsd",
            [2] =
                "gssm",
            [3] =
                "gsepla",
        },
        4,
    },
    { NULL }
};
