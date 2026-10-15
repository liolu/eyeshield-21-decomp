/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 *data_020fb948;

s32 func_02003138(void) {
    if (!(*data_020fb948 & 2)) {
        return 1;
    }
    return 0;
}
