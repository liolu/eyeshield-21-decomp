/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c2ef8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c3058(void *);

s32 func_020c2e2c(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_020c3058(sp0);
    if (func_020c2ef8((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
