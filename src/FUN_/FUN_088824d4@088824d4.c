#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088824d4(int param_1)

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
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  if (0x78 < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  pauVar8 = (undefined (*) [16])(param_1 + 0x70);
  if (*(int *)(param_1 + 0xf4) == 0) {
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar8,0x42200000);
    *(int *)*pauVar8 = auVar1._0_4_;
    *(int *)(param_1 + 0x74) = auVar1._4_4_;
    *(int *)(param_1 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7c) = in_V7D;
    uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x10c),in_V7C);
    auVar2 = vmov_q(*pauVar8);
    auVar3 = vrot_q(uVar10,1,0,3,0);
    auVar4 = vrot_q(uVar10,2,0,1,0);
    uVar10 = vdot_t(*(undefined (*) [12])*pauVar8,auVar3._0_12_);
    uVar9 = vdot_t(*(undefined (*) [12])*pauVar8,auVar4._0_12_);
    *(undefined4 *)*pauVar8 = uVar10;
    *(int *)(param_1 + 0x74) = auVar2._4_4_;
    *(undefined4 *)(param_1 + 0x78) = uVar9;
    *(int *)(param_1 + 0x7c) = auVar2._12_4_;
    iVar6 = *(int *)(param_1 + 0xbc);
    uVar10 = *(undefined4 *)(param_1 + 0x74);
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    uVar5 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar6 + 0x90) = *(undefined4 *)*pauVar8;
    *(undefined4 *)(iVar6 + 0x94) = uVar10;
    *(undefined4 *)(iVar6 + 0x98) = uVar9;
    *(undefined4 *)(iVar6 + 0x9c) = uVar5;
    iVar6 = *(int *)(param_1 + 0xbc);
    pauVar7 = (undefined (*) [12])(iVar6 + 0x90);
    uVar10 = vdot_t(*pauVar7,*pauVar7);
    uVar9 = vcmp_s(8,uVar10,*(undefined4 *)*pauVar7);
    vrsq_s(uVar10);
    uVar10 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar7,uVar10);
    *(int *)*pauVar7 = auVar1._0_4_;
    *(int *)(iVar6 + 0x94) = auVar1._4_4_;
    *(int *)(iVar6 + 0x98) = auVar1._8_4_;
    *(undefined4 *)(iVar6 + 0x9c) = in_V7D;
  }
  else {
    FUN_088787a0(param_1);
    pauVar7 = (undefined (*) [12])(param_1 + 0x60);
    iVar6 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar7,pauVar8,0x9c,3,0,0x31bf337e
                        );
    if (iVar6 != 0) {
      FUN_08823f5c(DAT_08b00920,0x1b,&DAT_08aba930);
      FUN_08877060(param_1,0x200099,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    uVar10 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar7,*(undefined (*) [12])*pauVar8);
    *(int *)*pauVar7 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar10;
  }
  return;
}

