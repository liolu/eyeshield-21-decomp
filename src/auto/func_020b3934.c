/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef signed char s8;
typedef struct CallbackNode {
    void (*func)(void);
    void *arg;
    struct CallbackNode *next;
} CallbackNode;
extern s8 data_0212c2a8;
extern u32 data_0212c2b0;
extern u32 data_0212c2ac;
extern CallbackNode data_0212c2c0;
extern CallbackNode data_0212c2b4;
extern void func_020b3854(void);
extern void func_020b3848(void);
extern void func_020c0304(void);
extern void func_020c4e1c(CallbackNode *node);
extern void func_020c4e04(CallbackNode *node);
extern void *func_020b39dc(void);
extern void func_020b4aa4(void);
extern void func_020b4128(void);

/* SoundSystem_Init from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/sound/sound_system_init.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
void func_020b3934(void) {
    if (data_0212c2b0 != 0) {
        return;
    }
    data_0212c2b0 = 1;
    func_020c0304();
    data_0212c2b4.func = func_020b3854;
    data_0212c2b4.arg  = ((void *) 0);
    data_0212c2c0.func = func_020b3848;
    data_0212c2c0.arg  = ((void *) 0);
    func_020c4e1c(&data_0212c2b4);
    func_020c4e04(&data_0212c2c0);
    func_020b39dc();
    func_020b4aa4();
    func_020b4128();
    data_0212c2a8 = -1;
    data_0212c2ac = 1;
}
