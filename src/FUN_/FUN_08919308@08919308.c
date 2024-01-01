#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919308(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x8b8) != '\0') {
    fVar2 = *(float *)(param_1 + 0x8bc) + 0.025;
    *(float *)(param_1 + 0x8bc) = fVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    if (*(char *)(param_1 + 0x8b9) == '\0') {
      *(float *)(iVar1 + 0xbc) = *(float *)(param_1 + 0x8c0) - fVar2 * fVar2 * 0.8;
      if (1.0 <= *(float *)(param_1 + 0x8bc)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 0xbc) = 0x3e4ccccd;
        *(undefined *)(param_1 + 0x8b9) = 1;
        *(undefined4 *)(param_1 + 0x8bc) = 0;
        *(undefined4 *)(param_1 + 0x8c0) = 0x3e4ccccd;
        return;
      }
    }
    else {
      *(float *)(iVar1 + 0xbc) =
           *(float *)(param_1 + 0x8c0) + (1.0 - (fVar2 - 1.0) * (fVar2 - 1.0)) * 0.8;
      if (1.0 <= *(float *)(param_1 + 0x8bc)) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 0xbc) = 0x3f800000;
        *(undefined *)(param_1 + 0x8b9) = 0;
        *(undefined4 *)(param_1 + 0x8bc) = 0;
        *(undefined4 *)(param_1 + 0x8c0) = 0x3f800000;
      }
    }
  }
  return;
}

