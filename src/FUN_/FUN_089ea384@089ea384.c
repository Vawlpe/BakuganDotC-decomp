#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ea384(int param_1,int param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [36];
  int iVar6;
  undefined4 uVar7;
  
  if (DAT_08af85a0 == 0) {
    DAT_08af85a0 = 1;
    DAT_08af85b4 = &DAT_08af5504;
    DAT_08af85b0 = 1;
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    auVar1 = vzero_t();
    auVar5._32_4_ = *(undefined4 *)(param_1 + 0x58);
    auVar5._28_4_ = *(undefined4 *)(param_1 + 0x48);
    auVar5._24_4_ = *(undefined4 *)(param_1 + 0x38);
    auVar5._20_4_ = *(undefined4 *)(param_1 + 0x54);
    auVar5._16_4_ = *(undefined4 *)(param_1 + 0x44);
    auVar5._12_4_ = *(undefined4 *)(param_1 + 0x34);
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x50);
    auVar5._4_4_ = *(undefined4 *)(param_1 + 0x40);
    auVar5._0_4_ = *(undefined4 *)(param_1 + 0x30);
    auVar2 = vtfm3_t(auVar5,*(undefined (*) [12])(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x50);
    *(int *)(param_1 + 0x7c) = auVar1._0_4_;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x8c) = auVar1._4_4_;
    auVar2 = vneg_t(auVar2);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x9c) = auVar1._8_4_;
    *(int *)(param_1 + 0xa0) = auVar2._0_4_;
    *(int *)(param_1 + 0xa4) = auVar2._4_4_;
    *(int *)(param_1 + 0xa8) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined *)(param_1 + 0xb0) = 1;
    iVar6 = *(int *)(param_2 + 4);
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  (**(code **)(iVar6 + 0x34))
            (param_2 + *(short *)(iVar6 + 0x30),(undefined4 *)(param_1 + 0x70),&DAT_08af85b0);
  iVar6 = FUN_089e9ea4(param_1 + 0x10,&DAT_08af85b0,param_3);
  if (iVar6 != 0) {
    uVar7 = vfim_s(0x3c00);
    auVar4._8_8_ = *(undefined8 *)(param_1 + 0x40);
    auVar4._4_4_ = *(undefined4 *)(param_1 + 0x34);
    auVar4._0_4_ = *(undefined4 *)(param_1 + 0x30);
    auVar3._12_4_ = uVar7;
    auVar3._8_4_ = param_3[2];
    auVar3._4_4_ = param_3[1];
    auVar3._0_4_ = *param_3;
    auVar3 = vtfm4_q(auVar4,auVar3);
    *param_3 = auVar3._0_4_;
    param_3[1] = auVar3._4_4_;
    param_3[2] = auVar3._8_4_;
    param_3[3] = auVar3._12_4_;
    return 1;
  }
  return 0;
}

