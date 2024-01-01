#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887f9c8(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined (*pauVar5) [16];
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    pauVar5 = (undefined (*) [16])(param_1 + 0x70);
    if (*(float *)(param_1 + 0x10c) == 1.0) {
      uVar8 = vmul_s(0xbf060a92,in_V7C);
      auVar1 = vmov_q(*pauVar5);
      auVar2 = vrot_q(uVar8,1,0,3,0);
      auVar3 = vrot_q(uVar8,2,0,1,0);
      uVar8 = vdot_t(*(undefined (*) [12])*pauVar5,auVar2._0_12_);
      uVar7 = vdot_t(*(undefined (*) [12])*pauVar5,auVar3._0_12_);
      *(undefined4 *)*pauVar5 = uVar8;
      *(int *)(param_1 + 0x74) = auVar1._4_4_;
      *(undefined4 *)(param_1 + 0x78) = uVar7;
      *(int *)(param_1 + 0x7c) = auVar1._12_4_;
      iVar6 = *(int *)(param_1 + 0xbc);
    }
    else if (*(float *)(param_1 + 0x10c) == 2.0) {
      uVar8 = vmul_s(0x3f060a92,in_V7C);
      auVar1 = vmov_q(*pauVar5);
      auVar2 = vrot_q(uVar8,1,0,3,0);
      auVar3 = vrot_q(uVar8,2,0,1,0);
      uVar8 = vdot_t(*(undefined (*) [12])*pauVar5,auVar2._0_12_);
      uVar7 = vdot_t(*(undefined (*) [12])*pauVar5,auVar3._0_12_);
      *(undefined4 *)*pauVar5 = uVar8;
      *(int *)(param_1 + 0x74) = auVar1._4_4_;
      *(undefined4 *)(param_1 + 0x78) = uVar7;
      *(int *)(param_1 + 0x7c) = auVar1._12_4_;
      iVar6 = *(int *)(param_1 + 0xbc);
    }
    else {
      iVar6 = *(int *)(param_1 + 0xbc);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x74);
    uVar7 = *(undefined4 *)(param_1 + 0x78);
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar6 + 0x90) = *(undefined4 *)*pauVar5;
    *(undefined4 *)(iVar6 + 0x94) = uVar8;
    *(undefined4 *)(iVar6 + 0x98) = uVar7;
    *(undefined4 *)(iVar6 + 0x9c) = uVar4;
  }
  FUN_0887a1c4(*(float *)(param_1 + 0xcc) * 0.2,param_1,0xcb,0xcc,0xcd,0x5e,0x28);
  return;
}

