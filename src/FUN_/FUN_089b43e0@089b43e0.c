#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089b4428)
// WARNING: Removing unreachable block (ram,0x089b449c)

undefined4 FUN_089b43e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  zz_sceKernelSetCompiledSdkVersion600_602(0x6020010);
  zz_sceKernelSetCompilerVersion(0x30306);
  uVar1 = zz_sceKernelCreateThread
                    ("user_main",&LAB_089b44f4,DAT_08ac4ecc,DAT_08ac4ec8 << 10,0x80000000,0);
  zz_sceKernelStartThread(uVar1,param_1,param_2);
  return 0;
}

