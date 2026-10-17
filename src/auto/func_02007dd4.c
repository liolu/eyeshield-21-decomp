/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void func_02007dd4(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_020fb6e0, s32 *, 0xA4) == 0) {
        var_r0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x114) + 0x960000;
    } else {
        var_r0 = 0x960000 - M2C_FIELD(&data_020fb6e0, s32 *, 0x114);
    }
    if (var_r0 > 0x1E0000) {
        M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) | 0x10);
        return;
    }
    M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & ~0x10);
}
