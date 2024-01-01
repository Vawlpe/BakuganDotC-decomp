#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880e9c4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_089c9da8();
  uVar1 = FUN_089c9d1c(param_1);
  piVar3 = (int *)FUN_0880cc48();
  if (*(int *)(*piVar3 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) == iVar2) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
    return 3;
  }
  return 0;
}

