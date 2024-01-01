#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887cce0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [16];
  undefined4 uVar9;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar10;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3cf5c28f;
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.05;
    pauVar8 = (undefined (*) [16])(param_1 + 0x80);
    uVar9 = vdot_t(*(undefined (*) [12])*pauVar8,*(undefined (*) [12])*pauVar8);
    uVar10 = vcmp_s(8,uVar9,*(undefined4 *)*pauVar8);
    vrsq_s(uVar9);
    uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar8,uVar9);
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    uVar9 = 0x3c8efa35;
    if (*(float *)(param_1 + 0x10c) == 0.0) {
      uVar9 = 0xbc8efa35;
    }
    uVar9 = vmul_s(uVar9,in_V7C);
    auVar2 = vmov_q(*pauVar8);
    auVar3 = vrot_q(uVar9,1,0,3,0);
    auVar4 = vrot_q(uVar9,2,0,1,0);
    uVar9 = vdot_t(*(undefined (*) [12])*pauVar8,auVar3._0_12_);
    uVar10 = vdot_t(*(undefined (*) [12])*pauVar8,auVar4._0_12_);
    *(undefined4 *)*pauVar8 = uVar9;
    *(int *)(param_1 + 0x84) = auVar2._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar10;
    *(int *)(param_1 + 0x8c) = auVar2._12_4_;
  }
  else {
    iVar6 = FUN_0887979c(param_1,0xa8);
    if (iVar6 != 0) {
      return;
    }
    FUN_08877af0(0x42700000,0x41a00000,param_1,1,0);
    pauVar7 = (undefined (*) [12])(param_1 + 0x60);
    iVar6 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar7,
                         (undefined (*) [12])(param_1 + 0x70),0x35,3,0,0x31bf337e);
    if (iVar6 != 0) {
      FUN_08878cc4(param_1,0xa8,&DAT_08aba930);
      return;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar7,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar7 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar9;
  }
  iVar6 = *(int *)(param_1 + 0xbc);
  uVar9 = *(undefined4 *)(param_1 + 0x84);
  uVar10 = *(undefined4 *)(param_1 + 0x88);
  uVar5 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(iVar6 + 0x90) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(iVar6 + 0x94) = uVar9;
  *(undefined4 *)(iVar6 + 0x98) = uVar10;
  *(undefined4 *)(iVar6 + 0x9c) = uVar5;
  return;
}

