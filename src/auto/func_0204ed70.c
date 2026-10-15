#include "m2c.h"

M2C_UNK func_02078f4c(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_020d2b40(s32);                             /* extern */
extern M2C_UNK data_020ff5b4;
extern M2C_UNK data_020ff604;

void func_0204ed70(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020d2b40(arg0 << 6);
    func_02078f4c(&data_020ff5b4, 0, temp_r0);
    func_02078f4c(&data_020ff604, 0, temp_r0);
}
