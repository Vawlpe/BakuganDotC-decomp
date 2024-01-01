#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08913434(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 5;
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar3 = 0x14;
    iVar2 = param_1 + 0x134;
    do {
      *(uint *)(*(int *)(iVar1 + iVar3) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar3) + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
      iVar1 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 10);
    FUN_089f4a90(0,0x40000000,*(undefined4 *)(iVar1 + 0x18));
    FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c));
  }
  else {
    iVar3 = 5;
    iVar2 = 0x14;
    iVar1 = param_1 + 0x134;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar1,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 10);
  }
  return;
}

