#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a204bc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80450001;
  if ((DAT_08af13ac != -1) && (uVar1 = 0x8045000a, param_2 < 0x4000)) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a1fa88(param_1,param_2);
    uVar1 = FUN_08a234a0(param_1,uVar1);
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar1;
}

