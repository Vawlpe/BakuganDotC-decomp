#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a20294(uint param_1,uint param_2,undefined4 param_3)

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
  if (((DAT_08af13ac != -1) && (param_1 < 0x10)) && (param_2 < 2)) {
    zz_sceKernelLockLwMutex(&DAT_08afdaa0,1,0);
    uVar1 = FUN_08a230c8(param_1,param_3);
    uVar2 = FUN_08a29018();
    uVar9 = 1;
    uVar5 = 0;
    uVar7 = 0;
    if (DAT_08afda9c != 0) {
      do {
        uVar6 = uVar2 & 1;
        uVar8 = uVar7 + 1;
        uVar3 = uVar1 & 1;
        uVar2 = uVar2 >> 1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 >> 1;
        if (uVar3 != 0) {
          iVar4 = FUN_08a22dbc(uVar7,uVar6,param_2);
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

