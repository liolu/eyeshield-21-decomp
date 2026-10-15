/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c7d64();                                /* extern */

u16 func_020c8374(void) {
    if (func_020c7d64() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
