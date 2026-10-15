#include "m2c.h"

extern M2C_UNK data_020f63d4;
extern M2C_UNK data_020f67bc;
extern M2C_UNK data_020f67c4;
extern M2C_UNK (*data_021244e4)(M2C_UNK *, s32);
extern s32 data_021244f4;

void func_02081474(s32 arg0) {
    if (data_021244e4 != NULL) {
        data_021244e4(&data_020f67bc, *((M2C_UNK *) ((s8 *) &data_020f63d4 + (data_021244f4 * 4))));
    }
    data_021244f4 = arg0;
    if (data_021244e4 == NULL) {
        return;
    }
    data_021244e4(&data_020f67c4, *((M2C_UNK *) ((s8 *) &data_020f63d4 + (arg0 * 4))));
}
