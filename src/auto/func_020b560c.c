/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Arc {
    u8 pad0[8];
    u32 size;
    u8 pad1[0x2C];
    s32 base;
    u32 tbl[1];
} Arc;

extern u8 func_020b5700;
s32 func_020c0d84(Arc *, u32);
s32 func_020c0e04(Arc *);
s32 func_020b5354(s32, s32, void *, Arc *, u32);
s32 func_020b4b2c(s32, s32, s32, s32);
void func_020be478(s32, s32);
void func_020c0dcc(Arc *, u32, s32);

s32 func_020b560c(Arc *arc, u32 idx, s32 src, s32 heap) {
    s32 len;
    s32 start;
    s32 buf;
    u32 last;
    u32 *e;
    if (func_020c0d84(arc, idx) != 0) {
        return 1;
    }
    last  = func_020c0e04(arc);
    e     = (u32 *) ((u8 *) arc + (arc->base + idx) * 4);
    start = e[0x3C / 4];
    len   = ((idx < last - 1) ? e[0x40 / 4] : arc->size) - start;
    if (heap == 0) {
        return 0;
    }
    buf = func_020b5354(heap, len + 0x20, &func_020b5700, arc, idx);
    if (buf == 0) {
        return 0;
    }
    if (len != func_020b4b2c(src, buf, len, start)) {
        return 0;
    }
    func_020be478(buf, len);
    func_020c0dcc(arc, idx, buf);
    return 1;
}
