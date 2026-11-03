/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    u16 lo;
    u16 hi;
    u32 p4;
    struct N *next;
} N;
typedef struct {
    u8 pad[0x10];
    N *head;
} H;
s32 func_020a8abc(N *);

s32 func_020a88fc(H **arg0, u32 v) {
    N *n = (*arg0)->head;
    for (; n != NULL; n = n->next) {
        if (n->lo <= v && v <= n->hi) {
            return func_020a8abc(n);
        }
    }
    return 0xFFFF;
}
