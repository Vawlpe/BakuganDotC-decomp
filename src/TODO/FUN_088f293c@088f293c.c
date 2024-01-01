#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f293c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined uVar3;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    iVar1 = FUN_089edb80();
    puVar2 = *(undefined **)(param_1 + 4);
    uVar3 = (undefined)(int)((*(float *)(iVar1 + 0x2c) - 0.5) * 32.0);
    *(undefined *)(*(int *)(param_1 + 4) + 2) = uVar3;
    *puVar2 = uVar3;
  }
  return;
}

