#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882d0f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  if (iVar2 == 0) {
    iVar1 = FUN_0882c220(1);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0xb4) = iVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  return;
}

