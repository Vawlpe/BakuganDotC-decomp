#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893e47c(int param_1)

{
  int iVar1;
  
  *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
       *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

