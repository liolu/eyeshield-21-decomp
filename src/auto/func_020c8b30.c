/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c7d08();                                /* extern */
s32 func_020c7d90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c7ee4(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020c8b30(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020c7d08();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c7ee4(1, arg0);
    var_r0 = func_020c7d90(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
