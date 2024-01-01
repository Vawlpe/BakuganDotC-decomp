#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893e6d4(int param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    if (*(char *)(param_1 + 0x647) == '\0') {
      fVar1 = *(float *)(param_1 + 0x660) + 0.04;
      *(float *)(param_1 + 0x660) = fVar1;
      if (0.8 <= fVar1) {
        *(undefined4 *)(param_1 + 0x660) = 0x3f4ccccd;
        *(undefined *)(param_1 + 0x647) = 1;
        fVar1 = 0.8;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x660) - 0.04;
      *(float *)(param_1 + 0x660) = fVar1;
      if (fVar1 <= 0.0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
        fVar1 = 0.0;
        *(undefined *)(param_1 + 0x647) = 0;
      }
    }
    *(float *)((*(int **)(param_1 + 0x1c))[0x25] + 0xbc) = 1.0 - fVar1;
    return;
  }
  if (*(char *)(param_1 + 0x7f) == '\0') {
    fVar1 = *(float *)(param_1 + 0x98) + 0.04;
    *(float *)(param_1 + 0x98) = fVar1;
    if (0.8 <= fVar1) {
      *(undefined4 *)(param_1 + 0x98) = 0x3f4ccccd;
      *(undefined *)(param_1 + 0x7f) = 1;
      fVar1 = 0.8;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x98) - 0.04;
    *(float *)(param_1 + 0x98) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      fVar1 = 0.0;
      *(undefined *)(param_1 + 0x7f) = 0;
    }
  }
  *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = 1.0 - fVar1;
  return;
}

