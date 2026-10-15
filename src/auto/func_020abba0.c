/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aea14(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_02129334;
extern s32 data_02129338;
extern s32 data_02129380;
extern s32 data_021293b0;

void func_020abba0(void) {
    s32 sp0;
    s32 temp_r1;

    func_020aea14(0x1610, &data_02129338, 0x11);
    func_020aea14(0x19, &data_02129380, 0xC);
    sp0 = 2;
    func_020aea14(0x10, &sp0, 1);
    func_020aea14(0x15, &data_021293b0, 0x20);
    temp_r1                                = M2C_FIELD(&data_02129334, s32 *, 0xFC) & ~1;
    M2C_FIELD(&data_02129334, s32 *, 0xFC) = temp_r1;
    M2C_FIELD(&data_02129334, s32 *, 0xFC) = (s32) (temp_r1 | 2);
}
