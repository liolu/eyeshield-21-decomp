/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a7554();                                /* extern */
M2C_UNK func_020a7580(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a7654(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020a726c(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_020a7654(func_020a7554(), arg2, arg3);
        return;
    }
    func_020a7580(arg0, arg2, arg3);
}
