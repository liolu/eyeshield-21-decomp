/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d5c44;
extern M2C_UNK data_020fe6bc;

void *func_02037a18(s32 arg0) {
    if (arg0 < 0xC) {
        return (M2C_UNK *) ((s8 *) &data_020fe6bc + (arg0 << 5));
    }
    return (M2C_UNK *) ((s8 *) &data_020d5c44 + (arg0 << 5));
}
