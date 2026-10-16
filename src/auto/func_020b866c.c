/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_DispOn from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_020f94e8;
extern u16 data_0212d764;
extern u16 data_020f94e8;
extern u16 data_0212d764;
void func_020b866c(void) {
    data_020f94e8 = 1;
    if (data_0212d764 != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_0212d764 << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
