#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "avr-cpu.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2018-2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!-- Register numbers are hard-coded in order to maintain backward\n"
        "     compatibility with older versions of tools that didn't use xml\n"
        "     register descriptions.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.riscv.cpu\">\n"
        "  <reg name=\"r0\" bitsize=\"8\" type=\"int\" regnum=\"0\"/>\n"
        "  <reg name=\"r1\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r2\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r3\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r4\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r5\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r6\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r7\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r8\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r9\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r10\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r11\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r12\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r13\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r14\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r15\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r16\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r17\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r18\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r19\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r20\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r21\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r22\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r23\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r24\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r25\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r26\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r27\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r28\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r29\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r30\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"r31\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"sreg\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"sp\" bitsize=\"8\" type=\"int\"/>\n"
        "  <reg name=\"pc\" bitsize=\"8\" type=\"int\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.riscv.cpu",
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
                "sreg",
            [33] =
                "sp",
            [34] =
                "pc",
        },
        35,
    },
    { NULL }
};
