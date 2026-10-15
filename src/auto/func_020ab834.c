/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ab884(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02129334;
extern M2C_UNK data_0212933c;
extern M2C_UNK data_021294f4;

M2C_UNK *func_020ab834(void) {
    if (!(M2C_FIELD(&data_02129334, s32 *, 0xFC) & 0x10)) {
        func_020ab884(&data_0212933c, &data_021294f4);
        M2C_FIELD(&data_02129334, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02129334, s32 *, 0xFC) | 0x10);
    }
    return &data_021294f4;
}
