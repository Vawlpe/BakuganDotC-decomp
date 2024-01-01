#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ac1c4(int param_1,char param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x47c) + 0.0625;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x47c) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) =
         *(float *)(param_1 + 0x480) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0));
    fVar2 = *(float *)(param_1 + 0x47c) - 1.0;
    *(float *)(param_1 + 0xb88) = *(float *)(param_1 + 0x480) + (1.0 - fVar2 * fVar2);
    if (1.0 <= *(float *)(param_1 + 0x47c)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xb88) = 0x3f800000;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x47c) = fVar2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) =
         *(float *)(param_1 + 0x480) - fVar2 * fVar2;
    fVar2 = *(float *)(param_1 + 0x47c);
    *(float *)(param_1 + 0xb88) = *(float *)(param_1 + 0x480) - fVar2 * fVar2;
    if (1.0 <= fVar2) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

