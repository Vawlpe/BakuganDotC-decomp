#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088de688(int param_1)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [12];
  float fVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar10;
  
  pauVar8 = (undefined (*) [12])(param_1 + 0x80);
  *(undefined4 *)*pauVar8 = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  bVar4 = false;
  if ((*(char *)(param_1 + 0x14c) == '\0') &&
     (iVar5 = (**(code **)(*(int *)(param_1 + 0x14) + 0x2c))
                        (0x41b80000,0x447a0000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x28)
                         ,*(int *)(param_1 + 0x130) + 0xb0,param_1 + 0x6c), iVar5 != 0)) {
    bVar4 = true;
  }
  uVar6 = FUN_08884cc8(*(undefined4 *)(param_1 + 0x164));
  *(undefined4 *)(param_1 + 0x168) = uVar6;
  if (*(int *)(param_1 + 0x330) != 0) {
    uVar6 = 0;
    iVar5 = *(int *)(param_1 + 0x330) + -1;
    *(int *)(param_1 + 0x330) = iVar5;
    if (iVar5 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x32c);
    }
    *(undefined4 *)(param_1 + 0x168) = uVar6;
  }
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xce1ffff8;
  (**(code **)(*(int *)(param_1 + 0x14) + 0xfc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xf8));
  fVar9 = (float)vdot_t(*pauVar8,*pauVar8);
  bVar1 = 1e-05 < fVar9;
  if ((*(int *)(param_1 + 0x350) != 0) &&
     ((*(char *)(*(int *)(param_1 + 0x350) + 0x36) == '\a' ||
      (*(char *)(*(int *)(param_1 + 0x350) + 0x36) == '\n')))) {
    bVar4 = false;
    bVar1 = true;
  }
  if (bVar4) {
    if (bVar1) {
      FUN_088de24c(param_1);
      iVar5 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar5 + 0x54))(param_1 + *(short *)(iVar5 + 0x50));
    *(undefined *)(*(int *)(param_1 + 0x16c) + 0x20) = 0;
    FUN_088854b0(*(undefined4 *)(param_1 + 0x16c));
  }
  else {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x7ffdfdef;
    if (bVar1) {
      FUN_088de24c(param_1);
    }
    FUN_089dfc04(param_1);
    FUN_089dfdb0(param_1);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
    FUN_088de33c(param_1);
    FUN_088de3c8(param_1);
    if ((*(int *)(param_1 + 8) != 0x54) && (*(int *)(param_1 + 8) != 0x55)) {
      *(undefined *)(*(int *)(param_1 + 0x16c) + 0x20) = 1;
    }
    FUN_088854b0(*(undefined4 *)(param_1 + 0x16c));
    FUN_088de574(param_1);
    pauVar7 = (undefined (*) [16])(param_1 + 0x2a0);
    if ((*(uint *)(param_1 + 0x144) & 1) == 0) {
      auVar2._12_4_ = DAT_08b001ac;
      auVar2._8_4_ = DAT_08b001a8;
      auVar2._4_4_ = DAT_08b001a4;
      auVar2._0_4_ = DAT_08b001a0;
      auVar2 = vsub_q(auVar2,*pauVar7);
      auVar2 = vscl_q(auVar2,0x3e4ccccd);
      auVar2 = vadd_q(*pauVar7,auVar2);
      *(int *)*pauVar7 = auVar2._0_4_;
      *(int *)(param_1 + 0x2a4) = auVar2._4_4_;
      *(int *)(param_1 + 0x2a8) = auVar2._8_4_;
      *(int *)(param_1 + 0x2ac) = auVar2._12_4_;
      uVar6 = vdot_t(*(undefined (*) [12])*pauVar7,*(undefined (*) [12])*pauVar7);
      uVar10 = vcmp_s(8,uVar6,*(undefined4 *)*pauVar7);
      vrsq_s(uVar6);
      uVar6 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
      vpfxd(4,4,4,5);
      auVar3 = vscl_t(*(undefined (*) [12])*pauVar7,uVar6);
      *(int *)*pauVar7 = auVar3._0_4_;
      *(int *)(param_1 + 0x2a4) = auVar3._4_4_;
      *(int *)(param_1 + 0x2a8) = auVar3._8_4_;
      *(undefined4 *)(param_1 + 0x2ac) = in_V7D;
    }
  }
  return;
}

