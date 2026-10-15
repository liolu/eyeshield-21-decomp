/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void func_02004f98(void) {
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x400000) {
        return;
    }
    if (!(M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & 4)) {
        return;
    }
    if (!(M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0x200)) {
        return;
    }
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x138) == 0) {
        M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) | 0x80000000);
    }
}
