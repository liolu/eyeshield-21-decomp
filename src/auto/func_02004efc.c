#include "m2c.h"

extern M2C_UNK data_020fb6e0;

void func_02004efc(void) {
    M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) & 0xFFFFC01F);
}
