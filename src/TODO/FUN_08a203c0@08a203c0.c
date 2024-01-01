#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a203c0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = 0;
  if (DAT_08af13ac != -1) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a29018();
    uVar2 = FUN_08a23044(param_1);
    uVar9 = 1;
    uVar5 = 0;
    uVar7 = 0;
    if (DAT_08afda9c != 0) {
      do {
        uVar6 = uVar1 & 1;
        uVar3 = uVar2 & 1;
        uVar8 = uVar7 + 1;
        uVar1 = uVar1 >> 1;
        if (uVar2 == 0) break;
        uVar2 = uVar2 >> 1;
        if (uVar3 != 0) {
          iVar4 = FUN_08a22c64(uVar7,uVar6);
          if (iVar4 == 0) {
            uVar5 = uVar5 | uVar9;
          }
        }
        uVar9 = uVar9 << 1;
        uVar7 = uVar8;
      } while (uVar8 < DAT_08afda9c);
    }
    zz_sceKernelUnlockLwMutex(&DAT_08afdaa0,1);
  }
  return uVar5;
}

