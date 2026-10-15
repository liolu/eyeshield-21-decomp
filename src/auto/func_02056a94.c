#include "m2c.h"

M2C_UNK func_02078f4c(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020ff5c8;
extern M2C_UNK data_020ff618;

void func_02056a94(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    u16 temp_r1_3;

    M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) + 1);
    if ((s32) M2C_FIELD(arg0, volatile s32 *, 0x10) > 0x180) {
        M2C_FIELD(arg0, volatile s32 *, 0x10) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0x10);
    func_02078f4c(&data_020ff5c8, 0, (s32) (temp_r1 + ((u32) temp_r1 >> 0x1F)) >> 1);
    temp_r1_2 = M2C_FIELD(arg0, volatile s32 *, 0x10);
    func_02078f4c(&data_020ff618, 0, (s32) (temp_r1_2 + ((u32) temp_r1_2 >> 0x1F)) >> 1);
    temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0xC);
    if (temp_r0 <= 0xB4) {
        M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (temp_r0 + 1);
    }
    temp_r1_3 = M2C_FIELD(arg0, volatile u16 *, 0x20);
    if ((u32) temp_r1_3 < 0xFFB0U) {
        M2C_FIELD(arg0, volatile u16 *, 0x20) = (u16) (temp_r1_3 + 0x50);
        return;
    }
    M2C_FIELD(arg0, volatile u16 *, 0x20) = 0U;
}
