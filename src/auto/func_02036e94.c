#include "m2c.h"

M2C_UNK func_02037888();                            /* extern */
extern M2C_UNK data_020ee168;

void func_02036e94(s32 arg0) {
    s32 temp_r5;
    s32 var_r6;

    var_r6  = 0;
    temp_r5 = *((M2C_UNK *) ((s8 *) &data_020ee168 + (arg0 * 4)));
loop_1:
    if (*(s8 *) (temp_r5 + var_r6) == -1) {
        return;
    }
    func_02037888();
    var_r6 += 1;
    if (var_r6 >= 0x32) {
        return;
    }
    goto loop_1;
}