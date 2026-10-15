/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern s32 data_020fdb50;

s32 func_020181e0(void) {
    if (M2C_FIELD(&data_020fb6e0, s32 *, 0x34) & 0x80000000) {
        return 0;
    }
    return data_020fdb50;
}
