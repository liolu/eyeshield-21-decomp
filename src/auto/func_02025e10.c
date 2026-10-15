#include "m2c.h"

s32 func_02025e10(s32 arg0, s32 *arg1, void *arg2) {
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    s8 temp_r0_5;
    s8 temp_r0_6;

    temp_r0 = M2C_FIELD(arg2, s8 *, 5);
    switch (temp_r0) {                              /* switch 1 */
        default:                                        /* switch 1 */
            break;
        case 1:                                         /* switch 1 */
            temp_r0_2 = M2C_FIELD(arg2, s8 *, 0x1A);
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 3:                                     /* switch 2 */
                    *arg1 = 0x41F02;
                    break;
                case 0:                                     /* switch 2 */
                    *arg1 = 0x40102;
                    break;
                case 1:                                     /* switch 2 */
                    *arg1 = 0x41002;
                    break;
            }
            break;
        case 2:                                         /* switch 1 */
            temp_r0_3 = M2C_FIELD(arg2, s8 *, 0x1A);
            switch (temp_r0_3) {                        /* switch 3; irregular */
                case 3:                                     /* switch 3 */
                    *arg1 = 0x42202;
                    break;
                case 0:                                     /* switch 3 */
                    *arg1 = 0x40402;
                    break;
                case 1:                                     /* switch 3 */
                    *arg1 = 0x41302;
                    break;
            }
            break;
        case 3:                                         /* switch 1 */
            temp_r0_4 = M2C_FIELD(arg2, s8 *, 0x1A);
            switch (temp_r0_4) {                        /* switch 4; irregular */
                case 3:                                     /* switch 4 */
                    *arg1 = 0x42502;
                    break;
                case 0:                                     /* switch 4 */
                    *arg1 = 0x40702;
                    break;
                case 1:                                     /* switch 4 */
                    *arg1 = 0x41602;
                    break;
            }
            break;
        case 4:                                         /* switch 1 */
            temp_r0_5 = M2C_FIELD(arg2, s8 *, 0x1A);
            switch (temp_r0_5) {                        /* switch 5; irregular */
                case 3:                                     /* switch 5 */
                    *arg1 = 0x42802;
                    break;
                case 0:                                     /* switch 5 */
                    *arg1 = 0x40A02;
                    break;
                case 1:                                     /* switch 5 */
                    *arg1 = 0x41902;
                    break;
            }
            break;
        case 5:                                         /* switch 1 */
            temp_r0_6 = M2C_FIELD(arg2, s8 *, 0x1A);
            switch (temp_r0_6) {                        /* switch 6; irregular */
                case 3:                                     /* switch 6 */
                    *arg1 = 0x42B02;
                    break;
                case 0:                                     /* switch 6 */
                    *arg1 = 0x40D02;
                    break;
                case 1:                                     /* switch 6 */
                    *arg1 = 0x41C02;
                    break;
            }
            break;
    }
    return 1;
}
