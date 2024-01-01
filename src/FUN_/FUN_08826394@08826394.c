#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08826394(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      *(undefined **)(param_1 + 0xf0) = &DAT_08a645a8;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 1;
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x188) = 3;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(undefined4 *)(param_1 + 0x168) = 7;
      *(undefined4 *)(param_1 + 0x16c) = 4;
      *(undefined4 *)(param_1 + 0x160) = 4;
      *(undefined4 *)(param_1 + 0x164) = 6;
      *(undefined4 *)(param_1 + 0x15c) = 0x12000980;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined **)(param_1 + 0xf4) = &DAT_08a644e8;
      *(undefined *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0x3b83126f;
      auVar1 = vscl_q(*(undefined (*) [16])(param_1 + 0x30),0x41800000);
      auVar2 = vscl_q(*(undefined (*) [16])(param_1 + 0x40),0x41800000);
      auVar3 = vscl_q(*(undefined (*) [16])(param_1 + 0x50),0x41800000);
      *(int *)*(undefined (*) [16])(param_1 + 0x30) = auVar1._0_4_;
      *(int *)(param_1 + 0x34) = auVar1._4_4_;
      *(int *)(param_1 + 0x38) = auVar1._8_4_;
      *(int *)(param_1 + 0x3c) = auVar1._12_4_;
      *(int *)(param_1 + 0x40) = auVar2._0_4_;
      *(int *)(param_1 + 0x44) = auVar2._4_4_;
      *(int *)(param_1 + 0x48) = auVar2._8_4_;
      *(int *)(param_1 + 0x4c) = auVar2._12_4_;
      *(int *)(param_1 + 0x50) = auVar3._0_4_;
      *(int *)(param_1 + 0x54) = auVar3._4_4_;
      *(int *)(param_1 + 0x58) = auVar3._8_4_;
      *(int *)(param_1 + 0x5c) = auVar3._12_4_;
      *(undefined4 *)(param_1 + 0xb0) = in_V72;
      *(undefined4 *)(param_1 + 0xb4) = in_V76;
      *(undefined4 *)(param_1 + 0xb8) = in_V7A;
      *(undefined4 *)(param_1 + 0xbc) = in_V7E;
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(undefined *)(param_1 + 0x13c) = 1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
  }
  else if (iVar4 < 3) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      *(undefined *)(param_1 + 0x13c) = 0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
  }
  else if ((iVar4 < 4) && (param_1 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
  }
  return;
}

