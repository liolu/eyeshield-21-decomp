/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a1044(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_020b3de8(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0212c2e4;

void func_020b4344(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r6;

    var_r6 = func_020a1044(&data_0212c2e4, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = func_020a1044(&data_0212c2e4, var_r6);
        func_020b3de8(var_r6, arg0);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
