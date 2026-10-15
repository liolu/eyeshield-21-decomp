/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb620;

void func_020789f8(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020fb620, s32 *, 0x1C) = (s32) ((arg0 & 0x1FF) | (0x01FF0000 & (arg1 << 0x10)));
}
