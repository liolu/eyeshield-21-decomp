#include "m2c.h"

extern s32 data_0212cca8;

s32 func_020b4e90(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0212cca8;
    data_0212cca8 = arg0;
    return temp_r2;
}
