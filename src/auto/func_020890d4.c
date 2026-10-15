#include "m2c.h"

s32 func_020890d4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, void **, 8) = (void *) (arg1 + 4);
    return 0;
}
