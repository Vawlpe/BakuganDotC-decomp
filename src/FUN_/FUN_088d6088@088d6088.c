#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d6088(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [12];
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 in_V7C;
  undefined auStack_70 [80];
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2f8c;
  *(undefined **)(param_1 + 0x160) = &DAT_08af302c;
  iVar9 = *(int *)(param_1 + 0x170);
  auVar7._4_4_ = (float)*(int *)(iVar9 + 0x2c) * 0.0002441406;
  auVar7._0_4_ = (float)*(int *)(iVar9 + 0x28) * 0.0002441406;
  auVar7._8_4_ = (float)*(int *)(iVar9 + 0x30) * 0.0002441406;
  vscl_t(auVar7,0x41a00000);
  memset_jak(param_1 + 0x194,0,0x80);
  uVar11 = 0;
  iVar9 = param_1 + 0x194;
  do {
    FUN_088d6014(param_1,uVar11 & 0xff,iVar9);
    FUN_089b4c84(auStack_70,"%s.gmo",iVar9);
    uVar8 = FUN_089d9674();
    FUN_089d9914(uVar8,auStack_70);
    uVar11 = uVar11 + 1;
    iVar9 = iVar9 + 0x40;
  } while ((int)uVar11 < 2);
  FUN_089df3b0(0x3e4ccccd,param_1,param_1 + 0x194,0);
  FUN_089df450(0,param_1);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  puVar10 = (undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x180) = *puVar10;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = DAT_08abf05c;
  uVar5 = DAT_08abf058;
  uVar8 = DAT_08abf054;
  *puVar10 = DAT_08abf050;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  iVar9 = *(int *)(param_1 + 0x130);
  uVar8 = vmul_s(*(float *)(param_1 + 0x34) + 0.35,in_V7C);
  auVar3 = vrot_q(uVar8,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar8,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar9 + 0x80) = auVar3._0_4_;
  *(int *)(iVar9 + 0x84) = auVar3._4_4_;
  *(int *)(iVar9 + 0x88) = auVar3._8_4_;
  *(int *)(iVar9 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar9 + 0x90) = auVar1._0_4_;
  *(int *)(iVar9 + 0x94) = auVar1._4_4_;
  *(int *)(iVar9 + 0x98) = auVar1._8_4_;
  *(int *)(iVar9 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar9 + 0xa0) = auVar4._0_4_;
  *(int *)(iVar9 + 0xa4) = auVar4._4_4_;
  *(int *)(iVar9 + 0xa8) = auVar4._8_4_;
  *(int *)(iVar9 + 0xac) = auVar4._12_4_;
  *(int *)(iVar9 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar9 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar9 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar9 + 0xbc) = auVar2._12_4_;
  iVar9 = *(int *)(param_1 + 0x130);
  auVar1 = vscl_q(*(undefined (*) [16])(iVar9 + 0x80),0x3e19999a);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar9 + 0x90),0x3e19999a);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar9 + 0xa0),0x3e19999a);
  *(int *)*(undefined (*) [16])(iVar9 + 0x80) = auVar1._0_4_;
  *(int *)(iVar9 + 0x84) = auVar1._4_4_;
  *(int *)(iVar9 + 0x88) = auVar1._8_4_;
  *(int *)(iVar9 + 0x8c) = auVar1._12_4_;
  *(int *)(iVar9 + 0x90) = auVar2._0_4_;
  *(int *)(iVar9 + 0x94) = auVar2._4_4_;
  *(int *)(iVar9 + 0x98) = auVar2._8_4_;
  *(int *)(iVar9 + 0x9c) = auVar2._12_4_;
  *(int *)(iVar9 + 0xa0) = auVar3._0_4_;
  *(int *)(iVar9 + 0xa4) = auVar3._4_4_;
  *(int *)(iVar9 + 0xa8) = auVar3._8_4_;
  *(int *)(iVar9 + 0xac) = auVar3._12_4_;
  iVar9 = *(int *)(param_1 + 0x130);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar9 + 0xb0) = *puVar10;
  *(undefined4 *)(iVar9 + 0xb4) = uVar8;
  *(undefined4 *)(iVar9 + 0xb8) = uVar5;
  *(undefined4 *)(iVar9 + 0xbc) = uVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  return param_1;
}

