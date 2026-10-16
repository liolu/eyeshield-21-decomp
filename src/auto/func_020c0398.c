/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020bef48(void);
extern u32 func_020bef5c(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020c0398(void);
extern UnkSndCommand *data_0212dbc0;
extern UnkSndCommand *data_0212dbb0;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020c0398(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020bef48();

    cmd = data_0212dbb0;
    if (cmd == 0) {
        func_020bef5c(enabled);
        return 0;
    }
    data_0212dbb0 = cmd->next;
    if (data_0212dbb0 == 0) {
        data_0212dbc0 = 0;
    }
    func_020bef5c(enabled);
    return cmd;
}
