/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b944c(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d788;
extern s32 data_0212d78c;

void func_020bb1d4(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b944c(data_0212d78c);
    data_0212d78c = 0;
    data_0212d788 = 0;
}
