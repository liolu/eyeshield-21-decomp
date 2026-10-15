/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020f9de4;
extern s32 data_020fb694;
extern s32 data_020fb6e0;

void func_02056b24(void *arg0) {
    if (data_020fb694 & 2) {
        if ((data_020fb6e0 == 2) && (M2C_FIELD(&data_020f9de4, s32 *, 0x20) == 0x1F5)) {
            M2C_FIELD(&data_020f9de4, s32 *, 0x2C) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 8)              = 5;
        M2C_FIELD(&data_020f9de4, s32 *, 0x2C) = 0;
        return;
    }
    if (data_020fb6e0 == 2) {
        M2C_FIELD(&data_020f9de4, s32 *, 0x2C) = 3;
        return;
    }
    M2C_FIELD(&data_020f9de4, s32 *, 0x2C) = 2;
}
