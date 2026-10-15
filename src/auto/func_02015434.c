/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020fdb28;

s32 func_02015434(u32 arg0, s32 arg1) {
    if (arg1 == 0x3B) {
        data_020fdb28 = 0x17;
        return 0x17;
    }
    switch (arg0) {
        default:
            break;
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            data_020fdb28 = arg1;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            data_020fdb28 = arg1 - 0x24;
            break;
    }
    return data_020fdb28;
}
