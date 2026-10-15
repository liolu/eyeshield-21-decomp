/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c000c(s32, s32);                    /* extern */
s32 func_020c0d84(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c0dcc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020b5700(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020c0d84(arg2, arg3)) {
        func_020c0dcc(arg2, arg3, 0);
    }
    func_020c000c(arg0, arg0 + arg1);
}
