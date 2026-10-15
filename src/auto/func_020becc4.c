#include "m2c.h"

extern u16 data_0212db30;

void func_020becc4(s32 arg0) {
    data_0212db30 |= 1 << arg0;
}
