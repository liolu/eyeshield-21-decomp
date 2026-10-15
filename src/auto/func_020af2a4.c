/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020abc68();                            /* extern */
M2C_UNK func_020ba53c();                            /* extern */

void func_020af2a4(void) {
    func_020ba53c();
    func_020abc68();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
