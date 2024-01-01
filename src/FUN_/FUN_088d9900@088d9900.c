#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d9900(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_V74;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined auStack_d0 [128];
  undefined auStack_50 [36];
  int local_2c;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af33c4;
  *(undefined **)(param_1 + 0x160) = &DAT_08af3464;
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
  uVar9 = vi2uc_q(auVar1);
  *(undefined4 *)(param_1 + 0x10c) = uVar9;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0x3f800000;
  FUN_089e0344(0x41200000,param_1,&local_f0,0);
  iVar4 = FUN_089e01bc(param_1,0);
  *(undefined *)(iVar4 + 5) = 2;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f7fbe77;
  iVar4 = *(int *)(param_1 + 0x130);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar9;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  iVar4 = FUN_089ded10(param_1,1);
  iVar6 = *(int *)(param_1 + 0x170);
  iVar8 = *(int *)(iVar6 + 0x10);
  iVar7 = *(int *)(iVar6 + 0x14);
  *(float *)(iVar4 + 0x30) = (float)*(int *)(iVar6 + 0xc) * 0.0002441406;
  *(float *)(iVar4 + 0x44) = (float)iVar8 * 0.0002441406;
  *(float *)(iVar4 + 0x58) = (float)iVar7 * 0.0002441406;
  iVar4 = FUN_089ded10(param_1,1);
  iVar6 = *(int *)(param_1 + 0x170);
  iVar8 = *(int *)(iVar6 + 0x10);
  iVar7 = *(int *)(iVar6 + 0x14);
  *(float *)(iVar4 + 0x80) = (float)*(int *)(iVar6 + 0xc) * 0.0002441406;
  *(float *)(iVar4 + 0x94) = (float)iVar8 * 0.0002441406;
  *(float *)(iVar4 + 0xa8) = (float)iVar7 * 0.0002441406;
  strcpy(auStack_d0,(&PTR_s_fz_quest_switch01_gmo_08a975b4)[param_2 * 3]);
  puVar5 = (undefined *)strrchr(auStack_d0,0x2e);
  if (puVar5 != (undefined *)0x0) {
    *puVar5 = 0;
  }
  FUN_089b4c84(auStack_50,"_col_f%d_%02d_%02d.ctc",DAT_08b00bd4,DAT_08b00bd6,
               *(undefined *)(*(int *)(param_1 + 0x170) + 0x28));
  strcat(auStack_d0,auStack_50);
  local_2c = 0;
  FUN_089d8634();
  uVar9 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar9);
  FUN_089d866c();
  iVar4 = local_2c;
  if (iVar6 != 0) {
    FUN_0881a358(iVar6,2);
    iVar4 = iVar6;
  }
  *(int *)(param_1 + 0x174) = iVar4;
  uVar9 = FUN_089be054(DAT_08ac520c,auStack_d0);
  FUN_0881a484(iVar4,uVar9,0x19,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar4 = *(int *)(param_1 + 0x174);
  *(int *)(iVar4 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
  *(undefined *)(iVar4 + 0x10c) = 1;
  FUN_088d98c0(param_1);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined *)(param_1 + 0x194) = 0;
  return param_1;
}

