#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "cf-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.coldfire.core\">\n"
        "  <reg name=\"d0\" bitsize=\"32\"/>\n"
        "  <reg name=\"d1\" bitsize=\"32\"/>\n"
        "  <reg name=\"d2\" bitsize=\"32\"/>\n"
        "  <reg name=\"d3\" bitsize=\"32\"/>\n"
        "  <reg name=\"d4\" bitsize=\"32\"/>\n"
        "  <reg name=\"d5\" bitsize=\"32\"/>\n"
        "  <reg name=\"d6\" bitsize=\"32\"/>\n"
        "  <reg name=\"d7\" bitsize=\"32\"/>\n"
        "  <reg name=\"a0\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a1\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a2\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a3\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a4\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a5\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"fp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"sp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "\n"
        "  <reg name=\"ps\" bitsize=\"32\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "\n"
        "</feature>\n",
        "org.gnu.gdb.coldfire.core",
        (const char * const []) {
            [0] =
                "d0",
            [1] =
                "d1",
            [2] =
                "d2",
            [3] =
                "d3",
            [4] =
                "d4",
            [5] =
                "d5",
            [6] =
                "d6",
            [7] =
                "d7",
            [8] =
                "a0",
            [9] =
                "a1",
            [10] =
                "a2",
            [11] =
                "a3",
            [12] =
                "a4",
            [13] =
                "a5",
            [14] =
                "fp",
            [15] =
                "sp",
            [16] =
                "ps",
            [17] =
                "pc",
        },
        18,
    },
    {
        "cf-fp.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.coldfire.fp\">\n"
        "  <reg name=\"fp0\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp1\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp2\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp3\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp4\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp5\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp6\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp7\" bitsize=\"64\" type=\"float\" group=\"float\"/>\n"
        "\n"
        "  \n"
        "  <reg name=\"fpcontrol\" bitsize=\"32\" group=\"float\"/>\n"
        "  <reg name=\"fpstatus\" bitsize=\"32\" group=\"float\"/>,\n"
        "  <reg name=\"fpiaddr\" bitsize=\"32\" type=\"code_ptr\" group=\"float\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.coldfire.fp",
        (const char * const []) {
            [0] =
                "fp0",
            [1] =
                "fp1",
            [2] =
                "fp2",
            [3] =
                "fp3",
            [4] =
                "fp4",
            [5] =
                "fp5",
            [6] =
                "fp6",
            [7] =
                "fp7",
            [8] =
                "fpcontrol",
            [9] =
                "fpstatus",
            [10] =
                "fpiaddr",
        },
        11,
    },
    {
        "m68k-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.m68k.core\">\n"
        "  <reg name=\"d0\" bitsize=\"32\"/>\n"
        "  <reg name=\"d1\" bitsize=\"32\"/>\n"
        "  <reg name=\"d2\" bitsize=\"32\"/>\n"
        "  <reg name=\"d3\" bitsize=\"32\"/>\n"
        "  <reg name=\"d4\" bitsize=\"32\"/>\n"
        "  <reg name=\"d5\" bitsize=\"32\"/>\n"
        "  <reg name=\"d6\" bitsize=\"32\"/>\n"
        "  <reg name=\"d7\" bitsize=\"32\"/>\n"
        "  <reg name=\"a0\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a1\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a2\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a3\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a4\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"a5\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"fp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"sp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "\n"
        "  <reg name=\"ps\" bitsize=\"32\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "\n"
        "</feature>\n",
        "org.gnu.gdb.m68k.core",
        (const char * const []) {
            [0] =
                "d0",
            [1] =
                "d1",
            [2] =
                "d2",
            [3] =
                "d3",
            [4] =
                "d4",
            [5] =
                "d5",
            [6] =
                "d6",
            [7] =
                "d7",
            [8] =
                "a0",
            [9] =
                "a1",
            [10] =
                "a2",
            [11] =
                "a3",
            [12] =
                "a4",
            [13] =
                "a5",
            [14] =
                "fp",
            [15] =
                "sp",
            [16] =
                "ps",
            [17] =
                "pc",
        },
        18,
    },
    {
        "m68k-fp.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.coldfire.fp\">\n"
        "  <reg name=\"fp0\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp1\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp2\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp3\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp4\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp5\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp6\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "  <reg name=\"fp7\" bitsize=\"96\" type=\"float\" group=\"float\"/>\n"
        "\n"
        "  <reg name=\"fpcontrol\" bitsize=\"32\" group=\"float\"/>\n"
        "  <reg name=\"fpstatus\" bitsize=\"32\" group=\"float\"/>,\n"
        "  <reg name=\"fpiaddr\" bitsize=\"32\" type=\"code_ptr\" group=\"float\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.coldfire.fp",
        (const char * const []) {
            [0] =
                "fp0",
            [1] =
                "fp1",
            [2] =
                "fp2",
            [3] =
                "fp3",
            [4] =
                "fp4",
            [5] =
                "fp5",
            [6] =
                "fp6",
            [7] =
                "fp7",
            [8] =
                "fpcontrol",
            [9] =
                "fpstatus",
            [10] =
                "fpiaddr",
        },
        11,
    },
    { NULL }
};
