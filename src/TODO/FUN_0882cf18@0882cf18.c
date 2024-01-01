#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882cf18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xa18) == '\0') {
    *(undefined4 *)(param_1 + 0xa14) = 2;
    *(undefined4 *)(param_1 + 0x9e4) = 1;
    *(undefined *)(param_1 + 0xa18) = 1;
    iVar3 = 3;
    iVar2 = 0xc;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2) + 0xd8) = 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 9);
    iVar2 = FUN_0884b248();
    if (iVar2 != 0) {
      uVar1 = FUN_0884b268();
      FUN_0884e0a8(0x3f000000,uVar1,0x25);
    }
  }
  return;
}

