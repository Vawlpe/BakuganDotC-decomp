#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089b4428)
// WARNING: Removing unreachable block (ram,0x089b449c)

uint DONE_EntryPoint(uint arglen,void *argp)

{
  undefined4 user_main_thread;
  
  zz_sceKernelSetCompiledSdkVersion600_602(0x6020010);
  zz_sceKernelSetCompilerVersion(0x30306);
  user_main_thread =
       zz_sceKernelCreateThread
                 ("user_main",&UserMainThreadEntry,DAT_08ac4ecc,DAT_08ac4ec8 << 10,0x80000000,0);
  zz_sceKernelStartThread(user_main_thread,arglen,argp);
  return 0;
}

