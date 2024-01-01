#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b8078(int param_1,int param_2)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  undefined4 in_V72;
  undefined4 in_V74;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_089de2e4(param_1,(&PTR_DAT_08ab0308)[param_2],0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2c94;
  *(int *)(param_1 + 8) = param_2;
  iVar2 = DAT_08abd644 + 1;
  *(int *)(param_1 + 0xc) = DAT_08abd644;
  DAT_08abd644 = iVar2;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  iVar2 = DAT_08abd640 % 0xdf;
  DAT_08abd640 = DAT_08abd640 + 1;
  *(int *)(param_1 + 0x140) = iVar2 + 0x60;
  *(undefined4 *)(param_1 + 0x144) = 0;
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
  uVar3 = vi2uc_q(auVar1);
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  local_40 = 0x3f19999a;
  local_3c = 0x3f19999a;
  local_38 = 0x3f19999a;
  local_34 = 0x3f800000;
  FUN_089e0344(0x41200000,param_1,&local_40,0);
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  FUN_088b7e58(param_1);
  FUN_088b7fd8(0x3e4ccccd,param_1,1,0,0);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined *)(param_1 + 0x1d1) = 0;
  FUN_089d8984(param_1,DAT_08abd648);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x170) = in_V72;
  *(undefined4 *)(param_1 + 0x174) = in_V76;
  *(undefined4 *)(param_1 + 0x178) = in_V7A;
  *(undefined4 *)(param_1 + 0x17c) = in_V7E;
  *(undefined4 *)(param_1 + 0x180) = in_V72;
  *(undefined4 *)(param_1 + 0x184) = in_V76;
  *(undefined4 *)(param_1 + 0x188) = in_V7A;
  *(undefined4 *)(param_1 + 0x18c) = in_V7E;
  *(undefined4 *)(param_1 + 0x160) = in_V72;
  *(undefined4 *)(param_1 + 0x164) = in_V76;
  *(undefined4 *)(param_1 + 0x168) = in_V7A;
  *(undefined4 *)(param_1 + 0x16c) = in_V7E;
  *(undefined *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = in_V72;
  *(undefined4 *)(param_1 + 0x1e4) = in_V76;
  *(undefined4 *)(param_1 + 0x1e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ec) = in_V7E;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined *)(param_1 + 0x1f5) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = in_V72;
  *(undefined4 *)(param_1 + 0x1b4) = in_V76;
  *(undefined4 *)(param_1 + 0x1b8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1bc) = in_V7E;
  *(undefined4 *)(param_1 + 0x1a0) = in_V72;
  *(undefined4 *)(param_1 + 0x1a4) = in_V76;
  *(undefined4 *)(param_1 + 0x1a8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ac) = in_V7E;
  FUN_089e0a70(param_1,&LAB_088b77dc,0);
  *(undefined *)(param_1 + 500) = 0;
  *(undefined *)(param_1 + 0x1fc) = 0;
  return param_1;
}

