/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a44ec(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020a44f4(s32);                         /* extern */
extern s32 data_0212931c;

void func_020a659c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0x30) + data_0212931c;
    func_020a44f4(temp_r4);
    if (arg1 != -1) {
        func_020a44ec(temp_r4, 0, arg1);
    }
    if (arg2 != -1) {
        func_020a44ec(temp_r4, 1, arg2);
    }
    if (arg3 != -1) {
        func_020a44ec(temp_r4, 2, arg3);
    }
    M2C_FIELD(temp_r4, s32 *, 0xC)  = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x18) = arg7;
}
