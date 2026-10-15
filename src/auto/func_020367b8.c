#include "m2c.h"

s32 func_02003138();                                /* extern */
s32 func_020871d0(s32);                             /* extern */
M2C_UNK func_0208722c(s32);                         /* extern */
M2C_UNK func_0208729c(s32);                         /* extern */
extern M2C_UNK data_020fb6e0;

s32 func_020367b8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    temp_r0_4 = M2C_FIELD(&data_020fb6e0, s32 *, 0x3C) & 0x40;
    if (temp_r0_4 == 0) {
        return temp_r0_4;
    }
    temp_r0_3 = func_02003138();
    if (temp_r0_3 == 0) {
        return temp_r0_3;
    }
    temp_r0_2 = M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x400000;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x01000000;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0208729c(arg0 + 4);
    func_0208722c(arg0 + 4);
    return func_020871d0(arg0 + 4);
}
