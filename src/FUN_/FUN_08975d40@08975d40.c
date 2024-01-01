#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08975d40(int param_1,char param_2)

{
  undefined uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    fVar2 = *(float *)(param_1 + 0x540) + 1.0 / *(float *)(param_1 + 0x54c);
    fVar3 = fVar2 - 1.0;
    *(float *)(param_1 + 0x540) = fVar2;
    *(float *)(*(int *)(param_1 + 0x51c) + 0x6c) =
         *(float *)(param_1 + 0x544) + (1.0 - fVar3 * fVar3);
    if (1.0 <= *(float *)(param_1 + 0x540)) {
      *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0x3f800000;
      return 1;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x540) + 1.0 / *(float *)(param_1 + 0x54c);
    *(float *)(param_1 + 0x540) = fVar2;
    *(float *)(*(int *)(param_1 + 0x51c) + 0x6c) = *(float *)(param_1 + 0x544) - fVar2 * fVar2;
    if (1.0 <= *(float *)(param_1 + 0x540)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

