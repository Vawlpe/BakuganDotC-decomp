#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08954058(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

