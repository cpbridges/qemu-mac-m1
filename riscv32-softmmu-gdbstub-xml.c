#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "riscv-32bit-cpu.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.riscv.cpu\">\n"
        "  <reg name=\"zero\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"ra\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"sp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"gp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"tp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"t0\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t1\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t2\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"fp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"s1\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a0\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a1\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a2\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a3\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a4\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a5\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a6\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"a7\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s2\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s3\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s4\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s5\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s6\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s7\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s8\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s9\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s10\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"s11\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t3\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t4\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t5\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"t6\" bitsize=\"32\" type=\"int\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.riscv.cpu",
        (const char * const []) {
            [0] =
                "zero",
            [1] =
                "ra",
            [2] =
                "sp",
            [3] =
                "gp",
            [4] =
                "tp",
            [5] =
                "t0",
            [6] =
                "t1",
            [7] =
                "t2",
            [8] =
                "fp",
            [9] =
                "s1",
            [10] =
                "a0",
            [11] =
                "a1",
            [12] =
                "a2",
            [13] =
                "a3",
            [14] =
                "a4",
            [15] =
                "a5",
            [16] =
                "a6",
            [17] =
                "a7",
            [18] =
                "s2",
            [19] =
                "s3",
            [20] =
                "s4",
            [21] =
                "s5",
            [22] =
                "s6",
            [23] =
                "s7",
            [24] =
                "s8",
            [25] =
                "s9",
            [26] =
                "s10",
            [27] =
                "s11",
            [28] =
                "t3",
            [29] =
                "t4",
            [30] =
                "t5",
            [31] =
                "t6",
            [32] =
                "pc",
        },
        33,
    },
    {
        "riscv-32bit-fpu.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.riscv.fpu\">\n"
        "  <reg name=\"ft0\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft1\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft2\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft3\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft4\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft5\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft6\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft7\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs0\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs1\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa0\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa1\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa2\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa3\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa4\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa5\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa6\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fa7\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs2\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs3\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs4\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs5\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs6\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs7\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs8\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs9\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs10\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"fs11\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft8\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft9\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft10\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "  <reg name=\"ft11\" bitsize=\"32\" type=\"ieee_single\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.riscv.fpu",
        (const char * const []) {
            [0] =
                "ft0",
            [1] =
                "ft1",
            [2] =
                "ft2",
            [3] =
                "ft3",
            [4] =
                "ft4",
            [5] =
                "ft5",
            [6] =
                "ft6",
            [7] =
                "ft7",
            [8] =
                "fs0",
            [9] =
                "fs1",
            [10] =
                "fa0",
            [11] =
                "fa1",
            [12] =
                "fa2",
            [13] =
                "fa3",
            [14] =
                "fa4",
            [15] =
                "fa5",
            [16] =
                "fa6",
            [17] =
                "fa7",
            [18] =
                "fs2",
            [19] =
                "fs3",
            [20] =
                "fs4",
            [21] =
                "fs5",
            [22] =
                "fs6",
            [23] =
                "fs7",
            [24] =
                "fs8",
            [25] =
                "fs9",
            [26] =
                "fs10",
            [27] =
                "fs11",
            [28] =
                "ft8",
            [29] =
                "ft9",
            [30] =
                "ft10",
            [31] =
                "ft11",
        },
        32,
    },
    {
        "riscv-64bit-fpu.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.riscv.fpu\">\n"
        "\n"
        "  <union id=\"riscv_double\">\n"
        "    <field name=\"float\" type=\"ieee_single\"/>\n"
        "    <field name=\"double\" type=\"ieee_double\"/>\n"
        "  </union>\n"
        "\n"
        "  <reg name=\"ft0\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft1\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft2\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft3\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft4\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft5\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft6\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft7\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs0\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs1\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa0\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa1\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa2\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa3\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa4\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa5\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa6\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fa7\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs2\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs3\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs4\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs5\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs6\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs7\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs8\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs9\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs10\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"fs11\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft8\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft9\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft10\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "  <reg name=\"ft11\" bitsize=\"64\" type=\"riscv_double\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.riscv.fpu",
        (const char * const []) {
            [0] =
                "ft0",
            [1] =
                "ft1",
            [2] =
                "ft2",
            [3] =
                "ft3",
            [4] =
                "ft4",
            [5] =
                "ft5",
            [6] =
                "ft6",
            [7] =
                "ft7",
            [8] =
                "fs0",
            [9] =
                "fs1",
            [10] =
                "fa0",
            [11] =
                "fa1",
            [12] =
                "fa2",
            [13] =
                "fa3",
            [14] =
                "fa4",
            [15] =
                "fa5",
            [16] =
                "fa6",
            [17] =
                "fa7",
            [18] =
                "fs2",
            [19] =
                "fs3",
            [20] =
                "fs4",
            [21] =
                "fs5",
            [22] =
                "fs6",
            [23] =
                "fs7",
            [24] =
                "fs8",
            [25] =
                "fs9",
            [26] =
                "fs10",
            [27] =
                "fs11",
            [28] =
                "ft8",
            [29] =
                "ft9",
            [30] =
                "ft10",
            [31] =
                "ft11",
        },
        32,
    },
    {
        "riscv-32bit-virtual.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.riscv.virtual\">\n"
        "  <reg name=\"priv\" bitsize=\"32\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.riscv.virtual",
        (const char * const []) {
            [0] =
                "priv",
        },
        1,
    },
    { NULL }
};
