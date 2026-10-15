/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b9d6c();                                /* extern */
M2C_UNK func_020bf5ac(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020bfb28(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020f94ec;

void func_020bb8a0(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020b9d6c();
    if ((data_020f94ec != -1) && (arg2 > 0x1CU)) {
        func_020bf5ac(data_020f94ec, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020bfb28(arg0, temp_ip + arg1, arg2);
}
