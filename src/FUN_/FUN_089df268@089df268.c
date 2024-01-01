#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089df268(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x13c) != '\0') {
    uVar1 = FUN_089d9674();
    iVar4 = FUN_089d9c84(uVar1,param_2);
    return iVar4;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    iVar3 = 0;
    do {
      iVar2 = strcasecmp(*(undefined4 *)(*(int *)(param_1 + 0x108) + iVar3),param_2);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0xf4));
  }
  return -1;
}

