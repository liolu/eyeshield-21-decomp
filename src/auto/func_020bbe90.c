/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b9014(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d7a0;
extern s32 data_0212d7b0;

void func_020bbe90(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b9014(data_0212d7a0);
    data_0212d7a0 = 0;
    data_0212d7b0 = 0;
}
