#include "m2c.h"

extern M2C_UNK func_0207415c;
extern M2C_UNK func_0207423c;

void func_0207410c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_0207423c;
    M2C_FIELD(arg0, s8 *, 0x92)       = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_0207415c;
    M2C_FIELD(arg0, s8 *, 0x8E)       = 2;
}
