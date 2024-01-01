#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08919090(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x18;
    iVar4 = 0x60;
    iVar3 = param_1 + 0x438;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar5 < 0x1a) {
        if (0x18 < iVar5) {
          *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar1 + 0xb8) = 0;
          *(undefined4 *)(iVar1 + 0xbc) = 0;
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
          goto LAB_08919140;
        }
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      else {
        if (iVar5 < 0x1c) {
          FUN_08919034(param_1,iVar1,0);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
LAB_08919140:
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      *(uint *)(iVar1 + 0xd0) = uVar2 | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x1c);
  }
  else {
    iVar5 = 0x18;
    iVar4 = 0x60;
    iVar3 = param_1 + 0x438;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x1c);
  }
  return;
}

