#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a20168(uint param_1,uint param_2,undefined4 param_3)

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
  undefined local_30;
  undefined local_2f;
  
  uVar5 = 0;
  if ((DAT_08af13ac != -1) && (param_1 < 0x10 && param_2 < 0x80)) {
    local_30 = (undefined)param_1;
    uVar9 = 1;
    local_2f = (undefined)param_2;
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar5 = 0;
    uVar1 = FUN_08a29018();
    uVar2 = FUN_08a22f9c(&local_30,param_3);
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

