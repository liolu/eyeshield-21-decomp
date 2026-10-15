#include "m2c.h"

extern M2C_UNK data_02127364;

void func_020a2108(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(&data_02127364, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&data_02127364, s32 *, 4);
}
