/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Pos {
    s32 a;
    s32 b;
} Pos;
typedef struct Inst {
    u8 type;
    u8 pad;
    u16 idx;
    u16 key;
    u8 pad2[10];
} Inst;
void func_020c0fe4(Pos *);
s32 func_020c0e0c(void *, Inst *, Pos *);
s32 func_020b560c(void *, u16, s32, s32);
s32 func_020b553c(void *a, void *bank, u16 key, s32 c, s32 d) {
    Pos pos;
    Pos first;
    Inst inst;
    func_020c0fe4(&first);
    pos = first;
    if (bank == 0) {
        return 0;
    }
    if (func_020c0e0c(bank, &inst, &pos)) {
        do {
            if (inst.type == 1 && key == inst.key) {
                if (!func_020b560c(a, inst.idx, c, d)) {
                    return 0;
                }
            }
        } while (func_020c0e0c(bank, &inst, &pos));
    }
    return 1;
}
