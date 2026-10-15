/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fb694;
extern s32 data_020fb6e0;

void func_02057540(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (data_020fb6e0 == 2) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    } else if (M2C_FIELD(&data_020fb694, s32 *, 0) & 2) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    } else {
        if (data_020fb6e0 == 1) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x44) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(&data_020fb694, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(&data_020fb694, s32 *, 0x48);
}
