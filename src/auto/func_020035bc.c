/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020035bc(void *arg0, s32 arg1) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC) == 0) {
        return (u16) (arg1 << 8);
    }
    return (u16) ((arg1 + 0x80) << 8);
}
