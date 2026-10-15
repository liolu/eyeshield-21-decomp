/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205a76c(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 var_r2;
    s32 var_r3;

    var_r2 = arg2;
    var_r3 = arg3;
    switch (arg1) {                                 /* irregular */
        case 1:
            var_r3 = 6;
            var_r2 = 5;
            break;
        case 0:
            var_r3 = 4;
            var_r2 = 3;
            break;
    }
    temp_r1 = *arg0;
    if (temp_r1 < 4) {
        *arg0 = temp_r1 + 1;
    } else {
        var_r3 = var_r2;
        *arg0  = temp_r1 + 1;
    }
    return var_r3;
}
