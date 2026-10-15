/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b9c44();                                /* extern */
M2C_UNK func_020bf6b4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020bfb58(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020f94ec;

void func_020bb698(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020b9c44();
    if ((data_020f94ec != -1) && (arg2 > 0x30U)) {
        func_020bf6b4(data_020f94ec, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020bfb58(arg0, temp_ip + arg1, arg2);
}
