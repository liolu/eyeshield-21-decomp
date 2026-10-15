/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a4724(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020a4334(void *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_020a4724(arg3, arg2, arg1);
}
