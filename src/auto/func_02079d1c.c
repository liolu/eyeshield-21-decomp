/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02079d1c(void *arg0, s32 arg1) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xE);
    if (((temp_r3 == 0) && (M2C_FIELD(arg0, s32 *, 0) == 1)) || (temp_r3 == arg1)) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    return 0;
}
