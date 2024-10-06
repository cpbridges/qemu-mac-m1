#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "i386-64bit.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2017 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!-- x86_64 64bit -->\n"
        "\n"
        "<!DOCTYPE target SYSTEM \"gdb-target.dtd\">\n"
        "\n"
        "<feature name=\"org.gnu.gdb.i386.core\">\n"
        "  <flags id=\"x64_eflags\" size=\"4\">\n"
        "\011<field name=\"\" start=\"22\" end=\"31\"/>\n"
        "\011<field name=\"ID\" start=\"21\" end=\"21\"/>\n"
        "\011<field name=\"VIP\" start=\"20\" end=\"20\"/>\n"
        "\011<field name=\"VIF\" start=\"19\" end=\"19\"/>\n"
        "\011<field name=\"AC\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"VM\" start=\"17\" end=\"17\"/>\n"
        "\011<field name=\"RF\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"\" start=\"15\" end=\"15\"/>\n"
        "\011<field name=\"NT\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"IOPL\" start=\"12\" end=\"13\"/>\n"
        "\011<field name=\"OF\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"DF\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"IF\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"TF\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"SF\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"ZF\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"AF\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"PF\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"CF\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <!-- General registers -->\n"
        "\n"
        "  <reg name=\"rax\" bitsize=\"64\" type=\"int64\" regnum=\"0\"/>\n"
        "  <reg name=\"rbx\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"rcx\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"rdx\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"rsi\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"rdi\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"rbp\" bitsize=\"64\" type=\"data_ptr\"/>\n"
        "  <reg name=\"rsp\" bitsize=\"64\" type=\"data_ptr\"/>\n"
        "  <reg name=\"r8\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r9\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r10\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r11\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r12\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r13\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r14\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"r15\" bitsize=\"64\" type=\"int64\"/>\n"
        "\n"
        "  <reg name=\"rip\" bitsize=\"64\" type=\"code_ptr\"/>\n"
        "  <reg name=\"eflags\" bitsize=\"32\" type=\"x64_eflags\"/>\n"
        "\n"
        "  <!-- Segment registers -->\n"
        "\n"
        "  <reg name=\"cs\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ss\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ds\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"es\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"fs\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"gs\" bitsize=\"32\" type=\"int32\"/>\n"
        "\n"
        "  <!-- Segment descriptor caches and TLS base MSRs -->\n"
        "\n"
        "  <!--reg name=\"cs_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"ss_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"ds_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"es_base\" bitsize=\"64\" type=\"int64\"/-->\n"
        "  <reg name=\"fs_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"gs_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"k_gs_base\" bitsize=\"64\" type=\"int64\"/>\n"
        "\n"
        "  <!-- Control registers -->\n"
        "\n"
        "  <flags id=\"x64_cr0\" size=\"8\">\n"
        "\011<field name=\"PG\" start=\"31\" end=\"31\"/>\n"
        "\011<field name=\"CD\" start=\"30\" end=\"30\"/>\n"
        "\011<field name=\"NW\" start=\"29\" end=\"29\"/>\n"
        "\011<field name=\"AM\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"WP\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"NE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"ET\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"TS\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"EM\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"MP\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"PE\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"x64_cr3\" size=\"8\">\n"
        "\011<field name=\"PDBR\" start=\"12\" end=\"63\"/>\n"
        "\011<!--field name=\"\" start=\"3\" end=\"11\"/>\n"
        "\011<field name=\"WT\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"CD\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"\" start=\"0\" end=\"0\"/-->\n"
        "\011<field name=\"PCID\" start=\"0\" end=\"11\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"x64_cr4\" size=\"8\">\n"
        "\011<field name=\"PKE\" start=\"22\" end=\"22\"/>\n"
        "\011<field name=\"SMAP\" start=\"21\" end=\"21\"/>\n"
        "\011<field name=\"SMEP\" start=\"20\" end=\"20\"/>\n"
        "\011<field name=\"OSXSAVE\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"PCIDE\" start=\"17\" end=\"17\"/>\n"
        "\011<field name=\"FSGSBASE\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"SMXE\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"VMXE\" start=\"13\" end=\"13\"/>\n"
        "\011<field name=\"LA57\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"UMIP\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"OSXMMEXCPT\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"OSFXSR\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"PCE\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"PGE\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"MCE\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"PAE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"PSE\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"DE\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"TSD\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"PVI\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"VME\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"x64_efer\" size=\"8\">\n"
        "\011<field name=\"TCE\" start=\"15\" end=\"15\"/>\n"
        "\011<field name=\"FFXSR\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"LMSLE\" start=\"13\" end=\"13\"/>\n"
        "\011<field name=\"SVME\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"NXE\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"LMA\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"LME\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"SCE\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"cr0\" bitsize=\"64\" type=\"x64_cr0\"/>\n"
        "  <reg name=\"cr2\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"cr3\" bitsize=\"64\" type=\"x64_cr3\"/>\n"
        "  <reg name=\"cr4\" bitsize=\"64\" type=\"x64_cr4\"/>\n"
        "  <reg name=\"cr8\" bitsize=\"64\" type=\"int64\"/>\n"
        "  <reg name=\"efer\" bitsize=\"64\" type=\"x64_efer\"/>\n"
        "\n"
        "  <!-- x87 FPU -->\n"
        "\n"
        "  <reg name=\"st0\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st1\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st2\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st3\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st4\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st5\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st6\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st7\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "\n"
        "  <reg name=\"fctrl\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fstat\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"ftag\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fiseg\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fioff\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"foseg\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fooff\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fop\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "\n"
        "  <vector id=\"v4f\" type=\"ieee_single\" count=\"4\"/>\n"
        "  <vector id=\"v2d\" type=\"ieee_double\" count=\"2\"/>\n"
        "  <vector id=\"v16i8\" type=\"int8\" count=\"16\"/>\n"
        "  <vector id=\"v8i16\" type=\"int16\" count=\"8\"/>\n"
        "  <vector id=\"v4i32\" type=\"int32\" count=\"4\"/>\n"
        "  <vector id=\"v2i64\" type=\"int64\" count=\"2\"/>\n"
        "  <union id=\"vec128\">\n"
        "\011<field name=\"v4_float\" type=\"v4f\"/>\n"
        "\011<field name=\"v2_double\" type=\"v2d\"/>\n"
        "\011<field name=\"v16_int8\" type=\"v16i8\"/>\n"
        "\011<field name=\"v8_int16\" type=\"v8i16\"/>\n"
        "\011<field name=\"v4_int32\" type=\"v4i32\"/>\n"
        "\011<field name=\"v2_int64\" type=\"v2i64\"/>\n"
        "\011<field name=\"uint128\" type=\"uint128\"/>\n"
        "  </union>\n"
        "  <flags id=\"x64_mxcsr\" size=\"4\">\n"
        "\011<field name=\"IE\" start=\"0\" end=\"0\"/>\n"
        "\011<field name=\"DE\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"ZE\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"OE\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"UE\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"PE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"DAZ\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"IM\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"DM\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"ZM\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"OM\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"UM\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"PM\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"FZ\" start=\"15\" end=\"15\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"xmm0\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm1\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm2\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm3\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm4\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm5\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm6\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm7\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm8\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm9\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm10\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm11\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm12\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm13\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm14\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm15\" bitsize=\"128\" type=\"vec128\"/>\n"
        "\n"
        "  <reg name=\"mxcsr\" bitsize=\"32\" type=\"x64_mxcsr\" group=\"vector\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.i386.core",
        (const char * const []) {
            [0] =
                "rax",
            [1] =
                "rbx",
            [2] =
                "rcx",
            [3] =
                "rdx",
            [4] =
                "rsi",
            [5] =
                "rdi",
            [6] =
                "rbp",
            [7] =
                "rsp",
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
                "rip",
            [17] =
                "eflags",
            [18] =
                "cs",
            [19] =
                "ss",
            [20] =
                "ds",
            [21] =
                "es",
            [22] =
                "fs",
            [23] =
                "gs",
            [24] =
                "fs_base",
            [25] =
                "gs_base",
            [26] =
                "k_gs_base",
            [27] =
                "cr0",
            [28] =
                "cr2",
            [29] =
                "cr3",
            [30] =
                "cr4",
            [31] =
                "cr8",
            [32] =
                "efer",
            [33] =
                "st0",
            [34] =
                "st1",
            [35] =
                "st2",
            [36] =
                "st3",
            [37] =
                "st4",
            [38] =
                "st5",
            [39] =
                "st6",
            [40] =
                "st7",
            [41] =
                "fctrl",
            [42] =
                "fstat",
            [43] =
                "ftag",
            [44] =
                "fiseg",
            [45] =
                "fioff",
            [46] =
                "foseg",
            [47] =
                "fooff",
            [48] =
                "fop",
            [49] =
                "xmm0",
            [50] =
                "xmm1",
            [51] =
                "xmm2",
            [52] =
                "xmm3",
            [53] =
                "xmm4",
            [54] =
                "xmm5",
            [55] =
                "xmm6",
            [56] =
                "xmm7",
            [57] =
                "xmm8",
            [58] =
                "xmm9",
            [59] =
                "xmm10",
            [60] =
                "xmm11",
            [61] =
                "xmm12",
            [62] =
                "xmm13",
            [63] =
                "xmm14",
            [64] =
                "xmm15",
            [65] =
                "mxcsr",
        },
        66,
    },
    { NULL }
};
