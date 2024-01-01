#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894efb4(int param_1,char param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x2c4) + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x2c4) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) =
         *(float *)(param_1 + 0x2c8) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0));
    fVar2 = *(float *)(param_1 + 0x2c4) - 1.0;
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2c8) + (1.0 - fVar2 * fVar2);
    if (1.0 <= *(float *)(param_1 + 0x2c4)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) = 0x3f800000;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x2c4) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) =
         *(float *)(param_1 + 0x2c8) - fVar2 * fVar2;
    fVar2 = *(float *)(param_1 + 0x2c4) - 1.0;
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2c8) - (1.0 - fVar2 * fVar2);
    if (1.0 <= *(float *)(param_1 + 0x2c4)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

