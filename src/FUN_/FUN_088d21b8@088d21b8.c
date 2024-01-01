#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d21b8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_088f505c(0x38d);
  if (iVar2 != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x74) + 0x3a1);
    iVar2 = **(int **)(param_1 + 0x1c);
    if (cVar1 == '\0') {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xb8) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xb8) = 0;
    }
    FUN_088d1ec8(param_1,0,param_1 + 0xe4);
    *(char *)(param_1 + 0x9c) = cVar1;
  }
  return;
}

