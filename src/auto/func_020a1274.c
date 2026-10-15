/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a11ac(s32, void *);                 /* extern */
M2C_UNK func_020a1240(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020a1304(void *);                          /* extern */
extern s32 data_02127354;
extern M2C_UNK data_02127358;

void func_020a1274(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | (u8) arg4);
    func_020a1240(arg0 + 0xC, 4);
    if (data_02127354 == 0) {
        func_020a1240(&data_02127358, 4);
        data_02127354 = 1;
    }
    func_020a11ac(func_020a1304(arg0), arg0);
}
