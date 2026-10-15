/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fdb30;

void func_02006d84(s32 arg0, s32 arg1) {
    if ((s32) M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020fdb30 + (arg0 * 4))), s32 *, 0x1274) > 1) {
        return;
    }
    if ((arg1 != 6) && (arg1 != 2)) {
        return;
    }
    M2C_FIELD(&data_020fb6e0, s32 *, 0x30) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x30) | 0x40000000);
    M2C_FIELD(&data_020fb6e0, s32 *, 0x34) = (s32) (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & ~0x10);
}
