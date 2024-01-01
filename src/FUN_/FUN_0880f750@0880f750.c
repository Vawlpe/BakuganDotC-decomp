#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f750(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  sVar2 = FUN_089c9d1c();
  iVar4 = FUN_089c9d1c(param_1);
  uVar5 = FUN_089c9d1c(param_1);
  fVar9 = (float)FUN_089c9e3c(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  uVar6 = FUN_08855008((int)sVar2);
  iVar7 = FUN_08860188(uVar6);
  iVar8 = FUN_088660e0();
  bVar1 = iVar8 == 0 || iVar7 == 0;
  fVar10 = 0.0;
  if ((iVar8 != 0) && (iVar7 != 0)) {
    if (iVar4 < 2) {
      if (-1 < iVar4) {
        if (iVar4 < 1) {
          fVar10 = (float)(uint)*(byte *)(iVar7 + 0xa3e);
        }
        else {
          fVar10 = (float)(uint)*(byte *)(iVar7 + 0xa3f);
        }
      }
    }
    else if (iVar4 < 3) {
      fVar10 = (float)FUN_08887cdc(iVar7 + 0x434);
      fVar9 = fVar9 * 0.01;
    }
    else if (iVar4 < 4) {
      fVar10 = (float)(uint)*(byte *)(iVar7 + 0xa79);
    }
  }
  if (uVar5 < 6) {
    if (uVar5 == 1) {
      if (fVar10 <= fVar9) {
        bVar1 = true;
      }
    }
    else if (uVar5 == 2) {
      if (fVar10 == fVar9) {
        bVar1 = true;
      }
    }
    else if (uVar5 == 3) {
      if (fVar10 != fVar9) {
        bVar1 = true;
      }
    }
    else if (uVar5 == 4) {
      if (fVar9 < fVar10) {
        bVar1 = true;
      }
    }
    else if (uVar5 == 5) {
      if (fVar9 <= fVar10) {
        bVar1 = true;
      }
    }
    else if (fVar10 < fVar9) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar3;
    return 3;
  }
  return 0;
}

