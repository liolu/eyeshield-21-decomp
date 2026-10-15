/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ab7d0(s32);                         /* extern */
extern M2C_UNK data_02129334;
extern M2C_UNK data_02129464;

M2C_UNK *func_020ab78c(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_02129334, s32 *, 0xFC) & 0x80;
    if (temp_r0 == 0) {
        func_020ab7d0(temp_r0);
        M2C_FIELD(&data_02129334, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02129334, s32 *, 0xFC) | 0x80);
    }
    return &data_02129464;
}
