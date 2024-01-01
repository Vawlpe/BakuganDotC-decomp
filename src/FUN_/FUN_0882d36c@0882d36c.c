#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d36c(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined (*pauVar9) [16];
  float fVar10;
  float fVar11;
  
  if (param_2 == 0) {
    return;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x1d4);
  switch(*(undefined4 *)(param_1 + 0x670)) {
  case 0:
    if ((*(uint *)(param_2 + 0x144) & 0x40) == 0) {
      return;
    }
    *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 1;
    break;
  case 1:
    break;
  case 2:
    goto LAB_0882d49c;
  case 3:
    goto switchD_0882d39c_caseD_3;
  default:
    goto switchD_0882d39c_caseD_4;
  case 10:
    goto LAB_0882d5d4;
  }
  pfVar8 = (float *)(iVar7 + 0x60);
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
  *(undefined4 *)(iVar7 + 0xbc) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x664);
  uVar3 = *(undefined4 *)(param_1 + 0x668);
  uVar4 = *(undefined4 *)(param_1 + 0x66c);
  *pfVar8 = *(float *)(param_1 + 0x660);
  *(undefined4 *)(iVar7 + 100) = uVar2;
  *(undefined4 *)(iVar7 + 0x68) = uVar3;
  *(undefined4 *)(iVar7 + 0x6c) = uVar4;
  *pfVar8 = *pfVar8 - 32.0;
  *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 1;
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x1d8);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
LAB_0882d49c:
  pauVar9 = (undefined (*) [16])(iVar7 + 0x60);
  fVar10 = *(float *)(param_1 + 0x678) + 0.1396263;
  *(float *)(param_1 + 0x678) = fVar10;
  if (fVar10 < 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 1.570796;
    if (fVar10 <= 1.570796) {
      fVar11 = fVar10;
    }
  }
  *(float *)(param_1 + 0x678) = fVar11;
  *(float *)(iVar7 + 0xbc) = fVar11;
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x660),*pauVar9);
  auVar1 = vscl_q(auVar1,fVar11);
  auVar1 = vadd_q(*pauVar9,auVar1);
  *(int *)*pauVar9 = auVar1._0_4_;
  *(int *)(iVar7 + 100) = auVar1._4_4_;
  *(int *)(iVar7 + 0x68) = auVar1._8_4_;
  *(int *)(iVar7 + 0x6c) = auVar1._12_4_;
  if (0.95 <= *(float *)(iVar7 + 0xbc)) {
    *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
    uVar2 = *(undefined4 *)(param_1 + 0x664);
    uVar3 = *(undefined4 *)(param_1 + 0x668);
    uVar4 = *(undefined4 *)(param_1 + 0x66c);
    *(undefined4 *)*pauVar9 = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x660);
    *(undefined4 *)(iVar7 + 100) = uVar2;
    *(undefined4 *)(iVar7 + 0x68) = uVar3;
    *(undefined4 *)(iVar7 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0x674) = 0xf;
    *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 1;
switchD_0882d39c_caseD_3:
    iVar5 = *(int *)(param_1 + 0x674) + -1;
    *(int *)(param_1 + 0x674) = iVar5;
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x678) = 0x3fc90fdb;
      *(undefined4 *)(param_1 + 0x670) = 10;
LAB_0882d5d4:
      pauVar9 = (undefined (*) [16])(iVar7 + 0x60);
      fVar10 = *(float *)(param_1 + 0x660);
      uVar2 = *(undefined4 *)(param_1 + 0x664);
      uVar3 = *(undefined4 *)(param_1 + 0x668);
      uVar4 = *(undefined4 *)(param_1 + 0x66c);
      fVar11 = *(float *)(param_1 + 0x678) + -0.1570796;
      *(float *)(param_1 + 0x678) = fVar11;
      if (fVar11 < 0.0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = 1.570796;
        if (fVar11 <= 1.570796) {
          fVar6 = fVar11;
        }
      }
      *(float *)(param_1 + 0x678) = fVar6;
      *(float *)(iVar7 + 0xbc) = fVar6;
      auVar1._4_4_ = uVar2;
      auVar1._0_4_ = fVar10 + 32.0;
      auVar1._8_4_ = uVar3;
      auVar1._12_4_ = uVar4;
      auVar1 = vsub_q(auVar1,*pauVar9);
      auVar1 = vscl_q(auVar1,1.0 - fVar6);
      auVar1 = vadd_q(*pauVar9,auVar1);
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(iVar7 + 100) = auVar1._4_4_;
      *(int *)(iVar7 + 0x68) = auVar1._8_4_;
      *(int *)(iVar7 + 0x6c) = auVar1._12_4_;
      if (*(float *)(iVar7 + 0xbc) <= 0.05) {
        *(undefined4 *)(iVar7 + 0xbc) = 0;
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 1;
switchD_0882d39c_caseD_4:
        *(undefined4 *)(param_1 + 0x670) = 0;
      }
    }
  }
  return;
}

