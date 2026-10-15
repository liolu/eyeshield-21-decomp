/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd8fc(M2C_UNK);                     /* extern */
M2C_UNK func_020be45c(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020be494(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020be4b8();                            /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
M2C_UNK func_020befb8(M2C_UNK);                     /* extern */
s32 func_020c12fc(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_020c13b0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020c74d8(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0xE0) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xE0) | 2);
        if (func_020c13b0(0xB, 1) == 0) {
            do {
                func_020befb8(0x64);
            } while (func_020c13b0(0xB, 1) == 0);
        }
        func_020c74d8(arg0, NULL, 1);
    }
    func_020be494(M2C_FIELD(arg0, s32 **, 0), 0x40);
    func_020be4b8();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)            = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xE0) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xE0) | 0x20);
    do {

    } while (func_020c12fc(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r10 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020c12fc(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = func_020bef48();
    if (M2C_FIELD(arg0, volatile s32 *, 0xE0) & 0x20) {
        do {
            func_020bd8fc(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0xE0) & 0x20);
    }
    func_020bef5c(temp_r10_2);
    func_020be45c(M2C_FIELD(arg0, s32 **, 0), 0x40);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
