#include "m2c.h"

M2C_UNK func_02073010(s32, s32, M2C_UNK);           /* extern */
s32 func_02073d44(s32);                             /* extern */
s32 func_020af668();                                /* extern */
M2C_UNK func_020c2b10(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d8540;
extern M2C_UNK data_020e0ef0;
extern M2C_UNK data_020e141c;
extern M2C_UNK data_020e1424;

s32 func_0201ca88(s32 arg0) {
    if (arg0 < 7) {
        func_020c2b10(&data_020e141c);
    } else {
        func_020c2b10(&data_020e1424);
    }
    func_02073010(arg0 + 0x1000, *((M2C_UNK *) ((s8 *) &data_020e0ef0 + (arg0 * 4))), 0x100);
    func_020c2b10(&data_020d8540);
    if (func_02073d44(arg0 + 0x1000) == 0) {
        return 0;
    }
    return func_020af668();
}
