#include "m2c.h"

extern M2C_UNK func_020885a8;
extern M2C_UNK func_020886b0;

void func_0208842c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_020886b0;
    M2C_FIELD(arg0, s8 *, 0x92)       = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020885a8;
    M2C_FIELD(arg0, s8 *, 0x8E)       = 1;
}
