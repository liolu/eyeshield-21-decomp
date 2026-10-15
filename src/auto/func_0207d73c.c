#include "m2c.h"

extern void *data_02122c68;

void func_0207d73c(void *arg0, void *arg1, s32 arg2) {
    data_02122c68                         = arg0;
    M2C_FIELD(arg0, volatile s32 *, 0xC)  = 4;
    M2C_FIELD(arg0, void **, 0)           = arg1;
    M2C_FIELD(arg0, void **, 4)           = arg1;
    M2C_FIELD(arg0, volatile s32 *, 8)    = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, void **, 0x10)        = arg1;
    M2C_FIELD(arg1, volatile s32 *, 0xC)  = 0;
    M2C_FIELD(arg1, void **, 0)           = arg0;
    M2C_FIELD(arg1, void **, 4)           = arg0;
    M2C_FIELD(arg1, volatile s32 *, 8)    = arg2;
}
