/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_020c12fc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020c9ed4(M2C_UNK arg0) {
    if (func_020c12fc(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_020c12fc(0xD, arg0, 0) != 0);
}
