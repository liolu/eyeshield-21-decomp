/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020fefcc;

void *func_02088b80(void *arg0, void *arg1) {
    s32 temp_r3;
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    temp_r3 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r2) {                              /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(&data_020fefcc, u16 *, 6) & temp_r3);
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(&data_020fefcc, u16 *, 2) & temp_r3);
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(&data_020fefcc, u16 *, 4) & temp_r3);
            break;
    }
    return arg1 + 8;
}
