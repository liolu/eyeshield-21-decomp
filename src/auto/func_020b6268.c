/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020b3ef8(s32, s32, s32);
s32 func_020b3d8c(s32, s32);
s32 func_020b5d10(s32, s32, s32, s32, s32 *);
void func_020b3eec(s32);
s32 func_020b5ee0(s32, s32, s32, s32, s32 *);
void func_020b3e90(s32, s32, s32, s32);
void func_020b429c(s32, s32);
void func_020b4224(s32, s32);
void func_020b4208(s32, s32);

s32 func_020b6268(s32 a0, s32 a1, s32 a2, s32 a3, u8 *a4, s32 a5) {
    s32 seq;
    s32 heap;
    s32 v4;
    s32 v8;
    seq = func_020b3ef8(a0, a1, a3);
    if (seq == 0) {
        return 0;
    }
    heap = func_020b3d8c(a1, seq);
    if (func_020b5d10(a2, 6, heap, 0, &v8) != 0) {
        func_020b3eec(seq);
        return 0;
    }
    if (func_020b5ee0(a5, 1, heap, 0, &v4) != 0) {
        func_020b3eec(seq);
        return 0;
    }
    func_020b3e90(seq, v4 + *(s32 *) (v4 + 0x18), 0, v8);
    func_020b429c(a0, a4[6]);
    func_020b4224(a0, a4[7]);
    func_020b4208(a0, a5);
    return 1;
}
