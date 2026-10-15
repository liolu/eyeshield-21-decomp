/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020fe5bc;
extern s32 data_021234c0;

void func_02037920(void) {
    s32 var_ip;
    s8 *var_r3;

    var_r3 = &data_020fe5bc;
    var_ip = 0;
    do {
        M2C_FIELD((data_021234c0 + var_ip), s8 *, 0xE92) = 0;
        var_ip += 1;
        *var_r3 = 0;
        var_r3 += 1;
    } while (var_ip < 0x32);
}
