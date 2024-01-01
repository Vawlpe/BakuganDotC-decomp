#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a20958(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80450001;
  if (DAT_08af13ac != -1) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a29018();
    uVar2 = FUN_08a22c64(param_1,uVar1 >> (param_1 & 0x1f) & 1);
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar2;
}

