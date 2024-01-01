#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882dee4(int param_1)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined auVar8 [16];
  int iVar9;
  undefined (*pauVar10) [16];
  float *pfVar11;
  float fVar12;
  undefined (*pauVar13) [16];
  float *pfVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 in_V7C;
  
  iVar15 = *(int *)(*(int *)(param_1 + 0x14) + 0x218);
  iVar16 = *(int *)(*(int *)(param_1 + 0x14) + 0x214);
  switch(*(undefined4 *)(param_1 + 0x9e4)) {
  case 0:
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa10) = 0;
    *(undefined4 *)(param_1 + 0x9e8) = 0;
    uVar19 = _DONE_Get_DAT_08AAC9E0();
    iVar9 = FUN_0880d0ac(uVar19,7);
    pfVar14 = (float *)(iVar15 + 0x60);
    pfVar11 = (float *)(iVar16 + 0x60);
    if (iVar9 == 0) {
      *(uint *)(iVar15 + 0xd0) = *(uint *)(iVar15 + 0xd0) & 0xfffffffe;
    }
    else {
      *(undefined4 *)(iVar15 + 0xbc) = 0;
      *(uint *)(iVar15 + 0xd0) = *(uint *)(iVar15 + 0xd0) | 1;
    }
    uVar19 = *(undefined4 *)(param_1 + 0x9f4);
    uVar3 = *(undefined4 *)(param_1 + 0x9f8);
    uVar4 = *(undefined4 *)(param_1 + 0x9fc);
    *pfVar14 = *(float *)(param_1 + 0x9f0);
    *(undefined4 *)(iVar15 + 100) = uVar19;
    *(undefined4 *)(iVar15 + 0x68) = uVar3;
    *(undefined4 *)(iVar15 + 0x6c) = uVar4;
    *pfVar14 = *pfVar14 - -300.0;
    *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) | 1;
    *(undefined4 *)(iVar16 + 0xbc) = 0;
    uVar19 = *(undefined4 *)(param_1 + 0xa04);
    uVar3 = *(undefined4 *)(param_1 + 0xa08);
    uVar4 = *(undefined4 *)(param_1 + 0xa0c);
    *pfVar11 = *(float *)(param_1 + 0xa00);
    *(undefined4 *)(iVar16 + 100) = uVar19;
    *(undefined4 *)(iVar16 + 0x68) = uVar3;
    *(undefined4 *)(iVar16 + 0x6c) = uVar4;
    *pfVar11 = *pfVar11 - -300.0;
    *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
    break;
  case 2:
    break;
  case 3:
    goto LAB_0882e130;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_0882df2c_caseD_4;
  case 10:
    goto LAB_0882e1e0;
  default:
    *(undefined4 *)(param_1 + 0x9e4) = 0;
    return;
  }
  pauVar13 = (undefined (*) [16])(iVar15 + 0x60);
  pauVar10 = (undefined (*) [16])(iVar16 + 0x60);
  fVar17 = *(float *)(param_1 + 0x9e8) + 0.04363323;
  *(float *)(param_1 + 0x9e8) = fVar17;
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  else if (1.570796 < fVar17) {
    fVar17 = 1.570796;
  }
  *(float *)(param_1 + 0x9e8) = fVar17;
  uVar19 = vmul_s(fVar17,in_V7C);
  uVar19 = vsin_s(uVar19);
  *(undefined4 *)(iVar15 + 0xbc) = uVar19;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x9f0),*pauVar13);
  auVar1 = vscl_q(auVar1,uVar19);
  auVar1 = vadd_q(*pauVar13,auVar1);
  *(int *)*pauVar13 = auVar1._0_4_;
  *(int *)(iVar15 + 100) = auVar1._4_4_;
  *(int *)(iVar15 + 0x68) = auVar1._8_4_;
  *(int *)(iVar15 + 0x6c) = auVar1._12_4_;
  *(undefined4 *)(iVar16 + 0xbc) = uVar19;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0xa00),*pauVar10);
  auVar1 = vscl_q(auVar1,uVar19);
  auVar1 = vadd_q(*pauVar10,auVar1);
  *(int *)*pauVar10 = auVar1._0_4_;
  *(int *)(iVar16 + 100) = auVar1._4_4_;
  *(int *)(iVar16 + 0x68) = auVar1._8_4_;
  *(int *)(iVar16 + 0x6c) = auVar1._12_4_;
  if (0.95 <= *(float *)(iVar15 + 0xbc)) {
    *(undefined4 *)(iVar15 + 0xbc) = 0x3f800000;
    uVar19 = *(undefined4 *)(param_1 + 0x9f4);
    uVar3 = *(undefined4 *)(param_1 + 0x9f8);
    uVar4 = *(undefined4 *)(param_1 + 0x9fc);
    *(undefined4 *)*pauVar13 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x9f0);
    *(undefined4 *)(iVar15 + 100) = uVar19;
    *(undefined4 *)(iVar15 + 0x68) = uVar3;
    *(undefined4 *)(iVar15 + 0x6c) = uVar4;
    *(undefined4 *)(iVar16 + 0xbc) = 0x3f800000;
    uVar19 = *(undefined4 *)(param_1 + 0xa04);
    uVar3 = *(undefined4 *)(param_1 + 0xa08);
    uVar4 = *(undefined4 *)(param_1 + 0xa0c);
    *(undefined4 *)*pauVar10 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0xa00);
    *(undefined4 *)(iVar16 + 100) = uVar19;
    *(undefined4 *)(iVar16 + 0x68) = uVar3;
    *(undefined4 *)(iVar16 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0xa10) = 0x42700000;
    *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
LAB_0882e130:
    fVar17 = *(float *)(param_1 + 0xa10) + -1.0;
    *(float *)(param_1 + 0xa10) = fVar17;
    if (fVar17 <= 0.0) {
      *(undefined4 *)(param_1 + 0x9e8) = 0x3fc90fdb;
      *(undefined4 *)(param_1 + 0x9e4) = 10;
LAB_0882e1e0:
      pauVar13 = (undefined (*) [16])(iVar16 + 0x60);
      pauVar10 = (undefined (*) [16])(iVar15 + 0x60);
      fVar17 = *(float *)(param_1 + 0x9f0);
      uVar19 = *(undefined4 *)(param_1 + 0x9f4);
      uVar4 = *(undefined4 *)(param_1 + 0x9f8);
      uVar6 = *(undefined4 *)(param_1 + 0x9fc);
      fVar2 = *(float *)(param_1 + 0xa00);
      uVar3 = *(undefined4 *)(param_1 + 0xa04);
      uVar5 = *(undefined4 *)(param_1 + 0xa08);
      uVar7 = *(undefined4 *)(param_1 + 0xa0c);
      fVar18 = *(float *)(param_1 + 0x9e8) + -0.1047198;
      *(float *)(param_1 + 0x9e8) = fVar18;
      if (fVar18 < 0.0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 1.570796;
        if (fVar18 <= 1.570796) {
          fVar12 = fVar18;
        }
      }
      *(float *)(param_1 + 0x9e8) = fVar12;
      *(float *)(iVar15 + 0xbc) = fVar12;
      auVar1._4_4_ = uVar19;
      auVar1._0_4_ = fVar17 + -300.0;
      auVar1._8_4_ = uVar4;
      auVar1._12_4_ = uVar6;
      auVar1 = vsub_q(auVar1,*pauVar10);
      auVar1 = vscl_q(auVar1,1.0 - fVar12);
      auVar1 = vadd_q(*pauVar10,auVar1);
      *(int *)*pauVar10 = auVar1._0_4_;
      *(int *)(iVar15 + 100) = auVar1._4_4_;
      *(int *)(iVar15 + 0x68) = auVar1._8_4_;
      *(int *)(iVar15 + 0x6c) = auVar1._12_4_;
      *(float *)(iVar16 + 0xbc) = fVar12;
      auVar8._4_4_ = uVar3;
      auVar8._0_4_ = fVar2 + -300.0;
      auVar8._8_4_ = uVar5;
      auVar8._12_4_ = uVar7;
      auVar1 = vsub_q(auVar8,*pauVar13);
      auVar1 = vscl_q(auVar1,1.0 - fVar12);
      auVar1 = vadd_q(*pauVar13,auVar1);
      *(int *)*pauVar13 = auVar1._0_4_;
      *(int *)(iVar16 + 100) = auVar1._4_4_;
      *(int *)(iVar16 + 0x68) = auVar1._8_4_;
      *(int *)(iVar16 + 0x6c) = auVar1._12_4_;
      if (*(float *)(iVar15 + 0xbc) <= 0.05) {
        *(undefined4 *)(iVar15 + 0xbc) = 0;
        *(uint *)(iVar15 + 0xd0) = *(uint *)(iVar15 + 0xd0) & 0xfffffffe;
        *(undefined4 *)(iVar16 + 0xbc) = 0;
        *(uint *)(iVar16 + 0xd0) = *(uint *)(iVar16 + 0xd0) & 0xfffffffe;
        *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_0882df2c_caseD_4:
        *(undefined4 *)(param_1 + 0x9e4) = 0;
      }
    }
  }
  return;
}

