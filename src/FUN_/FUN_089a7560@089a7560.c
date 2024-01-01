#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7560(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (param_2 != '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    return;
  }
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  return;
}

