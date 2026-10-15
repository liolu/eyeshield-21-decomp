/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb694;
extern M2C_UNK data_020fb6e0;

void func_02003868(void) {
    M2C_FIELD(&data_020fb6e0, s32 *, 0x1C) = (s32) M2C_FIELD(&data_020fb694, s32 *, 4);
    M2C_FIELD(&data_020fb6e0, s32 *, 0x20) = (s32) (M2C_FIELD(&data_020fb694, s32 *, 4) ^ 1);
}
