/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a2a60(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020a2ad4(s32, u32);                        /* extern */
M2C_UNK func_020a2b24(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021273a0;
extern M2C_UNK data_021273a4;

void func_020a2ee0(void) {
    M2C_FIELD(&data_021273a0, s32 *, 4) =
        func_020a2ad4(M2C_FIELD(&data_021273a0, s32 *, 0xC), (u32) M2C_FIELD(&data_021273a0, u32 *, 0x10) >> 4);
    func_020a2b24(&data_021273a0);
    func_020a2a60(&data_021273a0, &data_021273a4, 0, M2C_FIELD(&data_021273a0, s32 *, 8));
}
