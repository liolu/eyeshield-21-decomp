/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fe5f0;

s32 func_02037400(s32 arg0) {
    if (arg0 >= 0xFE) {
        return 0;
    }
    if (arg0 == 0x28) {
        M2C_FIELD(&data_020fe5f0, s8 *, 0x27) = 1;
        return 1;
    }
    return 0;
}
