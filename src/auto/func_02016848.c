#include "m2c.h"

extern M2C_UNK data_020fdb30;

void func_02016848(s32 arg0, s32 arg1) {
    void *temp_r2;

    temp_r2                         = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (arg0 * 4)));
    M2C_FIELD(temp_r2, s32 *, 0x30) = (s32) (arg1 + M2C_FIELD(temp_r2, s32 *, 0x2C));
}
