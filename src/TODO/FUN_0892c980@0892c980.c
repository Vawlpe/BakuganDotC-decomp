#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c980(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  *(float *)(param_1 + 0x1cc0) = *(float *)(piVar1[6] + 0x60) - *(float *)(*piVar1 + 0x60);
  *(float *)(param_1 + 0x1cc4) = (*(float *)(piVar1[6] + 100) - *(float *)(*piVar1 + 100)) - 2.0;
  *(float *)(param_1 + 0x1cc8) = *(float *)(piVar1[6] + 0x60) - *(float *)(piVar1[7] + 0x60);
  *(float *)(param_1 + 0x1ccc) = (*(float *)(piVar1[6] + 100) - *(float *)(piVar1[7] + 100)) - 2.0;
  return;
}

