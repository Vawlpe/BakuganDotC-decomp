#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893bfbc(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
  if (param_2 == '\0') {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    FUN_089a56a0(iVar1,2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x88);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x88) + 0xbc) = 0x3f800000;
  }
  return;
}

