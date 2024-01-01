#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f04c(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  puVar3 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar6 = *puVar3;
  uVar4 = FUN_089c9d1c(param_1);
  fVar7 = (float)FUN_089c9e3c(param_1);
  uVar2 = FUN_089c9d1c(param_1);
  iVar5 = FUN_08860188(uVar6);
  bVar1 = iVar5 == 0;
  fVar7 = fVar7 * 0.01;
  if ((iVar5 != 0) && (uVar4 < 6)) {
    iVar5 = iVar5 + 0x434;
    if (uVar4 == 1) {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar8 <= fVar7) {
        bVar1 = true;
      }
    }
    else if (uVar4 == 2) {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar8 == fVar7) {
        bVar1 = true;
      }
    }
    else if (uVar4 == 3) {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar8 != fVar7) {
        bVar1 = true;
      }
    }
    else if (uVar4 == 4) {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar7 < fVar8) {
        bVar1 = true;
      }
    }
    else if (uVar4 == 5) {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar7 <= fVar8) {
        bVar1 = true;
      }
    }
    else {
      fVar8 = (float)FUN_08887cdc(iVar5);
      if (fVar8 < fVar7) {
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar2;
    return 3;
  }
  return 0;
}

