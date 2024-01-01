#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885c5b0(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  bool bVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  bVar3 = false;
  iVar7 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x20c) + 0x164);
    if (iVar8 < 2) {
      if (0 < iVar8) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
      }
    }
    else if (iVar8 < 4) {
      bVar3 = true;
      iVar7 = *(int *)(*(int *)(param_1 + 0x20c) + 0x160);
    }
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x20c);
      local_40 = *(undefined4 *)(iVar7 + 0x150);
      local_3c = *(undefined4 *)(iVar7 + 0x154);
      uStack_38 = *(undefined4 *)(iVar7 + 0x158);
    }
    else {
      local_40 = *(undefined4 *)(iVar7 + 0x20);
      local_3c = *(undefined4 *)(iVar7 + 0x24);
      uStack_38 = *(undefined4 *)(iVar7 + 0x28);
    }
    auVar1._4_4_ = local_3c;
    auVar1._0_4_ = local_40;
    auVar1._8_4_ = uStack_38;
    auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_1 + 0x300));
    uVar2 = auVar1._0_4_;
    uVar9 = auVar1._8_4_;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar2;
    auVar6._8_4_ = uVar9;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar2;
    auVar5._8_4_ = uVar9;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar2;
    auVar4._8_4_ = uVar9;
    uVar9 = vdot_t(auVar4,auVar5);
    uVar10 = vcmp_s(8,uVar9,uVar2);
    vrsq_s(uVar9);
    uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
    vpfxd(4,4,4,5);
    vscl_t(auVar6,uVar9);
    if ((bVar3) && (*(int *)(*(int *)(param_1 + 0x20c) + 0x164) == 2)) {
      if (*(int *)(param_1 + 0x170) != 0) {
        FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xf,1);
      }
      FUN_08862b64(param_1,0x1800002,0,0);
      FUN_08823f5c(DAT_08abd5b0,0x5f,*(int *)(param_1 + 0x20c) + 0x150);
      *(undefined4 *)(param_1 + 0x39c) = 0x19;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80;
      iVar7 = *(int *)(param_1 + 0x20c);
      *(uint *)(iVar7 + 0x130) = *(uint *)(iVar7 + 0x130) | 1;
      *(undefined4 *)(iVar7 + 0x148) = 0x1e;
      FUN_088706f0(param_1,0x14,0);
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      return 1;
    }
  }
  return 0;
}

