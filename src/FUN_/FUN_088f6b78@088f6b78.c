#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f6b78(int param_1,undefined4 *param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_V7D;
  
  uVar5 = DAT_08abf8cc;
  uVar4 = DAT_08abf8c8;
  uVar3 = DAT_08abf8c4;
  if (*(int *)(param_1 + 0x104) == 0) {
    *param_2 = DAT_08abf8c0;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    return;
  }
  auVar1 = vscl_t(*(undefined (*) [12])(**(int **)(param_1 + 0x104) + 0x20),
                  1.0 - *(float *)(*(int *)(param_1 + 0x104) + 0x20));
  auVar2 = vscl_t(*(undefined (*) [12])(*(int *)(*(int *)(param_1 + 0x104) + 4) + 0x20),
                  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x20));
  auVar1 = vadd_t(auVar1,auVar2);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = in_V7D;
  return;
}

