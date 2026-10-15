/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02129334;

void func_020ab678(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if (arg0 != NULL) {
        *arg0 = (s32) (u8) M2C_FIELD(&data_02129334, u32 *, 0xA0);
    }
    if (arg1 != NULL) {
        *arg1 = (s32) (u8) ((u32) M2C_FIELD(&data_02129334, u32 *, 0xA0) >> 8);
    }
    if (arg2 != NULL) {
        *arg2 = (s32) (u8) ((u32) M2C_FIELD(&data_02129334, u32 *, 0xA0) >> 0x10);
    }
    if (arg3 != NULL) {
        *arg3 = (s32) (u8) ((u32) M2C_FIELD(&data_02129334, u32 *, 0xA0) >> 0x18);
    }
}
