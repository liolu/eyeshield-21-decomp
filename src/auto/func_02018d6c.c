#include "m2c.h"

extern void *data_020fdb4c;

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02018d6c(void *arg0) {
    void *temp_r3;

    temp_r3                                  = data_020fdb4c + 0x24;
    *(M2C_S12 *) ((s8 *) data_020fdb4c + 36) = *(M2C_S12 *) ((s8 *) arg0 + 0);
}
