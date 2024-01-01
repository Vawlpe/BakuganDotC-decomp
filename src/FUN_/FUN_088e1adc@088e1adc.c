#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e1adc(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  int iVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_V7C;
  undefined auVar5 [12];
  
  iVar8 = FUN_088e1400();
  if ((iVar8 != 0) ||
     (((*(int *)(param_1 + 0x140) != 0 && (*(int *)(param_1 + 0x140) != 1)) &&
      (*(int *)(param_1 + 0x140) != 6)))) {
    return 0;
  }
  piVar9 = (int *)FUN_088dfa48();
  uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar3 = vrot_q(uVar14,1,0,2,0);
  auVar2 = vscl_t(auVar3._0_12_,0x40e00000);
  auVar2 = vadd_t(auVar2,*(undefined (*) [12])(param_1 + 0x20));
  iVar10 = *piVar9;
  iVar8 = 0;
  fVar7 = INFINITY;
  while (iVar6 = iVar10, iVar6 != 0) {
    if (iVar6 == param_1) {
      iVar10 = *(int *)(iVar6 + 4);
    }
    else {
      auVar1._12_4_ = auVar3._12_4_;
      auVar1._0_12_ = auVar2;
      pauVar11 = (undefined (*) [16])(iVar6 + 0x20);
      auVar1 = vsub_q(auVar1,*pauVar11);
      uVar14 = vzero_s();
      auVar4._8_4_ = auVar1._8_4_;
      auVar4._4_4_ = uVar14;
      auVar4._0_4_ = auVar1._0_4_;
      auVar5._8_4_ = auVar1._8_4_;
      auVar5._4_4_ = uVar14;
      auVar5._0_4_ = auVar1._0_4_;
      fVar13 = (float)vdot_t(auVar4,auVar5);
      fVar12 = *(float *)(param_1 + 0x240);
      iVar10 = FUN_088df954(param_1,pauVar11);
      if (iVar10 == 1) {
        fVar12 = fVar12 * 2.0;
      }
      else {
        iVar10 = FUN_088df954(param_1,pauVar11);
        if (iVar10 == 0) {
          fVar12 = fVar12 * 4.0;
        }
        else {
          fVar12 = fVar12 * 3.0;
        }
      }
      if (fVar13 < fVar12 * fVar12) {
        if (fVar13 < fVar7) {
          iVar10 = *(int *)(iVar6 + 4);
          iVar8 = iVar6;
          fVar7 = fVar13;
        }
        else {
          iVar10 = *(int *)(iVar6 + 4);
        }
      }
      else {
        iVar10 = *(int *)(iVar6 + 4);
      }
    }
  }
  if (iVar8 == 0) {
    return 0;
  }
  if (*(uint *)(iVar8 + 8) < 0x4e) {
    iVar10 = *(int *)(iVar8 + 0x350);
  }
  else {
    if (*(uint *)(iVar8 + 8) < 0x54) {
      iVar8 = 0;
      goto LAB_088e1cf8;
    }
    iVar10 = *(int *)(iVar8 + 0x350);
  }
  if (*(char *)(iVar10 + 0x36) == '\a') {
    iVar8 = 0;
  }
  else if (*(char *)(*(int *)(iVar8 + 0x350) + 0x36) == '\n') {
    iVar8 = 0;
  }
LAB_088e1cf8:
  if (iVar8 != 0) {
    *(undefined *)(param_1 + 0x3ad) = 1;
  }
  return iVar8;
}

