/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a2b30();                            /* extern */
extern M2C_UNK *data_020f9160;
extern M2C_UNK *data_020f9164;
extern M2C_UNK data_02127384;
extern M2C_UNK func_020a2d28;
extern M2C_UNK func_020a2db8;

void func_020a2e6c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_02127384, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_02127384, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_02127384, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_02127384, s32 *, 0x18) = arg3;
    func_020a2b30();
    if (arg4 == 0) {
        return;
    }
    data_020f9160 = &func_020a2db8;
    data_020f9164 = &func_020a2d28;
}
