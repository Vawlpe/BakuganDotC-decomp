#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d7b4(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
  if (param_2 < *(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0)
                         + 0x11c2)) {
    FUN_08998c68(param_1,iVar1,*(char *)(param_1 + 0x109c),param_2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  }
  else {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  return;
}

