#include "m2c.h"

extern s32 data_021234c0;

void func_02037bec(s32 arg0) {
    M2C_FIELD(((arg0 * 0x460) + data_021234c0), s8 *, 0x10) = 0;
}
