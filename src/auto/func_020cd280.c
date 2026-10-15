/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_020f9874;

s32 func_020cd280(void) {
    u32 temp_r0;

    temp_r0       = (data_020f9874 * 0x41C64E6D) + 0x3039;
    data_020f9874 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
