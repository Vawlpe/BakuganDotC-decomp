#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889ce8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

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
  
  iVar7 = FUN_089f5700(DAT_08ac5c68,"StopWall");
  *(undefined4 *)(iVar7 + 0xdc) = 2;
  *(undefined4 *)(iVar7 + 0xe0) = 2;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 0x10000001;
  uVar6 = DAT_08b0019c;
  uVar5 = DAT_08b00198;
  uVar8 = DAT_08b00194;
  *(undefined4 *)(iVar7 + 0xb0) = DAT_08b00190;
  *(undefined4 *)(iVar7 + 0xb4) = uVar8;
  *(undefined4 *)(iVar7 + 0xb8) = uVar5;
  *(undefined4 *)(iVar7 + 0xbc) = uVar6;
  *(undefined4 *)(iVar7 + 0x80) = param_3;
  uVar8 = vmul_s(param_4[3],in_V7C);
  auVar3 = vrot_q(uVar8,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar8,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar7 + 0x20) = auVar3._0_4_;
  *(int *)(iVar7 + 0x24) = auVar3._4_4_;
  *(int *)(iVar7 + 0x28) = auVar3._8_4_;
  *(int *)(iVar7 + 0x2c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x30) = auVar1._0_4_;
  *(int *)(iVar7 + 0x34) = auVar1._4_4_;
  *(int *)(iVar7 + 0x38) = auVar1._8_4_;
  *(int *)(iVar7 + 0x3c) = auVar1._12_4_;
  *(int *)(iVar7 + 0x40) = auVar4._0_4_;
  *(int *)(iVar7 + 0x44) = auVar4._4_4_;
  *(int *)(iVar7 + 0x48) = auVar4._8_4_;
  *(int *)(iVar7 + 0x4c) = auVar4._12_4_;
  *(int *)(iVar7 + 0x50) = auVar2._0_4_;
  *(int *)(iVar7 + 0x54) = auVar2._4_4_;
  *(int *)(iVar7 + 0x58) = auVar2._8_4_;
  *(int *)(iVar7 + 0x5c) = auVar2._12_4_;
  uVar8 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(undefined4 *)(iVar7 + 0x60) = *param_4;
  *(undefined4 *)(iVar7 + 100) = uVar8;
  *(undefined4 *)(iVar7 + 0x68) = uVar5;
  *(undefined4 *)(iVar7 + 0x6c) = uVar6;
  *(undefined4 *)(iVar7 + 0x70) = param_1;
  *(undefined4 *)(iVar7 + 0x74) = param_2;
  return;
}

