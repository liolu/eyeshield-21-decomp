#include "m2c.h"

s32 func_020d2b40(s32, M2C_UNK);                    /* extern */

s32 func_020713b4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    return arg2 + func_020d2b40(arg1 * (arg3 - arg2), arg0);
}
