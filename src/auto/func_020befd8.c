/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020befc4();                            /* extern */
extern s16 data_0212db5c;

void func_020befd8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0212db5c = 1;
        return;
    }
    func_020befc4();
}
