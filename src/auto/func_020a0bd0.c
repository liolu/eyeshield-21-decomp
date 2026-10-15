#include "m2c.h"

s32 func_020b8c44();                                /* extern */
s32 func_020b8c6c();                                /* extern */
s32 func_020b8c94();                                /* extern */
s32 func_020b8ca8();                                /* extern */
s32 func_020b8cbc();                                /* extern */
s32 func_020b8ce4();                                /* extern */
s32 func_020b8cf8();                                /* extern */
s32 func_020b8d0c();                                /* extern */
s32 func_020b8d30();                                /* extern */
s32 func_020b8d54();                                /* extern */
s32 func_020b8d68();                                /* extern */

void func_020a0bd0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = func_020b8d68();
    M2C_FIELD(arg0, s32 *, 4)    = func_020b8d54();
    M2C_FIELD(arg0, s32 *, 8)    = func_020b8d30();
    M2C_FIELD(arg0, s32 *, 0xC)  = func_020b8d0c();
    M2C_FIELD(arg0, s32 *, 0x10) = func_020b8ca8();
    M2C_FIELD(arg0, s32 *, 0x14) = func_020b8c94();
    M2C_FIELD(arg0, s32 *, 0x18) = func_020b8c6c();
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020b8c44();
    M2C_FIELD(arg0, s32 *, 0x20) = func_020b8cf8();
    M2C_FIELD(arg0, s32 *, 0x24) = func_020b8ce4();
    M2C_FIELD(arg0, s32 *, 0x28) = func_020b8cbc();
}
