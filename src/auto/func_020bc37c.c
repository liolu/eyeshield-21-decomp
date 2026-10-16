/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020b8cf8();
extern void func_020bc37c();
extern u32 data_0212d7a4;
extern u32 data_0212d7bc;
extern u32 data_0212d7b8;
extern s32 data_0212d7b4;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_020dd630[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_020bc37c() {
    u32 temp      = func_020b8cf8();
    data_0212d7b4 = (s32) temp;
    data_0212d7a4 = (u32) (data_020dd630[temp].blk1 << 0xC);
    data_0212d7b8 = (u32) (data_020dd630[temp].blk2 << 0xC);
    data_0212d7bc = (u32) (data_020dd630[temp].szBlk1 << 0xC);
}
