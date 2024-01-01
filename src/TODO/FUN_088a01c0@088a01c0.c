#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a01c0(int param_1,undefined4 param_2,int param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_20;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af234c;
  *(undefined **)(param_1 + 0x160) = &DAT_08af23ec;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(bool *)(param_1 + 0x1a8) = (*(byte *)(param_3 + 0x1e) & 0x10) != 0;
  *(undefined **)(param_1 + 0x1b4) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 0x1b0) = 3;
  FUN_0889f920(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x270) = in_V72;
  *(undefined4 *)(param_1 + 0x274) = in_V76;
  *(undefined4 *)(param_1 + 0x278) = in_V7A;
  *(undefined4 *)(param_1 + 0x27c) = in_V7E;
  *(undefined4 *)(param_1 + 0x280) = in_V72;
  *(undefined4 *)(param_1 + 0x284) = in_V76;
  *(undefined4 *)(param_1 + 0x288) = in_V7A;
  *(undefined4 *)(param_1 + 0x28c) = in_V7E;
  *(undefined4 *)(param_1 + 0x290) = in_V72;
  *(undefined4 *)(param_1 + 0x294) = in_V76;
  *(undefined4 *)(param_1 + 0x298) = in_V7A;
  *(undefined4 *)(param_1 + 0x29c) = in_V7E;
  *(undefined4 *)(param_1 + 0x2a0) = in_V72;
  *(undefined4 *)(param_1 + 0x2a4) = in_V76;
  *(undefined4 *)(param_1 + 0x2a8) = in_V7A;
  *(undefined4 *)(param_1 + 0x2ac) = in_V7E;
  *(undefined4 *)(param_1 + 0x2b0) = in_V72;
  *(undefined4 *)(param_1 + 0x2b4) = in_V76;
  *(undefined4 *)(param_1 + 0x2b8) = in_V7A;
  *(undefined4 *)(param_1 + 700) = in_V7E;
  *(undefined4 *)(param_1 + 0x2c8) = uVar11;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  iVar8 = *(int *)(param_1 + 0x130);
  auVar2 = vmidt_q();
  *(int *)(iVar8 + 0x80) = auVar2._0_4_;
  *(int *)(iVar8 + 0x84) = auVar2._16_4_;
  *(int *)(iVar8 + 0x88) = auVar2._32_4_;
  *(int *)(iVar8 + 0x8c) = auVar2._48_4_;
  *(int *)(iVar8 + 0x90) = auVar2._4_4_;
  *(int *)(iVar8 + 0x94) = auVar2._20_4_;
  *(int *)(iVar8 + 0x98) = auVar2._36_4_;
  *(int *)(iVar8 + 0x9c) = auVar2._52_4_;
  *(int *)(iVar8 + 0xa0) = auVar2._8_4_;
  *(int *)(iVar8 + 0xa4) = auVar2._24_4_;
  *(int *)(iVar8 + 0xa8) = auVar2._40_4_;
  *(int *)(iVar8 + 0xac) = auVar2._56_4_;
  *(int *)(iVar8 + 0xb0) = auVar2._12_4_;
  *(int *)(iVar8 + 0xb4) = auVar2._28_4_;
  *(int *)(iVar8 + 0xb8) = auVar2._44_4_;
  *(int *)(iVar8 + 0xbc) = auVar2._60_4_;
  iVar8 = *(int *)(param_1 + 0x130);
  puVar10 = (undefined4 *)(param_1 + 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *puVar10;
  *(undefined4 *)(iVar8 + 0xb4) = uVar11;
  *(undefined4 *)(iVar8 + 0xb8) = uVar3;
  *(undefined4 *)(iVar8 + 0xbc) = uVar4;
  local_70 = *puVar10;
  local_6c = *(float *)(param_1 + 0x24);
  uStack_68 = *(undefined4 *)(param_1 + 0x28);
  uStack_64 = *(undefined4 *)(param_1 + 0x2c);
  FUN_088d4128(&local_70,&local_70);
  *(float *)(param_1 + 0x194) = local_6c + 2.0;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + 8.0;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  FUN_089dffd4(param_1,1);
  uVar9 = *(int *)(param_1 + 0x1a0) - 10;
  if (uVar9 < 6) {
    iVar8 = param_1 + 0x1e0;
    if (uVar9 == 1) {
      FUN_089b4c84(iVar8,"core14");
      *(undefined4 *)(param_1 + 0x1a4) = 0x41400000;
    }
    else if (uVar9 == 2) {
      FUN_089b4c84(iVar8,"RootNode");
      *(undefined4 *)(param_1 + 0x1a4) = 0x41600000;
    }
    else if (uVar9 == 3) {
      FUN_089b4c84(iVar8,"RootNode");
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint01");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint02");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      *(undefined4 *)(param_1 + 0x1a4) = 0x41200000;
    }
    else if (uVar9 == 4) {
      FUN_089b4c84(iVar8,"RootNode");
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint01");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint02");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      *(undefined4 *)(param_1 + 0x1a4) = 0x41400000;
    }
    else if (uVar9 == 5) {
      FUN_089b4c84(iVar8,"RootNode");
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint01");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      iVar8 = FUN_089df79c(param_1,"btl_06_repairpoint02");
      *(byte *)(iVar8 + 3) = *(byte *)(iVar8 + 3) & 0xfc;
      *(undefined4 *)(param_1 + 0x1a4) = 0x41600000;
    }
    else {
      FUN_089b4c84(iVar8,"core01");
      *(undefined4 *)(param_1 + 0x1a4) = 0x41200000;
    }
  }
  *(undefined *)(param_1 + 0xbc) = 1;
  local_20 = 0;
  FUN_089d8634();
  uVar11 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar11);
  FUN_089d866c();
  iVar8 = local_20;
  if (iVar7 != 0) {
    FUN_0881a358(iVar7,1);
    iVar8 = iVar7;
  }
  *(int *)(param_1 + 0x174) = iVar8;
  *(undefined4 *)(param_1 + 0x1c0) = in_V72;
  *(undefined4 *)(param_1 + 0x1c4) = in_V76;
  *(undefined4 *)(param_1 + 0x1c8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1cc) = in_V7E;
  *(undefined4 *)(param_1 + 0x1d0) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1cc) = 0x41100000;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x174),param_1 + 0x1b0,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x174) + 0xf4);
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 0x10) = *puVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar11;
  *(undefined4 *)(iVar8 + 0x18) = uVar3;
  *(undefined4 *)(iVar8 + 0x1c) = uVar4;
  (**(code **)(*(int *)(iVar8 + 4) + 0x4c))(iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x48));
  FUN_089ea224(*(undefined4 *)(*(int *)(param_1 + 0x130) + 0x38),&local_60);
  auVar6._4_4_ = uStack_5c;
  auVar6._0_4_ = local_60;
  auVar6._8_4_ = uStack_58;
  auVar1 = vscl_t(auVar6,0x3f4ccccd);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  uVar11 = vzero_s();
  auVar1._8_4_ = uStack_58;
  auVar1._4_4_ = uVar11;
  auVar1._0_4_ = local_60;
  auVar5._8_4_ = uStack_58;
  auVar5._4_4_ = uVar11;
  auVar5._0_4_ = local_60;
  uVar11 = vdot_t(auVar1,auVar5);
  uVar11 = vsqrt_s(uVar11);
  *(undefined4 *)(param_1 + 0x198) = uVar11;
  FUN_089e0a70(param_1,&LAB_0889f8e4,0);
  *(undefined *)(param_1 + 0x1a9) = 0;
  *(undefined *)(param_1 + 0x1aa) = 0;
  *(undefined *)(param_1 + 0x2c0) = 0;
  *(undefined *)(param_1 + 0x2c1) = 0;
  *(undefined *)(param_1 + 0x2d0) = 0;
  return param_1;
}

