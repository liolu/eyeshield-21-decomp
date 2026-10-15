#include "m2c.h"

M2C_UNK func_0209a254(void *);                      /* extern */
M2C_UNK func_0209a2a0(void *);                      /* extern */
M2C_UNK func_0209a410();                            /* extern */
s32 func_0209a468(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_020f907c;

s32 func_0209a4c4(void *arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0x30) = func_0209a468(arg0 + 0x24, &data_020f907c);
    if (M2C_FIELD(arg0, volatile s32 *, 0x30) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, volatile s32 *, 4)    = 1;
    M2C_FIELD(arg0, volatile s32 *, 8)    = 1;
    M2C_FIELD(arg0, volatile s32 *, 0xC)  = 0xF;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = 0xF;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = 1;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = 1;
    func_0209a410();
    func_0209a2a0(arg0);
    func_0209a254(arg0);
    return 1;
}
