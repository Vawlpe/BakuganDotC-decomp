#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a20b0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80450001;
  if (DAT_08af13ac != -1) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a2333c(param_1,param_2);
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar1;
}

