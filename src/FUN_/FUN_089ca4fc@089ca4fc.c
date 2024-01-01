#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca4fc(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_089c9ed8(param_1,2);
  iVar3 = FUN_089c9da8(param_1);
  uVar1 = FUN_089c9d1c(param_1);
  if (iVar3 < *piVar2) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
    return 3;
  }
  return 0;
}

