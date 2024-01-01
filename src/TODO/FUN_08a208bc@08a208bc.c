#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a208bc(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_08af13ac == -1) || (0xf < param_1)) {
    uVar1 = 0;
  }
  else {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a231c8(param_1,param_2);
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar1;
}

