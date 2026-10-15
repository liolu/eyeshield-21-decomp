/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b9248(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d7a4;
extern s32 data_0212d7b4;
extern s32 data_0212d7b8;
extern s32 data_0212d7bc;

void func_020bc1a8(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b9248(data_0212d7b4);
    data_0212d7bc = 0;
    data_0212d7b8 = 0;
    data_0212d7a4 = 0;
    data_0212d7b4 = 0;
}
