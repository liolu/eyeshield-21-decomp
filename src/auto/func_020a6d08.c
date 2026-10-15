/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a7054(M2C_UNK, s32);                /* extern */
M2C_UNK func_020a7120(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_020a71cc(M2C_UNK, s32, s32, s32);      /* extern */

void func_020a6d08(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if ((arg3 != 0) && (arg1 != 0)) {
        func_020a71cc(arg0, arg3, arg1, arg5);
    }
    if (arg2 != 0) {
        func_020a7120(arg0, arg2, arg4);
    }
    if (arg1 == 0) {
        return;
    }
    func_020a7054(arg0, arg1);
}
