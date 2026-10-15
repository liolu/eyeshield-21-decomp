#include "m2c.h"

extern s32 data_0212c2d0;

void func_020b3a08(s32 arg0) {
    data_0212c2d0 &= ~(1 << arg0);
}
