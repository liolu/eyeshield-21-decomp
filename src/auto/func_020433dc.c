#include "m2c.h"

s32 func_02043424(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02078f4c(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020ff5c8;
extern M2C_UNK data_020ff604;

void func_020433dc(void *arg0) {
    s32 temp_r4;

    temp_r4 = 0 - func_02043424(0x1F4, M2C_FIELD(arg0, s32 *, 0xC), 0, 0xC0);
    func_02078f4c(&data_020ff5c8, 0, temp_r4);
    func_02078f4c(&data_020ff604, 0, temp_r4);
}
