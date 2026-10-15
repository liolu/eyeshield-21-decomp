/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c1550(void *, s32);                     /* extern */
M2C_UNK func_020c16cc(void *, s32);                 /* extern */
M2C_UNK func_020c2798();                            /* extern */
s32 func_020c283c(s32);                             /* extern */

s32 func_020c2750(void *arg0) {
    func_020c16cc(arg0, func_020c1550(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020c283c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020c2798();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
