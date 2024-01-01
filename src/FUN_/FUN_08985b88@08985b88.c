#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985b88(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x20;
    iVar3 = 0x80;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 < 0x21) {
        if (iVar4 < 0x20) {
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
        else {
          FUN_089a56a0(iVar1,2);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
LAB_08985cd0:
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
      }
      else {
        if (iVar4 == 0x27) {
          FUN_089a56a0(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
          goto LAB_08985cd0;
        }
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      *(uint *)(iVar1 + 0xd0) = uVar2 | 1;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 0x10;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x24);
    iVar4 = 0x3e;
    iVar3 = 0xf8;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x40);
  }
  else {
    iVar4 = 0x3e;
    iVar3 = 0xf8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 == 0x3e) {
        FUN_089a56a0(iVar1,1);
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 0x10;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x40);
    iVar4 = 0x20;
    iVar3 = 0x80;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x24);
  }
  return;
}

