/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020dec04;
extern M2C_UNK data_020dec60;
extern M2C_UNK data_020decbc;
extern M2C_UNK data_020ded18;
extern M2C_UNK data_020ded74;
extern M2C_UNK data_020dedd0;
extern M2C_UNK data_020dee2c;

M2C_UNK *func_02013de8(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0x29:
            return &data_020dec04;
        case 0x1:
            return &data_020dec04;
        case 0xE:
            return &data_020dec60;
        case 0x12:
            return &data_020decbc;
        case 0x63:
            return &data_020ded18;
        case 0x17:
            return &data_020ded74;
        case 0x22:
            return &data_020ded74;
        case 0x19:
            return &data_020dedd0;
        case 0x1D:
            return &data_020dee2c;
        default:
            return NULL;
    }
}
