#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ea250(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [36];
  int iVar4;
  
  if (DAT_08af8540 == 0) {
    DAT_08af8540 = 1;
    DAT_08af8554 = &DAT_08af5564;
    DAT_08af8550 = 2;
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    auVar1 = vzero_t();
    auVar3._32_4_ = *(undefined4 *)(param_1 + 0x58);
    auVar3._28_4_ = *(undefined4 *)(param_1 + 0x48);
    auVar3._24_4_ = *(undefined4 *)(param_1 + 0x38);
    auVar3._20_4_ = *(undefined4 *)(param_1 + 0x54);
    auVar3._16_4_ = *(undefined4 *)(param_1 + 0x44);
    auVar3._12_4_ = *(undefined4 *)(param_1 + 0x34);
    auVar3._8_4_ = *(undefined4 *)(param_1 + 0x50);
    auVar3._4_4_ = *(undefined4 *)(param_1 + 0x40);
    auVar3._0_4_ = *(undefined4 *)(param_1 + 0x30);
    auVar2 = vtfm3_t(auVar3,*(undefined (*) [12])(param_1 + 0x60));
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
    iVar4 = *(int *)(param_2 + 4);
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
  }
  (**(code **)(iVar4 + 0x34))
            (param_2 + *(short *)(iVar4 + 0x30),(undefined4 *)(param_1 + 0x70),&DAT_08af8550);
  FUN_089e9a3c(param_1 + 0x10,&DAT_08af8550);
  return;
}

