#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0883f58c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0883f6e4(param_1,0x1c);
  iVar2 = FUN_0883f6e4(param_1,0x16);
  iVar3 = FUN_0883f6e4(param_1,0x10);
  iVar4 = FUN_0883f6e4(param_1,0x13);
  iVar1 = (iVar3 + iVar4 + iVar2) - iVar1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

