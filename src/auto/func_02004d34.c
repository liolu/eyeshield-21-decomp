/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void func_02004d34(void) {
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x40000000) {
        return;
    }
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x100000) {
        return;
    }
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x08000000) {
        return;
    }
    if (!(M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & 0x10)) {
        return;
    }
    if ((s32) M2C_FIELD(&data_020fb6e0, s32 *, 0x13C) >= 0xA) {
        M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) | 0x80000);
    }
}
