#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d9ccc(int param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(int *)(param_1 + 400) + 1;
  *(uint *)(param_1 + 400) = uVar1;
  if ((uVar1 & 3) == 0) {
    if (*(char *)(param_1 + 0x194) == '\0') {
      fVar2 = *(float *)(param_1 + 0x180) + 0.25;
      *(float *)(param_1 + 0x180) = fVar2;
      if (0.75 <= fVar2) {
        *(undefined *)(param_1 + 0x194) = 1;
        return;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x180) - 0.25;
      *(float *)(param_1 + 0x180) = fVar2;
      if (fVar2 <= 0.0) {
        *(undefined *)(param_1 + 0x194) = 0;
      }
    }
  }
  return;
}

