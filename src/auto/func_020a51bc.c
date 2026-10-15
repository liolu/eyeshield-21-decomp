/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a7a1c();                            /* extern */
extern s32 data_02128380;
extern void *data_02128384;

void func_020a51bc(void) {
    s32 temp_r3;

    *(s32 *) 0x04000448 = 1;
    temp_r3             = M2C_FIELD(data_02128384, s32 *, 0x7C);
    if (temp_r3 != 0) {
        if (temp_r3 & 1) {
            data_02128380 = 0;
        }
        if (temp_r3 & 2) {
            M2C_FIELD(data_02128384, s32 *, 0x74) = 0;
            func_020a7a1c();
        }
        M2C_FIELD(data_02128384, s32 *, 0x7C) = 0;
    }
    data_02128384 = NULL;
}
