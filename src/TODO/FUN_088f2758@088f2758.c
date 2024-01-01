#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f2758(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_089bfa40(500);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar2 = *(int *)(param_1 + 0x40);
      iVar3 = 0;
    }
    else {
      FUN_088c232c(iVar1);
      iVar3 = *(int *)(param_1 + 0x4c);
      iVar2 = *(int *)(param_1 + 0x40);
    }
    if (iVar3 != *(int *)(&DAT_08a98ffc + iVar2 * 4)) {
      FUN_088c2218(iVar1,*(uint *)(&DAT_08a98fe4 + iVar2 * 8 + iVar3 * 4) & 0xff);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
  }
  return;
}

