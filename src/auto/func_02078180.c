#include "m2c.h"

M2C_UNK func_0207d52c();                            /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */

s32 func_02078180(void *arg0, s32 arg1) {
    u32 temp_r0;

    if (arg1 != 0) {
        if (arg1 == 1) {
            M2C_FIELD(arg0, u32 *, 0) = 2U;
            func_0207da08();
            goto block_4;
        }
        return 0;
    }
block_4:
    temp_r0 = M2C_FIELD(arg0, u32 *, 0) + 1;
    switch (temp_r0) {
        default:
            break;
        case 1:
            M2C_FIELD(arg0, u32 *, 0) = temp_r0;
            break;
        case 0:
        case 2:
        case 3:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_0207d52c();
                M2C_FIELD(arg0, s32 *, 4) = 0;
            }
            func_0207dbc0(arg0);
            break;
    }
    return 0;
}
