/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205a5b8(s32 *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 < arg1) {
        *arg0 = temp_r2 + 1;
        return 3;
    }
    *arg0 = temp_r2 + 1;
    return 2;
}
