#include "m2c.h"

M2C_UNK func_02074c98();                            /* extern */
M2C_UNK func_0207d9f8(M2C_UNK);                     /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(u32 *);                       /* extern */

s32 func_02079c18(u32 *arg0, s32 arg1) {
    u32 temp_r0;

    if (arg1 != 0) {
        if (arg1 == 1) {
            *arg0 = 2;
            func_0207da08();
            goto block_4;
        }
        return 0;
    }
block_4:
    temp_r0 = *arg0 + 1;
    switch (temp_r0) {
        default:
            break;
        case 1:
            *arg0 = temp_r0;
            break;
        case 2:
            func_02074c98();
            func_0207d9f8(5);
            func_0207d9f8(6);
            break;
        case 0:
        case 3:
            func_0207dbc0(arg0);
            break;
    }
    return 0;
}
