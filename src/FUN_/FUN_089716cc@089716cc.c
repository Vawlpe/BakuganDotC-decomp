#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089716cc(int param_1)

{
  int iVar1;
  float fVar2;
  
  if ('\x03' < *(char *)(param_1 + 0x74)) {
    if (*(char *)(param_1 + 0x89f) == '\0') {
      fVar2 = *(float *)(param_1 + 0x8b8) + 0.0125;
      *(float *)(param_1 + 0x8b8) = fVar2;
      if (0.5 <= fVar2) {
        fVar2 = 0.5;
        *(undefined4 *)(param_1 + 0x8b8) = 0x3f000000;
        *(undefined *)(param_1 + 0x89f) = 1;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x8b8) - 0.0125;
      *(float *)(param_1 + 0x8b8) = fVar2;
      if (fVar2 <= 0.0) {
        *(undefined4 *)(param_1 + 0x8b8) = 0;
        fVar2 = 0.0;
        *(undefined *)(param_1 + 0x89f) = 0;
      }
    }
    fVar2 = 0.5 - fVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd0);
    *(float *)(iVar1 + 0xc0) = fVar2;
    *(float *)(iVar1 + 0xc4) = fVar2;
    *(float *)(iVar1 + 200) = fVar2;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
  }
  return;
}

