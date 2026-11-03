/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 *func_020b4b04();
void func_020b4ae8(s32, u8 *);
u8 *func_020b5354(s32, s32, M2C_UNK *, s32, s32);
void func_020be478(u8 *, s32);
void func_020bfd28(u8 *, u8 *, s32);
void func_020bfc94(u8 *, s32, s32);
s32 func_020b4b2c(s32, void *, s32, s32);
s32 func_020b4e80();
extern M2C_UNK func_020b5754;
extern M2C_UNK data_0212ccac;

u8 *func_020b5890(s32 arg0, s32 arg1, s32 arg2) {
    u8 *var_r6;
    s32 temp_r5;
    s32 temp_r4;
    s32 var_r3;
    s32 rd;
    u8 *temp_r0;
    var_r6 = func_020b4b04();
    if (var_r6 == NULL) {
        if (func_020b4b2c(arg0, &data_0212ccac, 0x3C, 0) != 0x3C) {
            return NULL;
        }
        temp_r4 = M2C_FIELD(&data_0212ccac, s32 *, 0x38) * 4;
        temp_r5 = (temp_r4 * 2) + 0x3C;
        if (arg1 == 0) {
            return NULL;
        }
        if (arg2 == 0) {
            var_r3 = 0;
        } else {
            var_r3 = func_020b4e80();
        }
        var_r6 = func_020b5354(arg1, temp_r5 + 0x20, &func_020b5754, var_r3, arg0);
        if (var_r6 == NULL) {
            return NULL;
        }
        rd = func_020b4b2c(arg0, var_r6, temp_r4 + 0x3C, 0);
        if (rd != temp_r4 + 0x3C) {
            return NULL;
        }
        temp_r0 = var_r6 + 0x3C;
        func_020bfd28(temp_r0, temp_r0 + (M2C_FIELD(var_r6, s32 *, 0x38) * 4), temp_r4);
        func_020bfc94(var_r6 + 0x3C, 0, temp_r4);
        func_020be478(var_r6, temp_r5);
        if (arg2 != 0) {
            func_020b4ae8(arg0, var_r6);
        }
    }
    return var_r6;
}
