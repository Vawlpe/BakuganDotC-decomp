#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a226cc(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_90 [32];
  
  puVar2 = local_90;
  uVar3 = 0xffffffff;
  if (DAT_08af13b0 != -1) {
    FUN_08a23880();
    zz_sceKernelLockLwMutex(&DAT_08afebfc,1,0);
    iVar1 = FUN_08a28de4(param_1);
    DAT_08afebf8 = 0;
    zz_sceKernelUnlockLwMutex(&DAT_08afebfc,1);
    uVar3 = 0xffffffff;
    if (-1 < iVar1) {
      FUN_08a29240(local_90);
      if (0 < DAT_08afdee4) {
        puVar4 = &DAT_08afdefc;
        iVar1 = DAT_08afdee4;
        do {
          uVar3 = *puVar2;
          iVar1 = iVar1 + -1;
          puVar2 = puVar2 + 1;
          *puVar4 = uVar3;
          puVar4 = puVar4 + 0x1a;
        } while (iVar1 != 0);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

