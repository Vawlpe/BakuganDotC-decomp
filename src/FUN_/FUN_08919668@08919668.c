#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919668(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x22;
    iVar3 = 0x88;
    iVar2 = param_1 + 0x5c8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 == 0x23) {
        FUN_089a56a0(iVar1,2);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x25);
  }
  else {
    iVar4 = 0x22;
    iVar3 = 0x88;
    iVar2 = param_1 + 0x5c8;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x25);
  }
  return;
}

