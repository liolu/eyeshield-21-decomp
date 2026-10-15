/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b9504(M2C_UNK);
void func_020bf398(M2C_UNK);

extern s32 data_020f94ec;
extern s32 data_0212d790;
extern s32 data_0212d794;
extern s32 data_0212d798;

void func_020bb310(void) {
    if (data_020f94ec != -1) {
        func_020bf398(data_020f94ec);
    }
    func_020b9504(data_0212d798);
    data_0212d798 = 0;
    data_0212d794 = 0;
    data_0212d790 = 0;
}
