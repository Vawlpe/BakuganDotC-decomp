#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089757dc(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*(char *)(param_1 + 0x503);
  *(undefined *)(param_1 + 0x752) = 0;
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    iVar2 = 5;
    if (*(char *)(param_1 + 0x760) != '\0') {
      iVar2 = 4;
    }
    bVar3 = *(byte *)(iVar5 + 8);
  }
  else {
    iVar2 = FUN_08975788(param_1,*(undefined *)(param_1 + 0x500),*(undefined *)(param_1 + 0x501));
    bVar3 = *(byte *)(iVar5 + 8);
  }
  if ((bVar3 & 0x10) == 0) {
    if ((*(byte *)(iVar5 + 8) & 0x40) == 0) {
      return 0;
    }
    iVar5 = (int)*(char *)(param_1 + iVar4 + 0x500);
    uVar1 = 0;
    if (iVar5 != iVar2 + -1) {
      uVar1 = (undefined)((uint)((iVar5 + 1) * 0x1000000) >> 0x18);
    }
    *(undefined *)(param_1 + iVar4 + 0x500) = uVar1;
    *(undefined *)(param_1 + 0x752) = 2;
    return 1;
  }
  iVar5 = (int)*(char *)(param_1 + iVar4 + 0x500);
  if (iVar5 == 0) {
    iVar5 = iVar2;
  }
  *(char *)(param_1 + iVar4 + 0x500) = (char)((uint)((iVar5 + -1) * 0x1000000) >> 0x18);
  *(undefined *)(param_1 + 0x752) = 1;
  return 1;
}

