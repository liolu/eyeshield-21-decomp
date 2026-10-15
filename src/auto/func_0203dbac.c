#include "m2c.h"

u8 func_0203dbac(void *arg0, u8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, u8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    return M2C_FIELD(arg0, u8 *, 0);
}
