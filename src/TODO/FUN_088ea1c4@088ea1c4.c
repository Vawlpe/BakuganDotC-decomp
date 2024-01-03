#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea1c4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x2f);
  if (iVar2 + -2 < 0x5b) {
    FUN_088ea1a8(param_1);
  }
  else {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x2f,iVar2 + -2);
  }
  return;
}

