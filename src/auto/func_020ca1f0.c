/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ca05c();                                /* extern */
s32 func_020ca1c8();                                /* extern */

s32 func_020ca1f0(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020ca05c() != 0) {
        var_r4 = func_020ca1c8();
    }
    return var_r4;
}
