/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b8ce4();                                /* extern */
extern M2C_UNK data_020dd620;
extern s32 data_0212d7a8;
extern s32 data_0212d7ac;

void func_020bc160(void) {
    s32 temp_r0;

    temp_r0       = func_020b8ce4();
    data_0212d7ac = temp_r0;
    data_0212d7a8 = *((u16 *) ((s8 *) &data_020dd620 + ((temp_r0 >> 4) * 2))) << 0xC;
}
