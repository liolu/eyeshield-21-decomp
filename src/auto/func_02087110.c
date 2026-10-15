/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02087110(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) & arg1) {
        return 1;
    }
    return 0;
}
