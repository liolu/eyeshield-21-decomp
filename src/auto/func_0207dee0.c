/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207dee0(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3                        = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r3, void **, 4) = arg1;
    M2C_FIELD(arg1, s32 *, 0)      = arg2;
    M2C_FIELD(arg1, void **, 8)    = temp_r3;
    M2C_FIELD(arg1, void **, 4)    = arg0;
    M2C_FIELD(arg0, void **, 8)    = arg1;
    return arg1;
}
