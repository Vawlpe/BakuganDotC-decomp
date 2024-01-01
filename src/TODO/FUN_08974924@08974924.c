#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08974924(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x12;
    iVar3 = 0x48;
    iVar2 = param_1 + 0x344;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a54cc(0x3f800000,0xc3000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2
                   ,7);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x14);
  }
  else {
    iVar4 = 0x12;
    iVar3 = 0x48;
    iVar2 = param_1 + 0x344;
    do {
      FUN_089a54cc(0x3f800000,0,0xc3000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar2,7);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x14);
  }
  return;
}

