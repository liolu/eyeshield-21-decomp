#include "m2c.h"

extern s32 data_020fed00;
extern M2C_UNK data_020fed04;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02075068(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r0_2;

    var_r1 = arg1;
    if ((var_r1 < 0) || (var_r1 >= 5)) {
        var_r1 = data_020fed00;
    }
    temp_r0                        = (var_r1 * 0x88) + (s32) &data_020fed04;
    temp_r0_2                      = temp_r0 + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 0) = *(M2C_S12 *) ((s8 *) temp_r0 + 12);
}
