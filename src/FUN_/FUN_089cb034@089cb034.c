#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb034(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_089c9d1c();
  uVar1 = FUN_089c9d1c(param_1);
  iVar3 = FUN_089bf93c(uVar2,1);
  if (iVar3 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
    return 3;
  }
  return 0;
}

