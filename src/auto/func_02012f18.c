#include "m2c.h"

extern M2C_UNK func_02012f70;
extern M2C_UNK func_020131c8;

void func_02012f18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_020131c8;
    M2C_FIELD(arg0, s8 *, 0x92)       = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_02012f70;
    M2C_FIELD(arg0, s8 *, 0x8E)       = 1;
}
