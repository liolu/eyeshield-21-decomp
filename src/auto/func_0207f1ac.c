/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020d8574;

s32 func_0207f1ac(s32 arg0) {
    s32 var_ip;
    s8 *var_r3;

    var_r3 = &data_020d8574;
    var_ip = 0;
loop_1:
    if (*var_r3 != *(s8 *) (arg0 + var_ip)) {
        return 0;
    }
    var_ip += 1;
    var_r3 += 1;
    if (var_ip >= 0x10) {
        return 1;
    }
    goto loop_1;
}