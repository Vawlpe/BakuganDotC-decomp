#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d78ec(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [12];
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af31ac;
  *(undefined **)(param_1 + 0x160) = &DAT_08af324c;
  iVar8 = *(int *)(param_1 + 0x170);
  auVar7._4_4_ = (float)*(int *)(iVar8 + 0x2c) * 0.0002441406;
  auVar7._0_4_ = (float)*(int *)(iVar8 + 0x28) * 0.0002441406;
  auVar7._8_4_ = (float)*(int *)(iVar8 + 0x30) * 0.0002441406;
  vscl_t(auVar7,0x41a00000);
  puVar9 = (undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 400) = *puVar9;
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x2c);
  *puVar9 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  FUN_089df450(0,param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  FUN_089dffd4(param_1,0);
  iVar8 = *(int *)(param_1 + 0x130);
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar3 = vrot_q(uVar10,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar10,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar8 + 0x80) = auVar3._0_4_;
  *(int *)(iVar8 + 0x84) = auVar3._4_4_;
  *(int *)(iVar8 + 0x88) = auVar3._8_4_;
  *(int *)(iVar8 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar8 + 0x90) = auVar1._0_4_;
  *(int *)(iVar8 + 0x94) = auVar1._4_4_;
  *(int *)(iVar8 + 0x98) = auVar1._8_4_;
  *(int *)(iVar8 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar8 + 0xa0) = auVar4._0_4_;
  *(int *)(iVar8 + 0xa4) = auVar4._4_4_;
  *(int *)(iVar8 + 0xa8) = auVar4._8_4_;
  *(int *)(iVar8 + 0xac) = auVar4._12_4_;
  *(int *)(iVar8 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar8 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar8 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar8 + 0xbc) = auVar2._12_4_;
  iVar8 = *(int *)(param_1 + 0x130);
  auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),0x3f800000);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),0x3f800000);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),0x3f800000);
  *(int *)*(undefined (*) [16])(iVar8 + 0x80) = auVar1._0_4_;
  *(int *)(iVar8 + 0x84) = auVar1._4_4_;
  *(int *)(iVar8 + 0x88) = auVar1._8_4_;
  *(int *)(iVar8 + 0x8c) = auVar1._12_4_;
  *(int *)(iVar8 + 0x90) = auVar2._0_4_;
  *(int *)(iVar8 + 0x94) = auVar2._4_4_;
  *(int *)(iVar8 + 0x98) = auVar2._8_4_;
  *(int *)(iVar8 + 0x9c) = auVar2._12_4_;
  *(int *)(iVar8 + 0xa0) = auVar3._0_4_;
  *(int *)(iVar8 + 0xa4) = auVar3._4_4_;
  *(int *)(iVar8 + 0xa8) = auVar3._8_4_;
  *(int *)(iVar8 + 0xac) = auVar3._12_4_;
  iVar8 = *(int *)(param_1 + 0x130);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *puVar9;
  *(undefined4 *)(iVar8 + 0xb4) = uVar10;
  *(undefined4 *)(iVar8 + 0xb8) = uVar5;
  *(undefined4 *)(iVar8 + 0xbc) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  *(undefined *)(param_1 + 0x1a0) = 0;
  *(undefined *)(param_1 + 0x1a1) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
  *(undefined *)(param_1 + 0x1a9) = 0;
  *(undefined *)(param_1 + 0x1a8) = 0;
  iVar8 = (uint)*(byte *)(param_1 + 0x1a9) * 8;
  *(char *)(param_1 + 0x1aa) = (char)*(undefined2 *)(&DAT_08abf078 + iVar8);
  *(char *)(param_1 + 0x1ab) = (char)*(undefined2 *)(&DAT_08abf07a + iVar8);
  *(char *)(param_1 + 0x1ac) = (char)*(undefined2 *)(&DAT_08abf07c + iVar8);
  *(char *)(param_1 + 0x1ad) = (char)*(undefined2 *)(&DAT_08abf07e + iVar8);
  return param_1;
}

