#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089883f0(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x29;
    iVar4 = 0xa4;
    iVar3 = param_1 + 0x6dc;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar5 < 0x2b) {
        if (iVar5 < 0x2a) {
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
        else {
          FUN_089a56a0(iVar1,2);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
LAB_08988494:
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
      }
      else {
        if (iVar5 < 0x2c) {
          FUN_089a56a0(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
          goto LAB_08988494;
        }
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      *(uint *)(iVar1 + 0xd0) = uVar2 | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x2e);
  }
  else {
    iVar5 = 0x29;
    iVar4 = 0xa4;
    iVar3 = param_1 + 0x6dc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x2e);
  }
  return;
}

