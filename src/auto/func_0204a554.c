/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ff654;

void func_0204a554(void) {
    M2C_FIELD(&data_020ff654, s32 *, 0x1AC) = (s32) (M2C_FIELD(&data_020ff654, s32 *, 0x1AC) + 1);
    M2C_FIELD(&data_020ff654, s32 *, 0x70)  = (s32) (M2C_FIELD(&data_020ff654, s32 *, 0x70) - 1);
    M2C_FIELD(&data_020ff654, s32 *, 0x130) = (s32) (M2C_FIELD(&data_020ff654, s32 *, 0x130) - 1);
}
