#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void func_0202faf0(s32 *arg0) {
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x1F0) == -1) {
        return;
    }
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x1F0) == *arg0) {
        *arg0 = M2C_FIELD(&data_020fb6e0, s32 *, 0x1F4);
    }
}
