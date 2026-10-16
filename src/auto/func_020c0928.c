/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020bef48(void);
extern u32 func_020bef5c(u32 state);
extern void func_020befb8(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020c0928(u32 flags);
extern u32 func_020c0ca4(void);
extern u32 data_0212dbb4;
extern UnkSndCommand *data_0212dbc0;
extern UnkSndCommand *data_0212dbb0;
extern s32 data_0212dbc4;
extern s32 data_0212dbcc;
extern UnkSndCommand *data_0212dbd4[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020c0928(u32 flags) {
    u32 enabled = func_020bef48();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_0212dbb4 == func_020c0ca4()) {
            func_020bef5c(enabled);
            func_020befb8(100);
            enabled = func_020bef48();
        }
    } else if (data_0212dbb4 == func_020c0ca4()) {
        func_020bef5c(enabled);
        return 0;
    }

    head = data_0212dbd4[data_0212dbc4];
    data_0212dbc4++;
    if (data_0212dbc4 > 8) {
        data_0212dbc4 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_0212dbc0 != 0) {
        data_0212dbc0->next = head;
    } else {
        data_0212dbb0 = head;
    }
    data_0212dbc0 = tail;
    data_0212dbcc--;
    data_0212dbb4++;

    func_020bef5c(enabled);
    return head;
}
