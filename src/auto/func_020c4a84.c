/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c11cc();                            /* extern */
s32 func_020c13b0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c13d8(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_0212f7e4;
extern M2C_UNK data_0212f7e8;
extern M2C_UNK func_020c4b14;

void func_020c4a84(void) {
    if (data_0212f7e4 != 0) {
        return;
    }
    data_0212f7e4 = 1;
    func_020c11cc();
    M2C_FIELD(&data_0212f7e8, s16 *, 0x32) = 0;
    M2C_FIELD(&data_0212f7e8, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0212f7e8, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0212f7e8, s32 *, 0)    = 0;
    M2C_FIELD(&data_0212f7e8, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0212f7e8, s16 *, 0x30) = 0;
    M2C_FIELD(&data_0212f7e8, s16 *, 0x34) = 0;
    do {

    } while (func_020c13b0(6, 1) == 0);
    func_020c13d8(6, &func_020c4b14);
}
