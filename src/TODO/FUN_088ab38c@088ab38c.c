#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088ab38c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  FUN_089de2e4(param_1,param_2,0x200);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2904;
  FUN_088aa3dc(param_1);
  *(undefined *)(param_1 + 0x281) = 0;
  *(undefined *)(param_1 + 0x282) = 0;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar8 = vmul_s((float)param_3[3] * 0.01745329,in_V7C);
  auVar3 = vrot_q(uVar8,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar8,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar7 + 0x80) = auVar3._0_4_;
  *(int *)(iVar7 + 0x84) = auVar3._4_4_;
  *(int *)(iVar7 + 0x88) = auVar3._8_4_;
  *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x90) = auVar1._0_4_;
  *(int *)(iVar7 + 0x94) = auVar1._4_4_;
  *(int *)(iVar7 + 0x98) = auVar1._8_4_;
  *(int *)(iVar7 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar7 + 0xa0) = auVar4._0_4_;
  *(int *)(iVar7 + 0xa4) = auVar4._4_4_;
  *(int *)(iVar7 + 0xa8) = auVar4._8_4_;
  *(int *)(iVar7 + 0xac) = auVar4._12_4_;
  *(int *)(iVar7 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar7 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar7 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar7 + 0xbc) = auVar2._12_4_;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar8 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(iVar7 + 0xb0) = *param_3;
  *(undefined4 *)(iVar7 + 0xb4) = uVar8;
  *(undefined4 *)(iVar7 + 0xb8) = uVar5;
  *(undefined4 *)(iVar7 + 0xbc) = uVar6;
  *(float *)(param_1 + 0x34) = (float)param_3[3] * -0.01745329 + 1.570796;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar8 = *(undefined4 *)(iVar7 + 0xb4);
  uVar5 = *(undefined4 *)(iVar7 + 0xb8);
  uVar6 = *(undefined4 *)(iVar7 + 0xbc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar7 + 0xb0);
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x3e99999a;
  *(undefined4 *)(param_1 + 100) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x68) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  uVar8 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0x2a0) = *param_3;
  *(undefined4 *)(param_1 + 0x2a4) = uVar8;
  *(undefined4 *)(param_1 + 0x2a8) = uVar5;
  *(undefined4 *)(param_1 + 0x2ac) = uVar6;
  FUN_089d8984(param_1,DAT_08abd5bc);
  return param_1;
}

