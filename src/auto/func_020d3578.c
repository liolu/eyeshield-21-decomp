/* compiler: 1.2/sp3 */
#include "m2c.h"
void *func_020d3768(void *, void *);
void func_020d3578(void *arg0, void *arg1) {
    u8 *src;
    u8 flag;
    s32 f40;
    s32 f80;
    void *ret;
    src                           = (u8 *) *(void **) ((u8 *) arg1 + 4);
    flag                          = src[0];
    f40                           = flag & 0x40;
    *((s8 *) arg0 + 0x6B)         = f40 != 0;
    *((s8 *) arg0 + 0x6A)         = (flag & 0x20) != 0;
    f80                           = flag & 0x80;
    *((s8 *) arg0 + 0x6C)         = f80 != 0;
    *(u16 *) ((u8 *) arg0 + 0x68) = (u16) (src[1] * 0x10);
    *(u16 *) ((u8 *) arg0 + 0x68) = (u16) (*(u16 *) ((u8 *) arg0 + 0x68) | 0x4000);
    ret                           = func_020d3768(src + 2, (u8 *) arg0 + 0x60);
    if (f40 != 0) {
        func_020d3768(ret, (u8 *) arg0 + 0x64);
    }
    if (f40 != 0) {
        if (f80 != 0) {
            *(s32 *) ((u8 *) arg0 + 0x18) = *(s32 *) ((u8 *) arg0 + 0x38);
        } else {
            *(s32 *) ((u8 *) arg0 + 0x18) = *(s32 *) ((u8 *) arg0 + 0x48);
        }
        return;
    }
    *(s32 *) ((u8 *) arg0 + 0x18) = *(s32 *) ((u8 *) arg0 + 0x14);
}
