/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a2ee0();                            /* extern */
extern M2C_UNK *data_020f9168;
extern M2C_UNK *data_020f916c;
extern M2C_UNK data_021273a0;
extern M2C_UNK func_020a2f34;
extern M2C_UNK func_020a2f8c;

void func_020a3070(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_021273a0, s32 *, 8)    = arg0;
    M2C_FIELD(&data_021273a0, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_021273a0, s32 *, 0x10) = arg2;
    func_020a2ee0();
    if (arg3 == 0) {
        return;
    }
    data_020f9168 = &func_020a2f8c;
    data_020f916c = &func_020a2f34;
}
