/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b473c();                      /* extern */
M2C_UNK func_020b66b8();                      /* extern */
M2C_UNK func_020be318();                   /* extern */
M2C_UNK func_020be388();                   /* extern */
extern s32 data_0212cce8;
extern M2C_UNK data_0212d190;

void func_020b672c(void *arg0) {
    func_020be388(&data_0212d190);
    if (data_0212cce8 != 0) {
        func_020be388(data_0212cce8 + 0x498);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_020b473c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    }
    func_020b66b8(arg0);
    func_020be318(&data_0212d190);
    if (data_0212cce8 == 0) {
        return;
    }
    func_020be318(data_0212cce8 + 0x498);
}
