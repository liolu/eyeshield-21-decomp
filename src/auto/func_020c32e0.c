/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6324(u16);                         /* extern */
M2C_UNK func_020c6344(u16);                         /* extern */
extern s32 data_0212f77c;

s32 func_020c32e0(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020c6344((u16) data_0212f77c);
            return 0;
        case 10:
            func_020c6324((u16) data_0212f77c);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
