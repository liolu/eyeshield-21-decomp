/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s8 data_020fe5bc;

s32 func_0203781c(void) {
    s32 var_r0;
    s32 var_r3;
    s8 *var_r2;
    s8 temp_r1;

    var_r3 = 0;
    var_r2 = &data_020fe5bc;
    var_r0 = 0;
    do {
        temp_r1 = *var_r2;
        var_r3 += 1;
        var_r2 += 1;
        if (temp_r1 != 0) {
            var_r0 += 1;
        }
    } while (var_r3 < 0x32);
    return var_r0;
}
