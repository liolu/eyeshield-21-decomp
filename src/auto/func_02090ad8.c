/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02090ad8(void *arg0, void *arg1) {
    s32 temp_r3;
    u16 temp_r2;
    void *temp_ip;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_ip = M2C_FIELD(arg0, void **, 0x54);
    temp_r3 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r2) {                              /* irregular */
        case 2:
            M2C_FIELD(temp_ip, s32 *, 0xC4) = (s32) (M2C_FIELD(temp_ip, s32 *, 0xC4) & temp_r3);
            break;
        case 0:
            M2C_FIELD(temp_ip, s32 *, 0xC4) = temp_r3;
            break;
        case 1:
            M2C_FIELD(temp_ip, s32 *, 0xC4) = (s32) (M2C_FIELD(temp_ip, s32 *, 0xC4) | temp_r3);
            break;
    }
    return arg1 + 8;
}
