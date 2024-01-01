#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f6d30(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x104);
  if (piVar1 != (int *)0x0) {
    FUN_088fd604(param_1,*(float *)(*piVar1 + 0x4c) * (1.0 - (float)piVar1[8]) +
                         *(float *)(piVar1[1] + 0x4c) * (float)piVar1[8],param_2,piVar1 + 4);
  }
  return;
}

