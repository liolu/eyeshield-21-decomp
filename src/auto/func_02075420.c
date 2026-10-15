#include "m2c.h"

void func_02075420(void *arg0, u16 arg1) {
    u16 temp_r2;
    u16 temp_r2_2;
    u16 temp_r3;
    u16 var_r1;

    var_r1 = arg1;
    if ((var_r1 & 0x30) == 0x30) {
        var_r1 &= ~0x20;
    }
    if ((var_r1 & 0xC0) == 0xC0) {
        var_r1 &= ~0x40;
    }
    temp_r3                   = M2C_FIELD(arg0, u16 *, 2);
    temp_r2                   = var_r1 & (var_r1 ^ temp_r3);
    M2C_FIELD(arg0, u16 *, 2) = var_r1;
    M2C_FIELD(arg0, u16 *, 0) = temp_r3;
    temp_r2_2                 = temp_r2;
    M2C_FIELD(arg0, u16 *, 4) = temp_r2_2;
    M2C_FIELD(arg0, u16 *, 6) = temp_r2_2;
    if ((var_r1 == 0) || (var_r1 != temp_r3)) {
        M2C_FIELD(arg0, u16 *, 8) = 0x14U;
        return;
    }
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) - 1);
    if (M2C_FIELD(arg0, u16 *, 8) == 0) {
        M2C_FIELD(arg0, u16 *, 6) = var_r1;
        M2C_FIELD(arg0, u16 *, 8) = 4U;
    }
}
