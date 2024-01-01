#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882e354(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1b0);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x3f8);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x3fc);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x400);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    if (*(char *)(param_2 + 0x440) != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x3fc);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      return;
    }
    if (*(char *)(param_2 + 0x44c) != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x400);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      return;
    }
    if (*(char *)(param_2 + 0x4a6) != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x3f8);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      return;
    }
    if ((*(uint *)(param_2 + 8) != 0) && (*(uint *)(param_2 + 8) < 0x15)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1b0);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    }
  }
  return;
}

