#include "m2c.h"

extern M2C_UNK data_020f9de4;
extern M2C_UNK data_027e0000;

void func_0200101c(void) {
    M2C_FIELD(&data_020f9de4, s32 *, 4)      = (s32) (M2C_FIELD(&data_020f9de4, s32 *, 4) + 1);
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
}
