#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894b788(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&DAT_08a9d17c + param_3 * 4);
  iVar2 = param_2 * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x54);
  if (*(int *)(param_1 + iVar3 * 4 + 0x124) == 0) {
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x6c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x9c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  }
  else {
    *(undefined4 *)(iVar1 + 0xd4) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4 + 0x144) + 0xd4);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x54);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f4a90(0,(float)iVar3,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x6c));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x6c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x84);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2 + 0x9c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  FUN_0894b238(param_1,param_2,iVar3);
  return;
}

