#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08850b48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0880d308();
  *(undefined4 *)(param_1 + 0x548) = 0;
  iVar1 = FUN_0881b22c();
  if (iVar1 != 0) {
    uVar2 = FUN_0881b254();
    uVar2 = FUN_0881b66c(uVar2);
    *(undefined4 *)(param_1 + 0x548) = uVar2;
  }
  return;
}

