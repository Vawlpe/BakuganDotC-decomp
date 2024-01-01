#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088307f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar1 = FUN_0882e4c8();
  iVar3 = param_1 + param_2;
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar1 = param_2 * 0xc;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar1 + 0x3c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar1 = iVar1 + 4;
    } while (iVar5 < 3);
  }
  if (param_3 == 0) {
    if (*(char *)(iVar3 + 0x2e0) != '\0') {
      *(undefined *)(iVar3 + 0x2e0) = 0;
      *(undefined *)(iVar3 + 0x2f4) = 0;
      return;
    }
  }
  else {
    if (param_3 < 2) {
      if (0 < param_3) {
        *(undefined *)(iVar3 + 0x2f4) = 1;
        uVar4 = 0;
      }
    }
    else if (param_3 < 3) {
      uVar4 = 1;
      *(undefined *)(iVar3 + 0x2f4) = 0;
    }
    iVar1 = 0;
    if (*(char *)(iVar3 + 0x2e0) == '\0') {
      *(undefined *)(iVar3 + 0x2e0) = 1;
    }
    iVar3 = param_2 * 0xc;
    do {
      iVar5 = FUN_0882e4c8(param_1);
      if (iVar5 == 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 + 0x3c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar1 < 1);
    FUN_089ed1b8(*(undefined4 *)(param_1 + param_2 * 4 + 0x30),uVar4);
  }
  return;
}

