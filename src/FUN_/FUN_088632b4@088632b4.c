#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088632b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x1b4) + param_2;
  *(int *)(param_1 + 0x1b4) = param_2;
  if (param_3 == 2) {
    iVar1 = 10;
    if (param_2 < 0xb) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x1b4) = iVar1;
    return;
  }
  iVar1 = 5;
  if (param_2 < 6) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x1b4) = iVar1;
  return;
}

