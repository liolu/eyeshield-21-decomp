/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b71c4(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02129334;
extern M2C_UNK data_02129380;
extern M2C_UNK data_02129434;

M2C_UNK *func_020aba88(void) {
    if (!(M2C_FIELD(&data_02129334, s32 *, 0xFC) & 8)) {
        func_020b71c4(&data_02129380, &data_02129434);
        M2C_FIELD(&data_02129334, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02129334, s32 *, 0xFC) | 8);
    }
    return &data_02129434;
}
