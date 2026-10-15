/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b9154(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d7a8;
extern s32 data_0212d7ac;

void func_020bc094(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b9154(data_0212d7ac);
    data_0212d7ac = 0;
    data_0212d7a8 = 0;
}
