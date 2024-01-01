#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811078(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = FUN_089c9d1c();
  iVar5 = FUN_089c9d1c(param_1);
  uVar6 = FUN_089c9d1c(param_1);
  fVar10 = (float)FUN_089c9e3c(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  bVar1 = false;
  iVar8 = 0;
  if ((DAT_08abd628 != (int *)0x0) && (iVar8 = *DAT_08abd628, iVar8 != 0)) {
    iVar9 = *(int *)(iVar8 + 0x50);
    iVar2 = *(int *)(iVar8 + 4);
    while ((iVar7 = iVar2, iVar9 != iVar4 && (iVar7 != 0))) {
      iVar9 = *(int *)(iVar7 + 0x50);
      iVar8 = iVar7;
      iVar2 = *(int *)(iVar7 + 4);
    }
  }
  fVar11 = 0.0;
  if (iVar8 != 0) {
    if (iVar5 == 0) {
      fVar11 = (float)(uint)(*(char *)(iVar8 + 0x88) == '\0');
    }
    else {
      uVar6 = 10;
    }
  }
  if (uVar6 < 6) {
    if (uVar6 == 1) {
      if (fVar11 <= fVar10) {
        bVar1 = true;
      }
    }
    else if (uVar6 == 2) {
      if (fVar11 == fVar10) {
        bVar1 = true;
      }
    }
    else if (uVar6 == 3) {
      if (fVar11 != fVar10) {
        bVar1 = true;
      }
    }
    else if (uVar6 == 4) {
      if (fVar10 < fVar11) {
        bVar1 = true;
      }
    }
    else if (uVar6 == 5) {
      if (fVar10 <= fVar11) {
        bVar1 = true;
      }
    }
    else if (fVar11 < fVar10) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    return 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar3;
  return 3;
}

