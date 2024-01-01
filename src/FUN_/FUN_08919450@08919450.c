#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919450(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x8c4) != '\0') {
    fVar2 = *(float *)(param_1 + 0x8c8) + 0.025;
    *(float *)(param_1 + 0x8c8) = fVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
    if (*(char *)(param_1 + 0x8c5) == '\0') {
      *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x8cc) - fVar2 * fVar2 * 0.8;
      if (1.0 <= *(float *)(param_1 + 0x8c8)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = 0x3e4ccccd;
        *(undefined *)(param_1 + 0x8c5) = 1;
        *(undefined4 *)(param_1 + 0x8c8) = 0;
        *(undefined4 *)(param_1 + 0x8cc) = 0x3e4ccccd;
        return;
      }
    }
    else {
      *(float *)(iVar1 + 0xbc) =
           *(float *)(param_1 + 0x8cc) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.8;
      if (1.0 <= *(float *)(param_1 + 0x8c8)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 100) + 0xbc) = 0x3f800000;
        *(undefined *)(param_1 + 0x8c5) = 0;
        *(undefined4 *)(param_1 + 0x8c8) = 0;
        *(undefined4 *)(param_1 + 0x8cc) = 0x3f800000;
      }
    }
  }
  return;
}

