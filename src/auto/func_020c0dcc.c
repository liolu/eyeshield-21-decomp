/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be478(s32, M2C_UNK);                /* extern */
M2C_UNK func_020c02dc();                            /* extern */
M2C_UNK func_020c02f0();                            /* extern */

void func_020c0dcc(s32 arg0, s32 arg1, s32 arg2) {
    func_020c02f0();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020be478(arg0 + 0x3C + (arg1 * 4), 4);
    func_020c02dc();
}
