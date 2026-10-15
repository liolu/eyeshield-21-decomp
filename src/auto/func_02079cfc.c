#include "m2c.h"

void func_02079cfc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0xE) == arg1) {
        M2C_FIELD(arg0, u16 *, 0xE) = 0xFFFFU;
    }
}
