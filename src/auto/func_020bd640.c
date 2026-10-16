/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
extern u32 func_020bef34(void);
extern void func_020befac(void);
extern void func_020bd640(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void func_020bd640(void *arg) {
    func_020bef34();
    while (1) {
        func_020befac();
    }
}
