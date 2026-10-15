/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206f1a4();                            /* extern */
extern void *data_021234c0;

void func_020708a0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x78)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    if (M2C_FIELD(data_021234c0, s32 *, 0xD30) == -1) {
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) (M2C_FIELD(arg0, s32 *, 0x78) | 0x8000);
    }
    if (M2C_FIELD(data_021234c0, s32 *, 0xD90) == -1) {
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) (M2C_FIELD(arg0, s32 *, 0x78) | 0x10000);
    }
    if (M2C_FIELD(data_021234c0, s32 *, 0xDF0) == -1) {
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) (M2C_FIELD(arg0, s32 *, 0x78) | 0x20000);
    }
    func_0206f1a4();
}
