#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088dab2c(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_V74;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  int local_2c;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af35d4;
  *(undefined **)(param_1 + 0x160) = &DAT_08af3674;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  auVar1._12_4_ = DAT_08b001bc;
  auVar1._8_4_ = DAT_08b001b8;
  auVar1._4_4_ = DAT_08b001b4;
  auVar1._0_4_ = DAT_08b001b0;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar6 = vi2uc_q(auVar1);
  *(undefined4 *)(param_1 + 0x10c) = uVar6;
  local_c0 = 0x3f19999a;
  local_bc = 0x3f19999a;
  local_b8 = 0x3f19999a;
  local_b4 = 0x3f800000;
  FUN_089e0344(0x41200000,param_1,&local_c0,0);
  iVar5 = *(int *)(param_1 + 0x130);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar5 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + 0xb4) = uVar6;
  *(undefined4 *)(iVar5 + 0xb8) = uVar2;
  *(undefined4 *)(iVar5 + 0xbc) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  local_b0 = 0x715f7a66;
  local_ac = 0x74736575;
  local_a8 = 0x756f745f;
  local_a4 = 0x61706863;
  local_a0 = 0x306c656e;
  local_9c = 0x69685f31;
  local_98 = 0x74632e74;
  local_94 = 99;
  local_2c = 0;
  FUN_089d8634();
  uVar6 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar6);
  FUN_089d866c();
  iVar5 = local_2c;
  if (iVar4 != 0) {
    FUN_0881a358(iVar4,3);
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x174) = iVar5;
  uVar6 = FUN_089be054(DAT_08ac520c,&local_b0);
  FUN_0881a484(iVar5,uVar6,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(uint *)(*(int *)(param_1 + 0x174) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x174) + 0x130) & 0xfffffffd;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar5 = *(int *)(param_1 + 0x174);
  *(int *)(iVar5 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar5 + 0x10c) = 1;
  return param_1;
}

