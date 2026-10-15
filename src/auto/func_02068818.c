#include "m2c.h"

M2C_UNK func_0206807c();                            /* extern */
M2C_UNK func_020685d4(void *);                      /* extern */
M2C_UNK func_02068774(void *);                      /* extern */
M2C_UNK func_0207da08();                            /* extern */
M2C_UNK func_0207dbc0(void *);                      /* extern */

s32 func_02068818(void *arg0, s32 arg1) {
    u32 temp_r0;

    switch (arg1) {                                 /* switch 1; irregular */
        case 6:                                         /* switch 1 */
            func_0206807c();
            func_0207da08();
            return 0;
        default:                                        /* switch 1 */
            return 0;
        case 1:                                         /* switch 1 */
            M2C_FIELD(arg0, volatile s32 *, 0) = 7;
            func_0207da08();
        /* fallthrough */
        case 0:                                         /* switch 1 */
            temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0) + 1;
            switch (temp_r0) {                          /* switch 2 */
                default:                                    /* switch 2 */
                    break;
                case 1:                                     /* switch 2 */
                    func_02068774(arg0);
                    M2C_FIELD(arg0, volatile s32 *, 0) = 2;
                    break;
                case 3:                                     /* switch 2 */
                    M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x14) - 1);
                    if ((s32) M2C_FIELD(arg0, volatile s32 *, 0x14) <= 0) {
                        M2C_FIELD(arg0, volatile u16 *, 4)    = (u16) (M2C_FIELD(arg0, volatile u16 *, 4) | 0x1800);
                        M2C_FIELD(arg0, volatile s32 *, 0x14) = 0;
                        M2C_FIELD(arg0, volatile s32 *, 0)    = 1;
                    }
                    break;
                case 2:                                     /* switch 2 */
                    func_020685d4(arg0);
                    break;
                case 5:                                     /* switch 2 */
                    M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x14) + 1);
                    if ((s32) M2C_FIELD(arg0, volatile s32 *, 0x14) >= 0xC) {
                        M2C_FIELD(arg0, volatile s32 *, 0x18) = (s32) M2C_FIELD(arg0, volatile s32 *, 8);
                    }
                    break;
                case 0:                                     /* switch 2 */
                case 8:                                     /* switch 2 */
                    func_0207dbc0(arg0);
                    break;
            }
            return 0;
    }
}
