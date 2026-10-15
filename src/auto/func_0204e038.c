#include "m2c.h"

M2C_UNK func_0204d13c();                            /* extern */
s32 func_0204d5bc(void *);                          /* extern */
M2C_UNK func_0204dbb8(void *);                      /* extern */
M2C_UNK func_0204dd90(void *);                      /* extern */
M2C_UNK func_0207708c(M2C_UNK);                     /* extern */
M2C_UNK func_02077580(M2C_UNK);                     /* extern */
M2C_UNK func_02078e0c(M2C_UNK);                     /* extern */
M2C_UNK func_02078f4c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207d0a0(s32);                         /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */
s32 func_0207e0e8();                                /* extern */
extern M2C_UNK data_020ff604;

s32 func_0204e038(void *arg0, s32 arg1) {
    u32 temp_r0;

    switch (arg1) {                                 /* switch 1; irregular */
        case 6:                                         /* switch 1 */
            func_0204d13c();
            func_0207da08();
            return 0;
        default:                                        /* switch 1 */
            return 0;
        case 1:                                         /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0) = 3;
            func_0207da08();
        /* fallthrough */
        case 0:                                         /* switch 1 */
            temp_r0 = M2C_FIELD(arg0, s32 *, 0) + 1;
            switch (temp_r0) {                          /* switch 2 */
                default:                                    /* switch 2 */
                    break;
                case 1:                                     /* switch 2 */
                    func_0204dd90(arg0);
                    M2C_FIELD(arg0, s32 *, 0) = 1;
                    break;
                case 2:                                     /* switch 2 */
                    if (func_0207e0e8() == 0) {
                        func_0204dbb8(arg0);
                        if (func_0204d5bc(arg0) != 0) {
                            M2C_FIELD(arg0, s32 *, 0) = 2;
                        }
                    }
                    break;
                case 3:                                     /* switch 2 */
                    func_0204dbb8(arg0);
                    if (func_0207e0e8() == 0) {
                        M2C_FIELD(arg0, s32 *, 0) = 3;
                    }
                    break;
                case 0:                                     /* switch 2 */
                case 4:                                     /* switch 2 */
                    func_02078f4c(&data_020ff604, 0, 0);
                    func_0207708c(1);
                    func_02077580(1);
                    func_02078e0c(0);
                    func_02078e0c(1);
                    func_02078e0c(4);
                    func_0207d0a0(M2C_FIELD(arg0, s32 *, 0xEC));
                    func_0207dbc0(arg0);
                    break;
            }
            return 0;
    }
}
