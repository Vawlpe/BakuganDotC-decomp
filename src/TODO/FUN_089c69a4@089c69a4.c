#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c69a4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x1d0) != 0) {
      FUN_089c6b38(param_1,*(int *)(iVar1 + 0x1d0));
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
  } while (iVar2 < 0x20);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return;
}

