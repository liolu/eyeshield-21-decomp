#include "engine.h"
#include "m2c.h"

void func_0207da30(M2C_UNK);
M2C_UNK func_0207dca4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209c360(M2C_UNK, M2C_UNK);

s32 func_0209cc90(void) {
    s32 temp_r0;

    temp_r0 = func_0207dca4(0x11, (s32) func_0209c360, 0x104);
    if (temp_r0 != 0) {
        M2C_FIELD(temp_r0, volatile s32 *, 0x10) = -1;
        M2C_FIELD(temp_r0, volatile s32 *, 8)    = (s32) M2C_FIELD(temp_r0, volatile s32 *, 0x10);
        M2C_FIELD(temp_r0, volatile s32 *, 0xC)  = (s32) M2C_FIELD(temp_r0, volatile s32 *, 8);
        M2C_FIELD(temp_r0, volatile s32 *, 0)    = 0;
        M2C_FIELD(temp_r0, volatile s32 *, 4)    = 1;
        func_0207da30(temp_r0);
    }
    return temp_r0;
}
