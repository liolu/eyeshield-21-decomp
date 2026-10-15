/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205a748(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 < 0x11) {
        *arg0 = temp_r1 + 1;
        return 8;
    }
    *arg0 = temp_r1 + 1;
    return 7;
}
