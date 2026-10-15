#include "m2c.h"

s32 func_0207d244(M2C_UNK);                         /* extern */
M2C_UNK func_020a895c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020a89a0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020a89e4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020a8a28(M2C_UNK, s32);                /* extern */
M2C_UNK func_020a8a6c(M2C_UNK, s32);                /* extern */

s32 func_0209c1f4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0207d244(arg1);
    if (temp_r0 == 0) {
        return 0;
    }
    switch (arg2) {                                 /* irregular */
        case 1:
            func_020a8a6c(arg0, temp_r0);
            break;
        case 2:
            func_020a8a28(arg0, temp_r0);
            break;
        case 4:
            func_020a89e4(arg0, temp_r0);
            break;
        case 8:
            func_020a89a0(arg0, temp_r0);
            break;
        case 16:
            func_020a895c(arg0, temp_r0);
            break;
    }
    return temp_r0;
}
