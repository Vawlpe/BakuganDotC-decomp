#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a20814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
  uVar1 = FUN_08a20d08(param_1,param_2,0xff,param_3,0,0,param_4,param_5);
  zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  return uVar1;
}

