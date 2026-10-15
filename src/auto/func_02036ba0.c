#include "m2c.h"

extern M2C_UNK func_02036bb8;

void func_02036ba0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_02036bb8;
    M2C_FIELD(arg0, s8 *, 0x92)       = 2;
}
