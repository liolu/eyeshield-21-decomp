/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fe1f8;
extern M2C_UNK data_020fe200;

s32 func_020263c0(s32 arg0, s32 arg1) {
    if (*((M2C_UNK *) ((s8 *) &data_020fe1f8 + (arg0 * 4))) != 0) {
        return (arg1 * 0x24) + *((M2C_UNK *) ((s8 *) &data_020fe200 + (arg0 * 4)));
    }
    return 0;
}
