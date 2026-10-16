/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_020c58e8(void);
extern void func_020c5278(int param);
extern void func_020c4f48(int a, int b, int c, int d);
extern volatile int data_0212f824;
extern int data_0212f828;
int func_020c560c(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_020c58e8()) {
        return 1;
    }
    data_0212f824 = 0;
    func_020c5278(0x3006000);
    p = &data_0212f824;
    while (!*p) {
    }
    *p            = 0;
    data_0212f828 = 0;
    func_020c4f48(0, 2, 0, 0);
    func_020c5278((a & 0xff) | 0x2006100);
    func_020c5278((b & 0xffff) | 0x1010000);
    return 0;
}
