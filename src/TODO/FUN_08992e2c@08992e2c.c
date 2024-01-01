#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08992e2c(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0xa8) != '\0') {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0xbc);
    *pfVar1 = *pfVar1 - 0.1666667;
    fVar5 = (float)*(int *)(param_1 + 0xac) * 0.08333334 + 1.0;
    fVar3 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84));
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x84);
    fVar4 = (float)FUN_089f494c(uVar2);
    FUN_089f4534(fVar3 * fVar5,fVar4 * fVar5,uVar2);
    if (5 < *(int *)(param_1 + 0xac)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined *)(param_1 + 0xa8) = 0;
    }
  }
  return;
}

