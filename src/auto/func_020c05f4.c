/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c03f0();                            /* extern */
s32 func_020c0560();                         /* extern */
s32 func_020c0928();                         /* extern */

void func_020c05f4(M2C_UNK arg0) {
    if (func_020c0560() != 0) {
        return;
    }
    do {

    } while (func_020c0928(0) != 0);
    if (func_020c0560(arg0) != 0) {
        return;
    }
    func_020c03f0();
    if (func_020c0560(arg0) != 0) {
        return;
    }
    do {
        func_020c0928(1);
    } while (func_020c0560(arg0) == 0);
}
