#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0889c9d8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = 0;
  if (iVar6 != 0) {
    FUN_089de2e4(iVar6,param_1,0);
    iVar7 = iVar6;
  }
  iVar6 = *(int *)(iVar7 + 0x130);
  uVar5 = vmul_s(param_2[3],in_V7C);
  auVar3 = vrot_q(uVar5,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar5,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar6 + 0x80) = auVar3._0_4_;
  *(int *)(iVar6 + 0x84) = auVar3._4_4_;
  *(int *)(iVar6 + 0x88) = auVar3._8_4_;
  *(int *)(iVar6 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar6 + 0x90) = auVar1._0_4_;
  *(int *)(iVar6 + 0x94) = auVar1._4_4_;
  *(int *)(iVar6 + 0x98) = auVar1._8_4_;
  *(int *)(iVar6 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar6 + 0xa0) = auVar4._0_4_;
  *(int *)(iVar6 + 0xa4) = auVar4._4_4_;
  *(int *)(iVar6 + 0xa8) = auVar4._8_4_;
  *(int *)(iVar6 + 0xac) = auVar4._12_4_;
  *(int *)(iVar6 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar6 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar6 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar6 + 0xbc) = auVar2._12_4_;
  iVar6 = *(int *)(iVar7 + 0x130);
  uVar5 = param_2[1];
  uVar8 = param_2[2];
  *(undefined4 *)(iVar6 + 0xb0) = *param_2;
  *(undefined4 *)(iVar6 + 0xb4) = uVar5;
  *(undefined4 *)(iVar6 + 0xb8) = uVar8;
  *(undefined4 *)(iVar6 + 0xbc) = 0x3f800000;
  if (param_4 == '\0') {
    *(undefined *)(iVar7 + 0xbc) = 0;
  }
  else {
    *(undefined *)(iVar7 + 0xbc) = 1;
    *(undefined4 *)(iVar7 + 0x60) = 0x3e99999a;
    *(undefined4 *)(iVar7 + 100) = 0x3e99999a;
    *(undefined4 *)(iVar7 + 0x68) = 0x3e99999a;
    *(undefined4 *)(iVar7 + 0x6c) = 0x3f800000;
  }
  FUN_089d8984(iVar7,param_3);
  return iVar7;
}

