#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893ecac(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x27;
    iVar3 = 0x9c;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x2b);
  }
  else {
    iVar4 = 0x27;
    iVar3 = 0x9c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 < 0x28) {
        if (iVar4 < 0x27) {
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
        else {
          FUN_089a56a0(iVar1,2);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
LAB_0893ed38:
          uVar2 = *(uint *)(iVar1 + 0xd0);
        }
      }
      else {
        if (iVar4 < 0x29) {
          FUN_089a56a0(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
          goto LAB_0893ed38;
        }
        uVar2 = *(uint *)(iVar1 + 0xd0);
      }
      *(uint *)(iVar1 + 0xd0) = uVar2 | 1;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x2b);
  }
  return;
}

