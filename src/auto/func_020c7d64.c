#include "m2c.h"

extern u16 data_02130148;

s32 func_020c7d64(void) {
    if (data_02130148 != 0) {
        return 0;
    }
    return 3;
}
