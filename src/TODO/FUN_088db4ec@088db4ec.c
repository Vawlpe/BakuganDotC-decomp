#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088db4ec(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_V72;
  undefined4 in_V74;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined auStack_f0 [128];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_30;
  int local_2c;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af3734;
  *(undefined **)(param_1 + 0x160) = &DAT_08af37d4;
  *(undefined **)(param_1 + 0x1a4) = &DAT_08af55c4;
  *(undefined4 *)(param_1 + 0x1a0) = 3;
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
  uVar9 = vi2uc_q(auVar2);
  *(undefined4 *)(param_1 + 0x10c) = uVar9;
  local_100 = 0x3f19999a;
  local_fc = 0x3f19999a;
  local_f8 = 0x3f19999a;
  local_f4 = 0x3f800000;
  FUN_089e0344(0x41200000,param_1,&local_100,0);
  iVar8 = *(int *)(param_1 + 0x130);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar8 + 0xb4) = uVar9;
  *(undefined4 *)(iVar8 + 0xb8) = uVar3;
  *(undefined4 *)(iVar8 + 0xbc) = uVar4;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  strcpy(auStack_f0,(&PTR_s_fz_quest_switch01_gmo_08a975b4)[param_2 * 3]);
  puVar6 = (undefined *)strrchr(auStack_f0,0x2e);
  if (puVar6 != (undefined *)0x0) {
    *puVar6 = 0;
  }
  strcat(auStack_f0,"_col.ctc");
  local_2c = 0;
  FUN_089d8634();
  uVar9 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar9);
  FUN_089d866c();
  iVar8 = local_2c;
  if (iVar7 != 0) {
    FUN_0881a358(iVar7,3);
    iVar8 = iVar7;
  }
  *(int *)(param_1 + 0x174) = iVar8;
  uVar9 = FUN_089be054(DAT_08ac520c,auStack_f0);
  FUN_0881a484(iVar8,uVar9,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(uint *)(*(int *)(param_1 + 0x174) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x174) + 0x130) & 0xfffffffd;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar8 = *(int *)(param_1 + 0x174);
  *(int *)(iVar8 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar8 + 0x10c) = 1;
  local_30 = 0;
  FUN_089d8634();
  uVar9 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar9);
  FUN_089d866c();
  iVar8 = local_30;
  if (iVar7 != 0) {
    FUN_0881a358(iVar7,1);
    iVar8 = iVar7;
  }
  *(int *)(param_1 + 0x194) = iVar8;
  *(undefined4 *)(param_1 + 0x1b0) = in_V72;
  *(undefined4 *)(param_1 + 0x1b4) = in_V76;
  *(undefined4 *)(param_1 + 0x1b8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1bc) = in_V7E;
  *(undefined4 *)(param_1 + 0x1c0) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1bc) = 0x41100000;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x194),param_1 + 0x1a0,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x194) + 0x104) = 0;
  uVar9 = vmul_s(1.570796 - *(float *)(param_1 + 0x34),in_V7C);
  auVar2 = vrot_q(uVar9,1,0,2,0);
  uStack_54 = auVar2._12_4_;
  auVar1 = vscl_t(auVar2._0_12_,0x40400000);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  auVar5._4_4_ = *(float *)(param_1 + 0x24) + 14.0;
  auVar5._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar5._8_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar1 = vadd_t(auVar5,auVar1);
  local_70 = auVar1._0_4_;
  local_6c = auVar1._4_4_;
  local_68 = auVar1._8_4_;
  iVar8 = *(int *)(*(int *)(param_1 + 0x194) + 0xf4);
  *(undefined4 *)(iVar8 + 0x10) = local_70;
  *(undefined4 *)(iVar8 + 0x14) = local_6c;
  *(undefined4 *)(iVar8 + 0x18) = local_68;
  *(undefined4 *)(iVar8 + 0x1c) = uStack_64;
  (**(code **)(*(int *)(iVar8 + 4) + 0x4c))(iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x48));
  *(undefined4 *)(param_1 + 0x1d0) = local_70;
  *(undefined4 *)(param_1 + 0x1d4) = local_6c;
  *(undefined4 *)(param_1 + 0x1d8) = local_68;
  *(undefined4 *)(param_1 + 0x1dc) = uStack_64;
  FUN_088db408(param_1);
  FUN_088db448(param_1,*(char *)(param_1 + 0x15e) != '\0');
  return param_1;
}

