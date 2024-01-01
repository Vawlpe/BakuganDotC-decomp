#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089616e0(int param_1,undefined param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_3 & 0xffff) * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x128) = 0x10;
  FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),
               param_1 + (param_3 & 0xffff) * 0x28 + 0x78,3);
  return;
}

