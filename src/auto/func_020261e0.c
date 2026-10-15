/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fdb30;
extern M2C_UNK data_020fe1f8;
extern M2C_UNK data_020fe200;

s32 func_020261e0(s32 arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip = arg0 * 4;
    if (*((M2C_UNK *) ((s8 *) &data_020fe1f8 + (arg0 * 4))) == 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020fdb30 + temp_ip)), s32 *, 0x28) >=
        (s32) (M2C_FIELD(((arg1 * 0x24) + *((M2C_UNK *) ((s8 *) &data_020fe200 + temp_ip))), s8 *, 5) * 0x64)) {
        return 1;
    }
    return 0;
}
