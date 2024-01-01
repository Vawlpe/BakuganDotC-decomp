#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d79a4(uint param_1,undefined param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 & 0x3f) != 0) {
    param_1 = param_1 + (0x40 - (param_1 & 0x3f));
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_2);
  uVar2 = FUN_089d7d74(param_1 + 0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if ((uVar2 & 0x3f) == 0) {
    iVar3 = uVar2 + 0x40;
    *(undefined *)(uVar2 + 0x3f) = 0x3f;
  }
  else {
    iVar4 = 0x40 - (uVar2 & 0x3f);
    iVar3 = uVar2 + iVar4;
    *(char *)(iVar4 + uVar2 + -1) = (char)iVar4 + -1;
  }
  return iVar3;
}

