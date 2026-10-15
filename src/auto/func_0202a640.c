#include "m2c.h"

s16 func_020b8398(s32, s32);                        /* extern */

void func_0202a640(s16 *arg0, void *arg1, void *arg2) {
    *arg0 = func_020b8398(M2C_FIELD(arg2, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0),
                          M2C_FIELD(arg2, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8));
}
