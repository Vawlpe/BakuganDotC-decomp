#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08953c48(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x11;
  iVar3 = 0x44;
  iVar2 = param_1 + 800;
  do {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089a5408(0x3fb33333,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x14);
  return;
}

