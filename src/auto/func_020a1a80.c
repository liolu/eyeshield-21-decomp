/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a1b60(M2C_UNK);                         /* extern */
M2C_UNK func_020a1b90();                            /* extern */

s32 func_020a1a80(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 & 1) {
        func_020a1b90(arg0);
    }
    temp_r0 = arg1 & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_020a1b60(arg0);
}
