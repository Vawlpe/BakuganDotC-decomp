#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945130(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((iVar1 < 0xd) &&
     ((DAT_08ac1be8 + DAT_08ac1bec * iVar1) - *(int *)(param_1 + 0xdc) <= *(int *)(param_1 + 0x74)))
  {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4 + 0x28);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(param_1 + 0x80);
    iVar2 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + iVar1 * 8 + 0x104) = 1;
    *(int *)(param_1 + 0xdc) = iVar2 + 4;
    *(int *)(param_1 + 0x80) = iVar1 + 1;
  }
  return;
}

