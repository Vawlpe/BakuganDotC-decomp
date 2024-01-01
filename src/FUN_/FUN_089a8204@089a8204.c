#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a8204(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = FUN_0880d36c(), iVar1 == 1)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    FUN_089a5b10(*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 6.0,5);
  }
  return;
}

