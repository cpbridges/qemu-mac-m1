#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "microblaze-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.microblaze.core\">\n"
        "  <reg name=\"r0\" bitsize=\"32\" regnum=\"0\"/>\n"
        "  <reg name=\"r1\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"r2\" bitsize=\"32\"/>\n"
        "  <reg name=\"r3\" bitsize=\"32\"/>\n"
        "  <reg name=\"r4\" bitsize=\"32\"/>\n"
        "  <reg name=\"r5\" bitsize=\"32\"/>\n"
        "  <reg name=\"r6\" bitsize=\"32\"/>\n"
        "  <reg name=\"r7\" bitsize=\"32\"/>\n"
        "  <reg name=\"r8\" bitsize=\"32\"/>\n"
        "  <reg name=\"r9\" bitsize=\"32\"/>\n"
        "  <reg name=\"r10\" bitsize=\"32\"/>\n"
        "  <reg name=\"r11\" bitsize=\"32\"/>\n"
        "  <reg name=\"r12\" bitsize=\"32\"/>\n"
        "  <reg name=\"r13\" bitsize=\"32\"/>\n"
        "  <reg name=\"r14\" bitsize=\"32\"/>\n"
        "  <reg name=\"r15\" bitsize=\"32\"/>\n"
        "  <reg name=\"r16\" bitsize=\"32\"/>\n"
        "  <reg name=\"r17\" bitsize=\"32\"/>\n"
        "  <reg name=\"r18\" bitsize=\"32\"/>\n"
        "  <reg name=\"r19\" bitsize=\"32\"/>\n"
        "  <reg name=\"r20\" bitsize=\"32\"/>\n"
        "  <reg name=\"r21\" bitsize=\"32\"/>\n"
        "  <reg name=\"r22\" bitsize=\"32\"/>\n"
        "  <reg name=\"r23\" bitsize=\"32\"/>\n"
        "  <reg name=\"r24\" bitsize=\"32\"/>\n"
        "  <reg name=\"r25\" bitsize=\"32\"/>\n"
        "  <reg name=\"r26\" bitsize=\"32\"/>\n"
        "  <reg name=\"r27\" bitsize=\"32\"/>\n"
        "  <reg name=\"r28\" bitsize=\"32\"/>\n"
        "  <reg name=\"r29\" bitsize=\"32\"/>\n"
        "  <reg name=\"r30\" bitsize=\"32\"/>\n"
        "  <reg name=\"r31\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"rmsr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rear\" bitsize=\"32\"/>\n"
        "  <reg name=\"resr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rfsr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rbtr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr0\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr1\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr2\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr3\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr4\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr5\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr6\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr7\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr8\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr9\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr10\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpvr11\" bitsize=\"32\"/>\n"
        "  <reg name=\"redr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rpid\" bitsize=\"32\"/>\n"
        "  <reg name=\"rzpr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rtlbx\" bitsize=\"32\"/>\n"
        "  <reg name=\"rtlbsx\" bitsize=\"32\"/>\n"
        "  <reg name=\"rtlblo\" bitsize=\"32\"/>\n"
        "  <reg name=\"rtlbhi\" bitsize=\"32\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.microblaze.core",
        (const char * const []) {
            [0] =
                "r0",
            [1] =
                "r1",
            [2] =
                "r2",
            [3] =
                "r3",
            [4] =
                "r4",
            [5] =
                "r5",
            [6] =
                "r6",
            [7] =
                "r7",
            [8] =
                "r8",
            [9] =
                "r9",
            [10] =
                "r10",
            [11] =
                "r11",
            [12] =
                "r12",
            [13] =
                "r13",
            [14] =
                "r14",
            [15] =
                "r15",
            [16] =
                "r16",
            [17] =
                "r17",
            [18] =
                "r18",
            [19] =
                "r19",
            [20] =
                "r20",
            [21] =
                "r21",
            [22] =
                "r22",
            [23] =
                "r23",
            [24] =
                "r24",
            [25] =
                "r25",
            [26] =
                "r26",
            [27] =
                "r27",
            [28] =
                "r28",
            [29] =
                "r29",
            [30] =
                "r30",
            [31] =
                "r31",
            [32] =
                "rpc",
            [33] =
                "rmsr",
            [34] =
                "rear",
            [35] =
                "resr",
            [36] =
                "rfsr",
            [37] =
                "rbtr",
            [38] =
                "rpvr0",
            [39] =
                "rpvr1",
            [40] =
                "rpvr2",
            [41] =
                "rpvr3",
            [42] =
                "rpvr4",
            [43] =
                "rpvr5",
            [44] =
                "rpvr6",
            [45] =
                "rpvr7",
            [46] =
                "rpvr8",
            [47] =
                "rpvr9",
            [48] =
                "rpvr10",
            [49] =
                "rpvr11",
            [50] =
                "redr",
            [51] =
                "rpid",
            [52] =
                "rzpr",
            [53] =
                "rtlbx",
            [54] =
                "rtlbsx",
            [55] =
                "rtlblo",
            [56] =
                "rtlbhi",
        },
        57,
    },
    {
        "microblaze-stack-protect.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2008 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.microblaze.stack-protect\">\n"
        "  <reg name=\"rslr\" bitsize=\"32\"/>\n"
        "  <reg name=\"rshr\" bitsize=\"32\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.microblaze.stack-protect",
        (const char * const []) {
            [0] =
                "rslr",
            [1] =
                "rshr",
        },
        2,
    },
    { NULL }
};
