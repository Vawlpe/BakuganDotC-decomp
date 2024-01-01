#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a0148(int param_1)

{
  undefined auVar1 [12];
  float fVar2;
  undefined4 in_V7D;
  
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    fVar2 = (float)(int)*(short *)(param_1 + 0x2ce) / (float)(int)*(short *)(param_1 + 0x2cc);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x2a0),
                    DAT_08abd51c * 2.0 * fVar2 * (1.0 - fVar2) + fVar2 * fVar2);
    *(int *)*(undefined (*) [12])(param_1 + 0x2a0) = auVar1._0_4_;
    *(int *)(param_1 + 0x2a4) = auVar1._4_4_;
    *(int *)(param_1 + 0x2a8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x2ac) = in_V7D;
  }
  return;
}

