/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s8 data_020fe588;

s32 func_020371d8(void) {
    s32 var_r0;
    s32 var_r3;
    s8 *var_r2;
    s8 temp_r1;

    var_r3 = 0;
    var_r2 = &data_020fe588;
    var_r0 = 0;
    do {
        temp_r1 = *var_r2;
        var_r3 += 1;
        var_r2 += 1;
        if (temp_r1 != 0) {
            var_r0 += 1;
        }
    } while (var_r3 < 0x31);
    return var_r0;
}
