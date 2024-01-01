#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882dc08(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float *pfVar6;
  undefined (*pauVar7) [16];
  float fVar8;
  float fVar9;
  
  switch(*(undefined4 *)(param_1 + 0x9e4)) {
  case 0:
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa10) = 0;
    *(undefined4 *)(param_1 + 0x9e8) = 0;
    *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 1;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    pfVar6 = (float *)(param_2 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 0x9f4);
    uVar3 = *(undefined4 *)(param_1 + 0x9f8);
    uVar4 = *(undefined4 *)(param_1 + 0x9fc);
    *pfVar6 = *(float *)(param_1 + 0x9f0);
    *(undefined4 *)(param_2 + 100) = uVar2;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar4;
    *pfVar6 = *pfVar6 - -300.0;
    *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
    break;
  case 2:
    break;
  case 3:
    goto LAB_0882dd88;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    goto switchD_0882dc2c_caseD_4;
  case 10:
    goto LAB_0882de20;
  default:
    *(undefined4 *)(param_1 + 0x9e4) = 0;
    return;
  }
  pauVar7 = (undefined (*) [16])(param_2 + 0x60);
  fVar8 = *(float *)(param_1 + 0x9e8) + 0.04363323;
  *(float *)(param_1 + 0x9e8) = fVar8;
  if (fVar8 < 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.570796;
    if (fVar8 <= 1.570796) {
      fVar9 = fVar8;
    }
  }
  *(float *)(param_1 + 0x9e8) = fVar9;
  *(float *)(param_2 + 0xbc) = fVar9;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x9f0),*pauVar7);
  auVar1 = vscl_q(auVar1,fVar9);
  auVar1 = vadd_q(*pauVar7,auVar1);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)(param_2 + 100) = auVar1._4_4_;
  *(int *)(param_2 + 0x68) = auVar1._8_4_;
  *(int *)(param_2 + 0x6c) = auVar1._12_4_;
  if (0.95 <= *(float *)(param_2 + 0xbc)) {
    *(undefined4 *)(param_2 + 0xbc) = 0x3f800000;
    uVar2 = *(undefined4 *)(param_1 + 0x9f4);
    uVar3 = *(undefined4 *)(param_1 + 0x9f8);
    uVar4 = *(undefined4 *)(param_1 + 0x9fc);
    *(undefined4 *)*pauVar7 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x9f0);
    *(undefined4 *)(param_2 + 100) = uVar2;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0xa10) = 0x42700000;
    *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
LAB_0882dd88:
    fVar8 = *(float *)(param_1 + 0xa10) + -1.0;
    *(float *)(param_1 + 0xa10) = fVar8;
    if (fVar8 <= 0.0) {
      *(undefined4 *)(param_1 + 0x9e8) = 0x3fc90fdb;
      *(undefined4 *)(param_1 + 0x9e4) = 10;
LAB_0882de20:
      pauVar7 = (undefined (*) [16])(param_2 + 0x60);
      fVar8 = *(float *)(param_1 + 0x9f0);
      uVar2 = *(undefined4 *)(param_1 + 0x9f4);
      uVar3 = *(undefined4 *)(param_1 + 0x9f8);
      uVar4 = *(undefined4 *)(param_1 + 0x9fc);
      fVar9 = *(float *)(param_1 + 0x9e8) + -0.1047198;
      *(float *)(param_1 + 0x9e8) = fVar9;
      if (fVar9 < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = 1.570796;
        if (fVar9 <= 1.570796) {
          fVar5 = fVar9;
        }
      }
      *(float *)(param_1 + 0x9e8) = fVar5;
      *(float *)(param_2 + 0xbc) = fVar5;
      auVar1._4_4_ = uVar2;
      auVar1._0_4_ = fVar8 + -300.0;
      auVar1._8_4_ = uVar3;
      auVar1._12_4_ = uVar4;
      auVar1 = vsub_q(auVar1,*pauVar7);
      auVar1 = vscl_q(auVar1,1.0 - fVar5);
      auVar1 = vadd_q(*pauVar7,auVar1);
      *(int *)*pauVar7 = auVar1._0_4_;
      *(int *)(param_2 + 100) = auVar1._4_4_;
      *(int *)(param_2 + 0x68) = auVar1._8_4_;
      *(int *)(param_2 + 0x6c) = auVar1._12_4_;
      if (*(float *)(param_2 + 0xbc) <= 0.05) {
        *(undefined4 *)(param_2 + 0xbc) = 0;
        *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffffe;
        *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
switchD_0882dc2c_caseD_4:
        *(undefined4 *)(param_1 + 0x9e4) = 0;
      }
    }
  }
  return;
}

