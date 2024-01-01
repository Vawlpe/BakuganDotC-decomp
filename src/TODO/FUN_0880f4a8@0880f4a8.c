#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f4a8(int param_1)

{
  undefined auVar1 [16];
  bool bVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  float fVar11;
  float fVar12;
  
  sVar3 = FUN_089c9d1c();
  uVar5 = FUN_089c9d1c(param_1);
  fVar11 = (float)FUN_089c9e3c(param_1);
  uVar4 = FUN_089c9d1c(param_1);
  uVar6 = FUN_08855008((int)sVar3);
  iVar7 = FUN_08860188(uVar6);
  iVar8 = FUN_088660e0();
  bVar2 = iVar8 == 0 || iVar7 == 0;
  if (((iVar8 != 0) && (iVar7 != 0)) && (pauVar9 = (undefined (*) [16])(iVar8 + 0x20), uVar5 < 6)) {
    fVar11 = fVar11 * fVar11;
    pauVar10 = (undefined (*) [16])(iVar7 + 0x20);
    if (uVar5 == 1) {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 <= fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 2) {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 == fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 3) {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 != fVar11) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 4) {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar11 < fVar12) {
        bVar2 = true;
      }
    }
    else if (uVar5 == 5) {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar11 <= fVar12) {
        bVar2 = true;
      }
    }
    else {
      auVar1 = vsub_q(*pauVar9,*pauVar10);
      fVar12 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
      if (fVar12 < fVar11) {
        bVar2 = true;
      }
    }
  }
  if (bVar2) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar4;
    return 3;
  }
  return 0;
}

