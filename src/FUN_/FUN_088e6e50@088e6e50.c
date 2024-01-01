#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e6e50(int param_1)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  int iVar4;
  uint uVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_V7D;
  undefined4 uVar11;
  
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x34);
  uVar9 = 0x43960000;
  if (DAT_08ac5c90 == 0) {
LAB_088e6ec8:
    iVar4 = *(int *)(param_1 + 0x14);
  }
  else {
    switch(*(undefined4 *)(DAT_08ac5c90 + 0x2ac)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      iVar4 = *(int *)(param_1 + 0x14);
      break;
    case 7:
      uVar9 = 0x43e10000;
      goto LAB_088e6ec8;
    default:
      iVar4 = *(int *)(param_1 + 0x14);
    }
  }
  (**(code **)(iVar4 + 0x104))(param_1 + *(short *)(iVar4 + 0x100));
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0x4e1dffe8;
  uVar8 = FUN_088e5ec0(param_1);
  *(undefined4 *)(param_1 + 0x420) = uVar8;
  (**(code **)(*(int *)(param_1 + 0x14) + 0xfc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xf8));
  iVar4 = *(int *)(param_1 + 0x3a0);
  if ((iVar4 != 8) && (iVar4 != 6)) {
    if (iVar4 == 4) {
      iVar4 = *(int *)(param_1 + 0x14);
      goto LAB_088e6fc0;
    }
    if (*(char *)(param_1 + 0x400) != '\0') {
      iVar4 = *(int *)(param_1 + 0x14);
      goto LAB_088e6fc0;
    }
    iVar4 = FUN_088e628c(param_1);
    if (iVar4 != 2) {
      iVar4 = *(int *)(param_1 + 0x14);
      goto LAB_088e6fc0;
    }
    iVar4 = FUN_089bfa40(500);
    if (*(char *)(iVar4 + 0x6e8) != '\0') {
      iVar4 = *(int *)(param_1 + 0x14);
      goto LAB_088e6fc0;
    }
    iVar4 = FUN_088e1948();
    if (*(char *)(iVar4 + 0x354) != '\0') {
      iVar4 = *(int *)(param_1 + 0x14);
      goto LAB_088e6fc0;
    }
    if (*(int *)(param_1 + 0x3a0) != 5) {
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x2c);
    }
    iVar4 = FUN_089bfa40(500);
    *(undefined *)(iVar4 + 0x6e8) = 1;
    *(undefined4 *)(param_1 + 0x3a0) = 4;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_088df9f0(param_1,(int)*(short *)(param_1 + 0x430));
  }
  iVar4 = *(int *)(param_1 + 0x14);
LAB_088e6fc0:
  *(undefined *)(param_1 + 0x432) = 0;
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    (0x4019999a,uVar9,param_1 + *(short *)(iVar4 + 0x28),
                     *(int *)(param_1 + 0x130) + 0xb0,param_1 + 0x6c);
  if (iVar4 != 0) {
    *(undefined *)(param_1 + 0x432) = 1;
  }
  fVar10 = (float)vdot_t(*(undefined (*) [12])(param_1 + 0x80),*(undefined (*) [12])(param_1 + 0x80)
                        );
  bVar1 = 1e-05 < fVar10;
  if ((*(char *)(param_1 + 0x432) == '\0') || (*(int *)(param_1 + 0x3a0) == 8)) {
    if (bVar1) {
      FUN_088de24c(param_1);
    }
    FUN_089dfc04(param_1);
    FUN_089dfdb0(param_1);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
    FUN_088de33c(param_1);
    if (bVar1) {
      uVar7 = (uint)*(byte *)(param_1 + 0x34c);
      if ((int)uVar7 < 0) {
        uVar7 = -(-uVar7 & 3);
      }
      else {
        uVar7 = uVar7 & 3;
      }
      iVar4 = FUN_088be274();
      uVar5 = *(uint *)(iVar4 + 0x614);
      if ((int)uVar5 < 0) {
        uVar5 = -(-uVar5 & 3);
      }
      else {
        uVar5 = uVar5 & 3;
      }
      if (uVar7 != uVar5) {
        FUN_088de3c8(param_1);
        *(undefined *)(param_1 + 0x1c8) = 0;
      }
    }
    FUN_088de574(param_1);
    pauVar6 = (undefined (*) [16])(param_1 + 0x2a0);
    if ((*(uint *)(param_1 + 0x144) & 1) == 0) {
      auVar2._12_4_ = DAT_08b001ac;
      auVar2._8_4_ = DAT_08b001a8;
      auVar2._4_4_ = DAT_08b001a4;
      auVar2._0_4_ = DAT_08b001a0;
      auVar2 = vsub_q(auVar2,*pauVar6);
      auVar2 = vscl_q(auVar2,0x3e4ccccd);
      auVar2 = vadd_q(*pauVar6,auVar2);
      *(int *)*pauVar6 = auVar2._0_4_;
      *(int *)(param_1 + 0x2a4) = auVar2._4_4_;
      *(int *)(param_1 + 0x2a8) = auVar2._8_4_;
      *(int *)(param_1 + 0x2ac) = auVar2._12_4_;
      uVar8 = vdot_t(*(undefined (*) [12])*pauVar6,*(undefined (*) [12])*pauVar6);
      uVar11 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar6);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
      vpfxd(4,4,4,5);
      auVar3 = vscl_t(*(undefined (*) [12])*pauVar6,uVar8);
      *(int *)*pauVar6 = auVar3._0_4_;
      *(int *)(param_1 + 0x2a4) = auVar3._4_4_;
      *(int *)(param_1 + 0x2a8) = auVar3._8_4_;
      *(undefined4 *)(param_1 + 0x2ac) = in_V7D;
    }
  }
  else {
    if (bVar1) {
      FUN_088de24c(param_1);
      iVar4 = *(int *)(param_1 + 0x3a0);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3a0);
    }
    if (iVar4 == 6) {
      FUN_089dfc04(param_1);
      FUN_089dfdb0(param_1);
      iVar4 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x14);
    }
    (**(code **)(iVar4 + 0x54))(param_1 + *(short *)(iVar4 + 0x50));
    uVar7 = (uint)*(byte *)(param_1 + 0x34c);
    if ((int)uVar7 < 0) {
      uVar7 = -(-uVar7 & 3);
    }
    else {
      uVar7 = uVar7 & 3;
    }
    iVar4 = FUN_088be274();
    uVar5 = *(uint *)(iVar4 + 0x614);
    if ((int)uVar5 < 0) {
      uVar5 = -(-uVar5 & 3);
    }
    else {
      uVar5 = uVar5 & 3;
    }
    if (uVar7 != uVar5) {
      return;
    }
    FUN_088de33c(param_1);
    if (bVar1) {
      FUN_088de3c8(param_1);
      *(undefined *)(param_1 + 0x1c8) = 0;
    }
  }
  FUN_088854b0(*(undefined4 *)(param_1 + 0x16c));
  (**(code **)(*(int *)(param_1 + 0x14) + 0x17c))
            (uVar9,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x178));
  (**(code **)(*(int *)(param_1 + 0x14) + 0x18c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x188));
  return;
}

