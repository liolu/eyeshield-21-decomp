#include "m2c.h"

M2C_UNK func_02070468();                            /* extern */
extern M2C_UNK data_020d8444;

void func_0207057c(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x10);
    switch (temp_r3) {
        default:
            break;
        case 0:
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (temp_r3 * 4))) * 4)), s32 *, 0x14) = 1;
            break;
        case 1:
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (temp_r3 * 4))) * 4)), s32 *, 0x14) = 0xE;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x12;
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (M2C_FIELD(arg0, u32 *, 0x10) * 4))) * 4)), s32 *,
                      0x14)              = 0xF;
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x63;
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (M2C_FIELD(arg0, u32 *, 0x10) * 4))) * 4)), s32 *,
                      0x14)              = 0x13;
            break;
        case 4:
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (temp_r3 * 4))) * 4)), s32 *, 0x14) = 0x17;
            break;
        case 5:
            M2C_FIELD(arg0, s32 *, 0x14) = 0x19;
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (M2C_FIELD(arg0, u32 *, 0x10) * 4))) * 4)), s32 *,
                      0x14)              = 0x1A;
            break;
        case 6:
            M2C_FIELD((arg0 + (*((M2C_UNK *) ((s8 *) &data_020d8444 + (temp_r3 * 4))) * 4)), s32 *, 0x14) = 0x1D;
            break;
    }
    func_02070468(arg0);
}
