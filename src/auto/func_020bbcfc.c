/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bf5ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bfb28(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020f94ec;

void func_020bbcfc(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020f94ec != -1) && ((u32) arg2 > 0x1CU)) {
        func_020bf5ac(data_020f94ec, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_020bfb28(arg0, arg1 + 0x05000600, arg2);
}
