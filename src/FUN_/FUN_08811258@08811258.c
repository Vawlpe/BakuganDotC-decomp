#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811258(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  sVar2 = FUN_089c9d1c();
  uVar4 = FUN_089c9d1c(param_1);
  iVar5 = FUN_088ab618(uVar4,(int)sVar2);
  iVar6 = FUN_089c9da8(param_1);
  uVar7 = FUN_089c9d1c(param_1);
  fVar8 = (float)FUN_089c9e3c(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  fVar9 = 0.0;
  bVar1 = false;
  if (iVar5 == 0) {
    bVar1 = true;
  }
  else if (iVar6 == 0) {
    fVar9 = (float)(uint)*(byte *)(iVar5 + 0x281);
  }
  else {
    uVar7 = 10;
  }
  if (uVar7 < 6) {
    if (uVar7 == 1) {
      if (fVar9 <= fVar8) {
        bVar1 = true;
      }
    }
    else if (uVar7 == 2) {
      if (fVar9 == fVar8) {
        bVar1 = true;
      }
    }
    else if (uVar7 == 3) {
      if (fVar9 != fVar8) {
        bVar1 = true;
      }
    }
    else if (uVar7 == 4) {
      if (fVar8 < fVar9) {
        bVar1 = true;
      }
    }
    else if (uVar7 == 5) {
      if (fVar8 <= fVar9) {
        bVar1 = true;
      }
    }
    else if (fVar9 < fVar8) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    return 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar3;
  return 3;
}

