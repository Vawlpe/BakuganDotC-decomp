#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897e774(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x1134) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x1378);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 1) == 0) {
      fVar2 = fVar1;
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 2) != 0) {
        fVar2 = fVar1 - 0.015;
        *(float *)(param_1 + 0x1378) = fVar2;
        if (fVar2 < 0.6) {
          *(undefined4 *)(param_1 + 0x1378) = 0x3f19999a;
          fVar2 = 0.6;
        }
      }
    }
    else {
      fVar2 = fVar1 + 0.015;
      *(float *)(param_1 + 0x1378) = fVar2;
      if (1.4 < fVar2) {
        *(undefined4 *)(param_1 + 0x1378) = 0x3fb33333;
        fVar2 = 1.4;
      }
    }
    if (fVar1 != fVar2) {
      *(undefined4 *)(param_1 + 0x1374) = 0;
    }
  }
  return;
}

