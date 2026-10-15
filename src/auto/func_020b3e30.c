/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b3a7c(M2C_UNK, M2C_UNK);
void func_020b3c48(M2C_UNK);
void func_020b6a7c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020b3e30(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_020b3c48(arg0);
        return;
    }
    func_020b6a7c(arg0 + 0x1C, 0, arg1);
    func_020b3a7c(arg0, 0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
}
