#include "m2c.h"

void *func_0207d1d4();                              /* extern */
M2C_UNK func_0207d40c(s32, void *);                 /* extern */
M2C_UNK func_0207d52c(s32);                         /* extern */
M2C_UNK func_0207debc(void *);                      /* extern */

void *func_0207d0a0(void *arg0) {
    s32 temp_r0;
    void **temp_r6;
    void *temp_r4;

    temp_r4 = func_0207d1d4();
    if (arg0 == NULL) {
        return arg0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        return arg0;
    }
    M2C_FIELD(temp_r4, u16 *, 4) = (u16) (M2C_FIELD(temp_r4, u16 *, 4) - 1);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r6                      = M2C_FIELD(arg0, void ***, 0x18);
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_0207d52c(M2C_FIELD(arg0, s32 *, 0x20));
            break;
        case 8:
            func_0207d52c(M2C_FIELD(arg0, s32 *, 0x20));
            break;
        case 16:
            func_0207d52c(M2C_FIELD(arg0, s32 *, 0x20));
            func_0207d52c(M2C_FIELD(arg0, s32 *, 0x24));
            func_0207d52c(M2C_FIELD(arg0, s32 *, 0x28));
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    func_0207debc(arg0 + 0x10);
    func_0207d40c(M2C_FIELD(temp_r4, s32 *, 8), arg0);
    return *temp_r6;
}
