/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a44f4(void *);                      /* extern */
extern s32 data_02129314;
extern u32 data_02129318;
extern void *data_0212931c;

void func_020a650c(void *arg0, u32 arg1, s32 arg2) {
    u32 var_r5;
    void *var_r7;

    var_r7        = arg0;
    data_02129314 = arg2;
    var_r5        = 0;
    data_0212931c = var_r7;
    data_02129318 = arg1;
    if (arg1 == 0) {
        return;
    }
    do {
        func_020a44f4(var_r7);
        M2C_FIELD(var_r7, s32 *, 0xC)  = 0;
        M2C_FIELD(var_r7, s32 *, 0x10) = 0;
        M2C_FIELD(var_r7, s32 *, 0x14) = 0;
        M2C_FIELD(var_r7, s32 *, 0x18) = 0;
        M2C_FIELD(var_r7, s32 *, 0x1C) = 0;
        M2C_FIELD(var_r7, s32 *, 0x20) = 0;
        M2C_FIELD(var_r7, s32 *, 0x24) = 0;
        M2C_FIELD(var_r7, s32 *, 0x28) = 0;
        var_r5 += 1;
        M2C_FIELD(var_r7, s32 *, 0x2C) = 0;
        var_r7 += 0x30;
    } while (var_r5 < arg1);
}
