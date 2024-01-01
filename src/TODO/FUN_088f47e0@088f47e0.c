#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f47e0(int param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  uint uVar2;
  
  FUN_088f4380(param_1,param_2,param_3,param_4);
  uVar2 = 0;
  iVar1 = param_1;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    do {
      FUN_088f47c4(param_1,*(undefined *)(iVar1 + 0xcd));
      uVar2 = uVar2 + 1 & 0xff;
      iVar1 = param_1 + uVar2;
    } while (uVar2 < *(byte *)(param_1 + 0xcc));
  }
  return;
}

