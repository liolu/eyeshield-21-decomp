#include "m2c.h"

M2C_UNK func_020aa45c(void *, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_020f9068;

void func_0209a254(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK), 0x4C)(arg0 + 0x34, 0);
    func_020aa45c(arg0 + 0x54, 0, 0, M2C_FIELD(arg0, s32 *, 0x10), 9, &data_020f9068);
}
