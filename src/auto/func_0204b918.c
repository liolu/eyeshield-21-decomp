#include "m2c.h"

M2C_UNK func_02001360(M2C_UNK);                     /* extern */
M2C_UNK func_0207708c(M2C_UNK);                     /* extern */
M2C_UNK func_0207710c(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020f3a3c;

void func_0204b918(void *arg0) {
    func_0207708c(1);
    func_0207710c(1, &data_020f3a3c, 4);
    func_02001360(0x17);
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = -1;
    M2C_FIELD(arg0, s32 *, 0x6C) = -1;
    M2C_FIELD(arg0, s32 *, 0x70) = -1;
}
