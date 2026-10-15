#include "m2c.h"

M2C_UNK func_0207d52c();                            /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */
M2C_UNK func_0209a23c(void *);                      /* extern */
M2C_UNK func_0209a254(void *);                      /* extern */
M2C_UNK func_0209a2a0(void *);                      /* extern */
s32 func_0209a4c4(void *);                          /* extern */

s32 func_0209a52c(void *arg0, s32 arg1) {
    u32 temp_r0;

    if (arg1 != 0) {
        if (arg1 != 1) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0) = 2;
        func_0207da08();
        goto block_4;
    }
block_4:
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + 1;
    switch (temp_r0) {
        default:
            break;
        case 1:
            if (func_0209a4c4(arg0 + 4) == 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0x80;
            } else {
                M2C_FIELD(arg0, s32 *, 0) = 1;
            }
            break;
        case 2:
            func_0209a23c(arg0 + 4);
            func_0209a2a0(arg0 + 4);
            func_0209a254(arg0 + 4);
            break;
        case 3:
            if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
                func_0207d52c();
            }
            M2C_FIELD(arg0, s32 *, 0) = -1;
        /* fallthrough */
        case 0:
            func_0207dbc0(arg0);
            break;
    }
    return 0;
}
