#include "m2c.h"

void *func_02088e58(void *arg0, void *arg1) {
    s32 temp_r3;
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_r3 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r2) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & temp_r3);
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x14) = temp_r3;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) | temp_r3);
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & temp_r3);
            break;
        case 4:
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) ^ temp_r3);
            break;
    }
    return arg1 + 8;
}
