#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089edc68(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    fVar3 = (float)iVar2 / (float)*(int *)(param_1 + 4);
    *(float *)(param_1 + 0xc) = fVar3;
    auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x40),*(undefined (*) [16])(param_1 + 0x30));
    auVar1 = vscl_q(auVar1,fVar3);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x30),auVar1);
    *(undefined4 *)(param_1 + 0x20) = auVar1._0_4_;
    *(int *)(param_1 + 0x24) = auVar1._4_4_;
    *(int *)(param_1 + 0x28) = auVar1._8_4_;
    *(int *)(param_1 + 0x2c) = auVar1._12_4_;
    iVar2 = *(int *)(param_1 + 0x50);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)*(undefined (*) [16])(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
    iVar2 = *(int *)(param_1 + 0x50);
  }
  (**(code **)(iVar2 + 0x24))(param_1 + *(short *)(iVar2 + 0x20));
  return;
}

