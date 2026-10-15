#include "m2c.h"

M2C_UNK func_020a2418(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02127370;

void func_020a2350(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02127370, s32 *, 0) = arg0;
    M2C_FIELD(&data_02127370, s32 *, 4) = arg1;
    func_020a2418(&data_02127370);
}
