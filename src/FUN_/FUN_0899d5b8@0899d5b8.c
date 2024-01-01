#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d5b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xd4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x174);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

