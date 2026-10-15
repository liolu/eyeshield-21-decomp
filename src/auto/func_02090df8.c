/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02090df8(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), void **, 0x68), void **, 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0) < (s32) ((M2C_FIELD(M2C_FIELD(temp_r3, void **, 8), u16 *, 4) << 0xC) - 0x1000)) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        return 0;
    }
    return arg1 + 4;
}
