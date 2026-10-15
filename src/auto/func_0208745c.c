#include "m2c.h"

void func_0208745c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    switch (arg4) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            M2C_FIELD(arg0, volatile s32 *, 0x44) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
            M2C_FIELD(arg0, volatile s32 *, 0x48) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x38);
            M2C_FIELD(arg0, volatile s32 *, 0x4C) = arg1;
            M2C_FIELD(arg0, volatile s32 *, 0x50) = arg2;
            break;
        case 1:                                         /* switch 1 */
            M2C_FIELD(arg0, volatile s32 *, 0x44) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
            M2C_FIELD(arg0, volatile s32 *, 0x48) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x38);
            M2C_FIELD(arg0, volatile s32 *, 0x4C) = arg1;
            M2C_FIELD(arg0, volatile s32 *, 0x50) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x38);
            break;
        case 2:                                         /* switch 1 */
            M2C_FIELD(arg0, volatile s32 *, 0x44) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
            M2C_FIELD(arg0, volatile s32 *, 0x48) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x38);
            M2C_FIELD(arg0, volatile s32 *, 0x4C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
            M2C_FIELD(arg0, volatile s32 *, 0x50) = arg2;
            break;
    }
    switch (arg3) {                                 /* switch 2; irregular */
        case 2:                                         /* switch 2 */
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = 8;
            break;
        case 0:                                         /* switch 2 */
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = 2;
            break;
        case 1:                                         /* switch 2 */
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = 4;
            break;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x2C) = arg5;
    M2C_FIELD(arg0, volatile s32 *, 0x28) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x3C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x44);
    M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x3C);
    M2C_FIELD(arg0, volatile s32 *, 0x40) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x48);
    M2C_FIELD(arg0, volatile s32 *, 0x38) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x40);
}
