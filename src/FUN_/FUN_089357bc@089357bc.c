#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089357bc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 & 0xffff) * 4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x128) = 2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0x68) =
       *(undefined4 *)(param_1 + iVar1 + 0x9d8);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  *(undefined4 *)(iVar2 + 0xc4) = 0;
  *(undefined4 *)(iVar2 + 200) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0x3f800000;
  return;
}

