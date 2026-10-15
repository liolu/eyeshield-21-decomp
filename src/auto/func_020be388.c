/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd8fc(void *);                      /* extern */
M2C_UNK func_020be230(void *, void *);              /* extern */
s32 func_020bef48();                                /* extern */
M2C_UNK func_020bef5c(s32);                         /* extern */
extern M2C_UNK data_0212d834;

void func_020be388(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_020bef48();
    temp_r7 = M2C_FIELD(&data_0212d834, void **, 8);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 4) = temp_r7;
        M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        func_020be230(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x78) = arg0;
        func_020bd8fc(arg0);
        M2C_FIELD(temp_r7, void **, 0x78) = NULL;
        goto loop_1;
    }
    func_020bef5c(temp_r4);
}
