/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bd73c();                            /* extern */
M2C_UNK func_020bd888(void *);                      /* extern */
M2C_UNK func_020bdc60(void *);                      /* extern */
M2C_UNK func_020be2c8(void *);                      /* extern */
M2C_UNK func_020befc4();                            /* extern */
extern void **data_0212d82c;
extern M2C_UNK data_0212d848;

void func_020bd964(void) {
    void *temp_r4;

    temp_r4 = *data_0212d82c;
    func_020be2c8(temp_r4);
    func_020bdc60(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_0212d848 + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020bd888(temp_r4 + 0x90);
    func_020bd73c();
    func_020befc4();
}
