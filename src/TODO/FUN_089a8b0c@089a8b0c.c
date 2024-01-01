#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a8b0c(int param_1,char param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xbc) + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0xbc) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) =
         *(float *)(param_1 + 0xc0) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0));
    fVar2 = *(float *)(param_1 + 0xbc) - 1.0;
    *(float *)(param_1 + 0xa04) = *(float *)(param_1 + 0xc0) + (1.0 - fVar2 * fVar2);
    if (1.0 <= *(float *)(param_1 + 0xbc)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0x3f800000;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0xbc) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) =
         *(float *)(param_1 + 0xc0) - fVar2 * fVar2;
    fVar2 = *(float *)(param_1 + 0xbc) - 1.0;
    *(float *)(param_1 + 0xa04) = *(float *)(param_1 + 0xc0) - (1.0 - fVar2 * fVar2);
    if (1.0 <= *(float *)(param_1 + 0xbc)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

