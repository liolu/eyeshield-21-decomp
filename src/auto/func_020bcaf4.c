/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc8d4();                            /* extern */
s32 func_020bc9c4(); /* extern */

void func_020bcaf4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_020bc9c4() <= 0) {
        return;
    }
    do {
        func_020bc8d4();
    } while (func_020bc9c4(arg0, arg1, arg2, arg3) > 0);
}
