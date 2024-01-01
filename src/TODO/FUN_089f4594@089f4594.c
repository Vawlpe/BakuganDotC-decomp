#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4594(int param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  bVar1 = false;
  if (uVar2 < 5) {
    if ((uVar2 == 1) || (uVar2 == 3)) {
      bVar1 = true;
      fVar4 = *(float *)(param_1 + 0x60);
      fVar3 = (float)FUN_089f4944(param_1);
      fVar5 = *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x60) = fVar4 - fVar3 * 0.5;
      fVar3 = (float)FUN_089f494c(param_1);
      *(float *)(param_1 + 100) = fVar5 - fVar3 * 0.5;
    }
    else if (uVar2 == 4) {
      bVar1 = true;
      fVar4 = *(float *)(param_1 + 0x60);
      fVar3 = (float)FUN_089f4944(param_1);
      *(float *)(param_1 + 0x60) = fVar4 - fVar3 * 0.5;
      fVar3 = (float)FUN_089f494c(param_1);
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar3;
    }
  }
  if (bVar1) {
    *(undefined *)(param_1 + 0xf8) = 0;
    *(undefined *)(param_1 + 0xf9) = 0;
    *(undefined *)(param_1 + 0x104) = 0x40;
    *(undefined *)(param_1 + 0x105) = 0;
    *(undefined *)(param_1 + 0x110) = 0;
    *(undefined *)(param_1 + 0x111) = 0x40;
    *(undefined *)(param_1 + 0x11c) = 0x40;
    *(undefined *)(param_1 + 0x11d) = 0x40;
    *(int *)(param_1 + 0x120) = param_1 + 0xf0;
    *(undefined4 *)(param_1 + 0xe4) = 2;
  }
  return;
}

