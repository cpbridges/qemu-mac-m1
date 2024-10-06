#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "rx-core.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2019 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!DOCTYPE feature SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.rx.core\">\n"
        "  <reg name=\"r0\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"r1\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r2\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r3\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r4\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r5\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r6\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r7\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r8\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r9\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r10\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r11\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r12\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r13\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r14\" bitsize=\"32\" type=\"uint32\"/>\n"
        "  <reg name=\"r15\" bitsize=\"32\" type=\"uint32\"/>\n"
        "\n"
        "  <flags id=\"psw_flags\" size=\"4\">\n"
        "    <field name=\"C\" start=\"0\" end=\"0\"/>\n"
        "    <field name=\"Z\" start=\"1\" end=\"1\"/>\n"
        "    <field name=\"S\" start=\"2\" end=\"2\"/>\n"
        "    <field name=\"O\" start=\"3\" end=\"3\"/>\n"
        "    <field name=\"I\" start=\"16\" end=\"16\"/>\n"
        "    <field name=\"U\" start=\"17\" end=\"17\"/>\n"
        "    <field name=\"PM\" start=\"20\" end=\"20\"/>\n"
        "    <field name=\"IPL\" start=\"24\" end=\"27\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"fpsw_flags\" size=\"4\">\n"
        "    <field name=\"RM\" start=\"0\" end=\"1\"/>\n"
        "    <field name=\"CV\" start=\"2\" end=\"2\"/>\n"
        "    <field name=\"CO\" start=\"3\" end=\"3\"/>\n"
        "    <field name=\"CZ\" start=\"4\" end=\"4\"/>\n"
        "    <field name=\"CU\" start=\"5\" end=\"5\"/>\n"
        "    <field name=\"CX\" start=\"6\" end=\"6\"/>\n"
        "    <field name=\"CE\" start=\"7\" end=\"7\"/>\n"
        "    <field name=\"DN\" start=\"8\" end=\"8\"/>\n"
        "    <field name=\"EV\" start=\"10\" end=\"10\"/>\n"
        "    <field name=\"EO\" start=\"11\" end=\"11\"/>\n"
        "    <field name=\"EZ\" start=\"12\" end=\"12\"/>\n"
        "    <field name=\"EU\" start=\"13\" end=\"13\"/>\n"
        "    <field name=\"EX\" start=\"14\" end=\"14\"/>\n"
        "    <field name=\"FV\" start=\"26\" end=\"26\"/>\n"
        "    <field name=\"FO\" start=\"27\" end=\"27\"/>\n"
        "    <field name=\"FZ\" start=\"28\" end=\"28\"/>\n"
        "    <field name=\"FU\" start=\"29\" end=\"29\"/>\n"
        "    <field name=\"FX\" start=\"30\" end=\"30\"/>\n"
        "    <field name=\"FS\" start=\"31\" end=\"31\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"usp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"isp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"psw\" bitsize=\"32\" type=\"psw_flags\"/>\n"
        "  <reg name=\"pc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"intb\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"bpsw\" bitsize=\"32\" type=\"psw_flags\"/>\n"
        "  <reg name=\"bpc\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"fintv\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"fpsw\" bitsize=\"32\" type=\"fpsw_flags\"/>\n"
        "  <reg name=\"acc\" bitsize=\"64\" type=\"uint64\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.rx.core",
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
                "usp",
            [17] =
                "isp",
            [18] =
                "psw",
            [19] =
                "pc",
            [20] =
                "intb",
            [21] =
                "bpsw",
            [22] =
                "bpc",
            [23] =
                "fintv",
            [24] =
                "fpsw",
            [25] =
                "acc",
        },
        26,
    },
    { NULL }
};
