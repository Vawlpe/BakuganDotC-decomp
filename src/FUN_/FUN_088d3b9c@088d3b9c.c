#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d3b9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_V7C;
  
  FUN_089d8634();
  uVar6 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar6);
  FUN_089d866c();
  iVar8 = 0;
  if (iVar7 != 0) {
    FUN_089de2e4(iVar7,param_1,0);
    iVar8 = iVar7;
  }
  iVar7 = *(int *)(iVar8 + 0x130);
  uVar6 = vmul_s(param_2[3],in_V7C);
  auVar3 = vrot_q(uVar6,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar6,2,0,1,0);
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
  iVar7 = *(int *)(iVar8 + 0x130);
  uVar6 = param_2[1];
  uVar9 = param_2[2];
  *(undefined4 *)(iVar7 + 0xb0) = *param_2;
  *(undefined4 *)(iVar7 + 0xb4) = uVar6;
  *(undefined4 *)(iVar7 + 0xb8) = uVar9;
  *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
  iVar7 = *(int *)(iVar8 + 0x130);
  uVar6 = *(undefined4 *)(iVar7 + 0xb4);
  uVar9 = *(undefined4 *)(iVar7 + 0xb8);
  uVar5 = *(undefined4 *)(iVar7 + 0xbc);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar7 + 0xb0);
  *(undefined4 *)(iVar8 + 0x24) = uVar6;
  *(undefined4 *)(iVar8 + 0x28) = uVar9;
  *(undefined4 *)(iVar8 + 0x2c) = uVar5;
  if (param_4 == '\0') {
    *(undefined *)(iVar8 + 0xbc) = 0;
  }
  else {
    *(char *)(iVar8 + 0xbc) = param_4;
    *(undefined4 *)(iVar8 + 0x60) = 0x3e99999a;
    *(undefined4 *)(iVar8 + 100) = 0x3e99999a;
    *(undefined4 *)(iVar8 + 0x68) = 0x3e99999a;
    *(undefined4 *)(iVar8 + 0x6c) = 0x3f800000;
  }
  FUN_088d3b78(iVar8);
  FUN_089d8984(iVar8,param_3);
  return iVar8;
}

