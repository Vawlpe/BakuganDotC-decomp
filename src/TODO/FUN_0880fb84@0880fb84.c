#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880fb84(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  puVar3 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar8 = *puVar3;
  uVar4 = FUN_089c9d1c(param_1);
  uVar5 = FUN_089c9d1c(param_1);
  fVar9 = (float)FUN_089c9e3c(param_1);
  uVar2 = FUN_089c9d1c(param_1);
  iVar6 = FUN_08860188(uVar8);
  iVar7 = FUN_088660e0();
  bVar1 = iVar7 == 0 || iVar6 == 0;
  fVar10 = 0.0;
  if ((iVar7 != 0) && (iVar6 != 0)) {
    if (uVar4 < 6) {
      if (uVar4 == 1) {
        fVar10 = (float)*(int *)(iVar6 + 0x1a0);
      }
      else if (uVar4 == 2) {
        fVar10 = (float)*(int *)(iVar6 + 0x588);
      }
      else if (uVar4 == 3) {
        fVar10 = *(float *)(iVar6 + 0x28);
      }
      else if (uVar4 == 4) {
        iVar6 = FUN_088662fc();
        fVar10 = (float)iVar6;
      }
      else if (uVar4 == 5) {
        fVar10 = (float)(uint)*(byte *)(iVar6 + 0x1ac);
      }
      else {
        fVar10 = (float)(uint)(*(int *)(iVar6 + 0x57c) == 0);
      }
    }
    else {
      uVar5 = 10;
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
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar2;
    return 3;
  }
  return 0;
}

