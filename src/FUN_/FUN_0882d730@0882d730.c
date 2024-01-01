#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d730(int param_1,int param_2,char param_3)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  iVar6 = param_1 + param_2 * 4;
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4 + 0x3a4);
  switch(*(undefined4 *)(iVar6 + 0x980)) {
  case 0:
    if (param_3 == '\0') {
      return;
    }
    *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
    break;
  case 1:
    break;
  case 2:
    goto LAB_0882d894;
  case 3:
    goto LAB_0882d98c;
  case 4:
    iVar8 = param_1 + param_2 * 0x10;
    goto LAB_0882d9e8;
  case 5:
    goto switchD_0882d768_caseD_5;
  default:
    goto switchD_0882d768_caseD_6;
  case 10:
    goto switchD_0882d768_caseD_a;
  }
  iVar5 = param_1 + param_2 * 0x10;
  *(undefined4 *)(iVar6 + 0x998) = 0;
  *(undefined4 *)(iVar6 + 0x9c8) = 0;
  iVar8 = *(int *)(param_1 + 0x9e0);
  *(int *)(iVar6 + 0x9b0) = iVar8;
  *(float *)(iVar5 + 0x920) = (float)iVar8 * 24.0 + 76.0;
  *(undefined4 *)(iVar5 + 0x924) = 0x43818000;
  *(undefined4 *)(iVar5 + 0x928) = 0x43280000;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
  *(undefined4 *)(iVar7 + 0xbc) = 0;
  uVar11 = *(undefined4 *)(iVar5 + 0x924);
  uVar2 = *(undefined4 *)(iVar5 + 0x928);
  uVar3 = *(undefined4 *)(iVar5 + 0x92c);
  *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar5 + 0x920);
  *(undefined4 *)(iVar7 + 100) = uVar11;
  *(undefined4 *)(iVar7 + 0x68) = uVar2;
  *(undefined4 *)(iVar7 + 0x6c) = uVar3;
  *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
LAB_0882d894:
  fVar10 = *(float *)(iVar6 + 0x9c8) + 0.1396263;
  *(float *)(iVar6 + 0x9c8) = fVar10;
  if (fVar10 < 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.570796;
    if (fVar10 <= 1.570796) {
      fVar4 = fVar10;
    }
  }
  *(float *)(iVar6 + 0x9c8) = fVar4;
  uVar11 = vmul_s(fVar4,in_V7C);
  fVar10 = (float)vsin_s(uVar11);
  *(float *)(iVar7 + 0xbc) = fVar10;
  if (0.95 <= fVar10) {
    *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
    *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
LAB_0882d98c:
    iVar8 = param_1 + param_2 * 0x10;
    iVar5 = *(int *)(param_1 + 0x9e0);
    *(undefined4 *)(iVar6 + 0x9c8) = 0;
    *(int *)(iVar6 + 0x9b0) = iVar5;
    *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
    *(float *)(iVar8 + 0x920) = (float)iVar5 * 24.0 + 76.0;
LAB_0882d9e8:
    fVar10 = 1.570796;
    pauVar9 = (undefined (*) [16])(iVar7 + 0x60);
    fVar4 = *(float *)(iVar6 + 0x9c8) + 0.1396263;
    *(float *)(iVar6 + 0x9c8) = fVar4;
    if (fVar4 < 0.0) {
      fVar10 = 0.0;
    }
    else if (fVar4 <= 1.570796) {
      fVar10 = fVar4;
    }
    *(float *)(iVar6 + 0x9c8) = fVar10;
    uVar11 = vmul_s(fVar10,in_V7C);
    uVar11 = vsin_s(uVar11);
    auVar1 = vsub_q(*(undefined (*) [16])(iVar8 + 0x920),*pauVar9);
    auVar1 = vscl_q(auVar1,uVar11);
    auVar1 = vadd_q(*pauVar9,auVar1);
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(iVar7 + 100) = auVar1._4_4_;
    *(int *)(iVar7 + 0x68) = auVar1._8_4_;
    *(int *)(iVar7 + 0x6c) = auVar1._12_4_;
    if (1.570796 <= *(float *)(iVar6 + 0x9c8)) {
      uVar11 = *(undefined4 *)(iVar8 + 0x924);
      uVar2 = *(undefined4 *)(iVar8 + 0x928);
      uVar3 = *(undefined4 *)(iVar8 + 0x92c);
      *(undefined4 *)*pauVar9 = *(undefined4 *)*(undefined (*) [16])(iVar8 + 0x920);
      *(undefined4 *)(iVar7 + 100) = uVar11;
      *(undefined4 *)(iVar7 + 0x68) = uVar2;
      *(undefined4 *)(iVar7 + 0x6c) = uVar3;
      *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
switchD_0882d768_caseD_5:
      if (param_3 == '\0') {
        *(undefined4 *)(iVar6 + 0x9c8) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x980) = 10;
switchD_0882d768_caseD_a:
        if (param_3 != '\0') {
          *(undefined4 *)(iVar6 + 0x980) = 2;
          return;
        }
        fVar10 = *(float *)(iVar6 + 0x9c8) + -0.2094395;
        *(float *)(iVar6 + 0x9c8) = fVar10;
        if (fVar10 < 0.0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = 1.570796;
          if (fVar10 <= 1.570796) {
            fVar4 = fVar10;
          }
        }
        *(float *)(iVar6 + 0x9c8) = fVar4;
        uVar11 = vmul_s(fVar4,in_V7C);
        fVar10 = (float)vsin_s(uVar11);
        *(float *)(iVar7 + 0xbc) = fVar10;
        if (fVar10 <= 0.05) {
          *(undefined4 *)(iVar7 + 0xbc) = 0;
          *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
          *(int *)(iVar6 + 0x980) = *(int *)(iVar6 + 0x980) + 1;
switchD_0882d768_caseD_6:
          *(undefined4 *)(iVar6 + 0x980) = 0;
        }
      }
      else if (*(int *)(iVar6 + 0x9b0) != *(int *)(param_1 + 0x9e0)) {
        *(undefined4 *)(iVar6 + 0x980) = 3;
        return;
      }
    }
  }
  return;
}

