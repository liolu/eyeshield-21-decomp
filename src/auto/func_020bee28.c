/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc63c(M2C_UNK);                     /* extern */
M2C_UNK func_020bc7cc(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020becc4(M2C_UNK);                     /* extern */
extern u16 data_0212db34;
extern s32 data_0212db38;
extern M2C_UNK data_0212db3c;
extern M2C_UNK func_020beda0;

void func_020bee28(void) {
    if (data_0212db34 != 0) {
        return;
    }
    data_0212db34 = 1;
    func_020becc4(0);
    M2C_FIELD(&data_0212db3c, s32 *, 0) = 0;
    M2C_FIELD(&data_0212db3c, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020bc7cc(8, &func_020beda0);
    func_020bc63c(8);
    data_0212db38 = 0;
}
