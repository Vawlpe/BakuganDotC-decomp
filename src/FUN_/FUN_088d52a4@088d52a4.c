#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d52a4(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined auVar4 [12];
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_t1;
  byte bVar9;
  undefined4 uVar10;
  undefined4 in_V72;
  undefined4 in_V74;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined auStack_140 [128];
  undefined auStack_c0 [32];
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_40;
  int local_3c;
  int local_38;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2e2c;
  *(undefined **)(param_1 + 0x160) = &DAT_08af2ecc;
  *(undefined **)(param_1 + 0x194) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 400) = 3;
  bVar9 = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  auVar2._12_4_ = DAT_08b001bc;
  auVar2._8_4_ = DAT_08b001b8;
  auVar2._4_4_ = DAT_08b001b4;
  auVar2._0_4_ = DAT_08b001b0;
  auVar2 = vsat0_q(auVar2);
  auVar2 = vscl_q(auVar2,in_V74);
  auVar2 = vf2iz_q(auVar2,0x17);
  uVar10 = vi2uc_q(auVar2);
  *(undefined4 *)(param_1 + 0x10c) = uVar10;
  local_150 = 0x3f19999a;
  local_14c = 0x3f19999a;
  local_148 = 0x3f19999a;
  local_144 = 0x3f800000;
  FUN_089e0344(0x41200000,param_1,&local_150,0);
  if ((*(byte *)(*(int *)(param_1 + 0x170) + 0x23) & 0xf) < 5) {
    bVar9 = *(byte *)(*(int *)(param_1 + 0x170) + 0x23) & 0xf;
  }
  iVar7 = *(int *)(param_1 + 0x130);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar7 + 0xb4) = uVar10;
  *(undefined4 *)(iVar7 + 0xb8) = uVar8;
  *(undefined4 *)(iVar7 + 0xbc) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  strcpy(auStack_140,(&PTR_s_fz_quest_switch01_gmo_08a975b4)[param_2 * 3]);
  puVar5 = (undefined *)strrchr(auStack_140,0x2e);
  if (puVar5 != (undefined *)0x0) {
    *puVar5 = 0;
  }
  FUN_089b4c84(auStack_c0,"_col.ctc",bVar9);
  strcat(auStack_140,auStack_c0);
  local_38 = 0;
  FUN_089d8634();
  uVar10 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar10);
  FUN_089d866c();
  iVar7 = local_38;
  if (iVar6 != 0) {
    FUN_0881a358(iVar6,3);
    iVar7 = iVar6;
  }
  *(int *)(param_1 + 0x174) = iVar7;
  uVar10 = FUN_089be054(DAT_08ac520c,auStack_140);
  FUN_0881a484(iVar7,uVar10,0x13,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar7 = *(int *)(param_1 + 0x174);
  *(int *)(iVar7 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar7 + 0x10c) = 1;
  local_3c = 0;
  FUN_089d8634();
  uVar10 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar10);
  FUN_089d866c();
  iVar7 = local_3c;
  if (iVar6 != 0) {
    FUN_0881a358(iVar6,1);
    iVar7 = iVar6;
  }
  *(int *)(param_1 + 0x180) = iVar7;
  *(undefined4 *)(param_1 + 0x1a0) = in_V72;
  *(undefined4 *)(param_1 + 0x1a4) = in_V76;
  *(undefined4 *)(param_1 + 0x1a8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ac) = in_V7E;
  *(undefined4 *)(param_1 + 0x1b0) = 0x41000000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x42800000;
  local_a0 = *(undefined4 *)(param_1 + 0x20);
  uStack_98 = *(undefined4 *)(param_1 + 0x28);
  uStack_94 = *(undefined4 *)(param_1 + 0x2c);
  local_9c = *(float *)(param_1 + 0x24) + 10.0;
  *(undefined4 *)(param_1 + 0x1a0) = local_a0;
  *(float *)(param_1 + 0x1a4) = local_9c;
  *(undefined4 *)(param_1 + 0x1a8) = uStack_98;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_94;
  (**(code **)(*(int *)(param_1 + 0x194) + 0x4c))
            (param_1 + 400 + (int)*(short *)(*(int *)(param_1 + 0x194) + 0x48));
  FUN_0881a520(*(undefined4 *)(param_1 + 0x180),param_1 + 400,0xb,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x180) + 0x104) = 0;
  uVar10 = vmul_s(1.570796 - *(float *)(param_1 + 0x34),in_V7C);
  auVar2 = vrot_q(uVar10,1,0,2,0);
  uStack_74 = auVar2._12_4_;
  auVar1 = vscl_t(auVar2._0_12_,0x40400000);
  uStack_7c = auVar1._4_4_;
  local_80 = 0;
  local_78 = 0;
  auVar1._4_4_ = *(float *)(param_1 + 0x24) + 7.0;
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar4._4_8_ = 0;
  auVar4._0_4_ = uStack_7c;
  auVar1 = vadd_t(auVar1,auVar4 << 0x20);
  local_90 = auVar1._0_4_;
  local_8c = auVar1._4_4_;
  local_88 = auVar1._8_4_;
  iVar7 = *(int *)(*(int *)(param_1 + 0x180) + 0xf4);
  *(undefined4 *)(iVar7 + 0x10) = local_90;
  *(undefined4 *)(iVar7 + 0x14) = local_8c;
  *(undefined4 *)(iVar7 + 0x18) = local_88;
  *(undefined4 *)(iVar7 + 0x1c) = uStack_84;
  (**(code **)(*(int *)(iVar7 + 4) + 0x4c))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x48));
  *(undefined4 *)(param_1 + 0x1d0) = local_90;
  *(undefined4 *)(param_1 + 0x1d4) = local_8c;
  *(undefined4 *)(param_1 + 0x1d8) = local_88;
  *(undefined4 *)(param_1 + 0x1dc) = uStack_84;
  *(undefined *)(param_1 + 0x1e0) = 0;
  iVar6 = 0;
  iVar7 = param_1;
  do {
    local_40 = iVar7;
    uVar10 = FUN_089d79a4(0x38,1);
    uVar8 = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(local_40 + 0x184) = uVar10;
    memcpy_jak(uVar10,uVar8,0x38);
    iVar6 = iVar6 + 1;
    iVar7 = local_40 + 4;
  } while (iVar6 < 3);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + 7.0;
  FUN_088d9868(param_1);
  *(undefined *)(param_1 + 0x1e1) = 0;
  *(int *)(param_1 + 0x1e4) = in_t1;
  if (((in_t1 == 0) && (DAT_08b00bd4 == '\0')) && (DAT_08b00bd6 == '\0')) {
    iVar7 = *(int *)(param_1 + 0x130);
    uVar10 = *(undefined4 *)(iVar7 + 0xb4);
    uVar8 = *(undefined4 *)(iVar7 + 0xb8);
    uVar3 = *(undefined4 *)(iVar7 + 0xbc);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar7 + 0xb0);
    *(undefined4 *)(param_1 + 0x1c4) = uVar10;
    *(undefined4 *)(param_1 + 0x1c8) = uVar8;
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    iVar7 = FUN_088243d8(DAT_08ac5c70,0x56,*(int *)(param_1 + 0x130) + 0xb0);
    *(undefined4 *)(iVar7 + 0xd8) = 4;
    *(undefined4 *)(iVar7 + 0x1d4) = 0x40800000;
    *(undefined4 *)(iVar7 + 0x70) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x74) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x78) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x7c) = 0;
    *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) + 11.0;
    *(undefined4 **)(iVar7 + 0x160) = (undefined4 *)(param_1 + 0x1c0);
    *(undefined *)(param_1 + 0x1e1) = 1;
  }
  return param_1;
}

