#include "m2c.h"

M2C_UNK func_0208722c(void *);                      /* extern */
M2C_UNK func_0208729c(void *);                      /* extern */
s32 func_0209b248(s32, s32, M2C_UNK, void *);       /* extern */
extern M2C_UNK data_020fb6e0;

s32 func_020304d4(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0_3 = M2C_FIELD(arg0, u8 *, 0) & 1;
    if (temp_r0_3 == 0) {
        return temp_r0_3;
    }
    temp_r0_2 = M2C_FIELD(&data_020fb6e0, s32 *, 0x2C) & 1;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_0208729c(arg0 + 0x10);
    func_0208722c(arg0 + 0x10);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0) & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_0209b248(((s32) M2C_FIELD(arg0, s32 *, 0x4C) >> 0xC) - 0x3C,
                         ((s32) M2C_FIELD(arg0, s32 *, 0x50) >> 0xC) - 0x10, 0x40, arg0 + 0x114);
}
