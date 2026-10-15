/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020c78a4();                            /* extern */
s32 func_020c7c60(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c7d64();                                /* extern */
extern s16 data_02130148;
extern s32 data_0213014c;

s32 func_020c7efc(void) {
    s32 temp_r0;

    if (func_020c7d64() != 0) {
        return 3;
    }
    temp_r0 = func_020c7c60(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020c78a4();
    func_020c13d8(0xA, 0);
    data_0213014c = 0;
    data_02130148 = 0;
    return 0;
}
