#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cf0a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_089eac08();
  if (iVar1 == 0) {
    FUN_089eaa70();
    puVar2 = (undefined4 *)FUN_089eac30();
    *puVar2 = 0x44fa0000;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

