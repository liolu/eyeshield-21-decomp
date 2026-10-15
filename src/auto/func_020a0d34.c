#include "m2c.h"

M2C_UNK func_020a1424(s32);                         /* extern */
s32 func_020a1430(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020a1e7c(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern s32 data_02127264;
extern s32 data_02127268;
extern M2C_UNK data_0212726c;

void func_020a0d34(s32 arg0) {
    func_020a1424(M2C_FIELD(&data_0212726c, s32 *, 4));
    if (arg0 != 1) {
        return;
    }
    func_020a1e7c(&data_0212726c, func_020a1430(data_02127268, data_02127264, 0), 4);
}
