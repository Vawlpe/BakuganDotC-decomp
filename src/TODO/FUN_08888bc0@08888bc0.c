#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08888bc0(float param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(int *)(param_2 + 0xd4) == -1 || (param_1 <= *(float *)(param_2 + 0xbc) * 0.0001))) {
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 4;
    if (2 < iVar1) {
      return 0;
    }
  }
  return 1;
}

