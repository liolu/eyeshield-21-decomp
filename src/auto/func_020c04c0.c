/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c04e0();                                /* extern */
s32 func_020c0520();                                /* extern */

s32 func_020c04c0(void) {
    s32 temp_r4;

    temp_r4 = func_020c0520();
    return (0x100 - temp_r4) - func_020c04e0();
}
