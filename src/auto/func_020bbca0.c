/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bf6b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bfb58(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020f94ec;

void func_020bbca0(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020f94ec != -1) && ((u32) arg2 > 0x30U)) {
        func_020bf6b4(data_020f94ec, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020bfb58(arg0, arg1 + 0x07000000, arg2);
}
