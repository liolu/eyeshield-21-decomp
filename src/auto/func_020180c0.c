#include "m2c.h"

extern M2C_UNK func_020180d8;

void func_020180c0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_020180d8;
    M2C_FIELD(arg0, s8 *, 0x92)       = 3;
}
