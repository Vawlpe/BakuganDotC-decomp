#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c9f9c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28);
  *piVar1 = *piVar1 + -1;
  piVar1 = (int *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28);
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = *(undefined2 *)((int)piVar1 + *piVar1 * 2 + 4);
  return;
}

