#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810408(int param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  undefined4 uVar9;
  undefined (*pauVar10) [16];
  float fVar11;
  float fVar12;
  
  puVar4 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar9 = *puVar4;
  uVar5 = FUN_089c9d1c(param_1);
  fVar11 = (float)FUN_089c9e3c(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  iVar6 = FUN_08860188(uVar9);
  iVar7 = FUN_088660e0();
  bVar2 = iVar7 == 0 || iVar6 == 0;
  if (((iVar7 != 0) && (iVar6 != 0)) && (pauVar8 = (undefined (*) [16])(iVar7 + 0x20), uVar5 < 6)) {
    fVar11 = fVar11 * fVar11;
    pauVar10 = (undefined (*) [16])(iVar6 + 0x20);
    if (uVar5 == 1) {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 <= fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 2) {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 == fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 3) {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 != fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 4) {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar11 < fVar12) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 5) {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar11 <= fVar12) {
        bVar2 = true;
      }
    }
    else {
      auVar1 = vsub_q(*pauVar8,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 < fVar11) {
        bVar2 = true;
      }
    }
  }
  if (bVar2) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar3;
    return 3;
  }
  return 0;
}

