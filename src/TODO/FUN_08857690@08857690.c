#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08857690(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar9;
  
  iVar6 = FUN_08857608(param_1,*(undefined4 *)(*(int *)(param_1 + 0x6c8) + 0x164));
  uVar7 = atan2f(*(float *)(*(int *)(param_1 + 0x6c8) + 0x158) - *(float *)(param_1 + 0x28),
                 *(float *)(*(int *)(param_1 + 0x6c8) + 0x150) - *(float *)(param_1 + 0x20));
  if (iVar6 != 0) {
    auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x250),
                    *(undefined (*) [12])(*(int *)(param_1 + 0x6c8) + 0x150));
    uVar2 = auVar1._0_4_;
    uVar8 = auVar1._8_4_;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar2;
    auVar5._8_4_ = uVar8;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar8;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar2;
    auVar1._8_4_ = uVar8;
    uVar8 = vdot_t(auVar1,auVar4);
    uVar9 = vcmp_s(8,uVar8,uVar2);
    vrsq_s(uVar8);
    uVar8 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    vscl_t(auVar5,uVar8);
    uVar7 = vmul_s(uVar7,in_V7C);
    auVar3 = vrot_q(uVar7,1,0,2,0);
    auVar1 = vscl_t(auVar3._0_12_,0);
    vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x6c8) + 0x150));
    FUN_08824024(DAT_08abd5b0,0x37);
    FUN_08862b64(param_1,0x20006f,0,0);
    iVar6 = *(int *)(param_1 + 0x6c8);
    *(uint *)(iVar6 + 0x130) = *(uint *)(iVar6 + 0x130) | 1;
    *(undefined4 *)(iVar6 + 0x148) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x6c8) + 0x140) = 0;
  }
  return;
}

