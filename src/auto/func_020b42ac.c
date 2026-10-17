/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020a1044(void *, s32);

extern M2C_UNK data_0212c2e4;

s32 func_020b42ac(s32 arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r5;

    var_r5 = 0;
    var_r1 = func_020a1044(&data_0212c2e4, 0);
    if (var_r1 != 0) {
        do {
            if ((M2C_FIELD(var_r1, u16 *, 0x34) == 2) && (M2C_FIELD(var_r1, u16 *, 0x38) == arg0) &&
                (M2C_FIELD(var_r1, u16 *, 0x3A) == arg1)) {
                var_r5 += 1;
            }
            var_r1 = func_020a1044(&data_0212c2e4, var_r1);
        } while (var_r1 != 0);
    }
    return var_r5;
}
