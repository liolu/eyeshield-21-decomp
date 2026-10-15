/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b5824(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020c0038(s32, s32);                    /* extern */
M2C_UNK func_020c1050(s32);                         /* extern */

void func_020b57b4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020b5824(arg0, arg2, arg3);
    func_020c0038(arg0, arg0 + arg1);
    func_020c1050(arg0);
}
