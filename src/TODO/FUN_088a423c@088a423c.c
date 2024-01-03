#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a423c(int param_1)

{
  uint uVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined4 uVar7;
  int iVar8;
  float in_V72;
  undefined4 in_V76;
  float in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar9;
  float local_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 800) != 0) {
    *(undefined4 *)(param_1 + 0x148) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 800) + 0x20c) + 0x160);
  }
  if ((*(int *)(param_1 + 0x148) == 0) || (*(int *)(*(int *)(param_1 + 0x148) + 0x268) != 2)) {
    local_c0 = in_V72;
    uStack_bc = in_V76;
    fStack_b8 = in_V7A;
    if (*(int *)(param_1 + 800) != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
      local_c0 = *(float *)(iVar8 + 0x150);
      uStack_bc = *(undefined4 *)(iVar8 + 0x154);
      fStack_b8 = *(float *)(iVar8 + 0x158);
    }
    iVar8 = DONE_NotZero_DAT_08AC5258();
    if (iVar8 != 0) {
      uVar7 = DONE_Get_DAT_08AC5258();
      FUN_089c00c4(uVar7,0x20001f,*(int *)(param_1 + 0x130) + 0xb0,0,1);
    }
    auVar2 = vscl_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x70),0x40800000);
    auVar4._4_4_ = uStack_bc;
    auVar4._0_4_ = local_c0;
    auVar4._8_4_ = fStack_b8;
    auVar2 = vsub_t(auVar4,auVar2);
    auVar2 = vsub_t(auVar2,*(undefined (*) [12])(param_1 + 0x20));
    uVar1 = auVar2._0_4_;
    uVar7 = auVar2._8_4_;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar1;
    auVar6._8_4_ = uVar7;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar1;
    auVar5._8_4_ = uVar7;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = uVar1;
    auVar2._8_4_ = uVar7;
    uVar7 = vdot_t(auVar2,auVar5);
    uVar9 = vcmp_s(8,uVar7,uVar1);
    vrsq_s(uVar7);
    uVar7 = vcmovt_s(in_V7D,(byte)uVar9 & 1);
    vpfxd(4,4,4,5);
    vscl_t(auVar6,uVar7);
    FUN_088a41e0(param_1);
    uVar9 = 4;
    uVar7 = 0x18;
    if (*(int *)(param_1 + 800) != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
      uVar9 = *(undefined4 *)(iVar8 + 0x164);
      uVar7 = *(undefined4 *)(iVar8 + 0x16c);
    }
    uVar7 = FUN_088879d8(*(undefined4 *)(param_1 + 0x148),uVar9,uVar7,4,6);
    FUN_088ac9d8(uVar7,param_1);
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      iVar8 = *(int *)(param_1 + 0x200);
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x2b4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b8);
      *(undefined *)(param_1 + 0x2b0) = 0;
      *(undefined *)(param_1 + 0x2b1) = 0;
      iVar8 = *(int *)(param_1 + 0x200);
    }
    if ((float)iVar8 <= 0.0) {
      if (*(int *)(param_1 + 0x148) == 0) {
        uVar7 = atan2f(*(float *)(param_1 + 0x28) - fStack_b8,
                       *(float *)*(undefined (*) [12])(param_1 + 0x20) - local_c0);
      }
      else {
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x34);
      }
      uVar7 = vmul_s(uVar7,in_V7C);
      auVar3 = vrot_q(uVar7,1,0,2,0);
      auVar2 = vscl_t(auVar3._0_12_,0x41200000);
      *(int *)(param_1 + 0x370) = auVar2._0_4_;
      *(int *)(param_1 + 0x374) = auVar2._4_4_;
      *(int *)(param_1 + 0x378) = auVar2._8_4_;
      *(int *)(param_1 + 0x37c) = auVar3._12_4_;
      *(undefined *)(param_1 + 0x2b1) = 0;
      *(undefined *)(param_1 + 0x281) = 1;
      FUN_088a99f0(param_1);
    }
    else {
      *(undefined *)(param_1 + 0x2b0) = 1;
      *(undefined *)(param_1 + 0x2b1) = 0;
    }
  }
  else if (*(int *)(param_1 + 800) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 800) + 0x20c);
    *(undefined4 *)(iVar8 + 0x148) = 1;
    *(uint *)(iVar8 + 0x130) = *(uint *)(iVar8 + 0x130) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 800) + 0x20c) + 0x140) = 0;
  }
  return;
}

