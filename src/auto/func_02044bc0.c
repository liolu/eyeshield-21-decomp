#include "m2c.h"

M2C_UNK func_02078f4c(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020ff5f0;
extern M2C_UNK data_020ff640;

void func_02044bc0(void *arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x34) - 0x60);
    func_02078f4c(&data_020ff5f0, 0, (s32) M2C_FIELD(arg0, volatile s32 *, 0x34) >> 8);
    func_02078f4c(&data_020ff640, 0, (s32) M2C_FIELD(arg0, volatile s32 *, 0x34) >> 8);
}
