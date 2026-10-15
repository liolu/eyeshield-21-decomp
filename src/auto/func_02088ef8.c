#include "m2c.h"

void *func_02088ef8(void *arg0, void *arg1) {
    void *temp_r1;

    temp_r1                        = arg1 + 4;
    M2C_FIELD(arg0, s32 *, 0x3C)   = (s32) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, void **, 0x40) = temp_r1;
    return temp_r1;
}
