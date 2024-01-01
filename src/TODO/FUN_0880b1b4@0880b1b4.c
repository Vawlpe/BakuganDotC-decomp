#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880b1b4(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af15e4;
    if (DAT_08aac9d8 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08aac9d8,0,0);
      FUN_089d866c();
      DAT_08aac9d8 = 0;
    }
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,1);
    if (iVar2 == 1) {
      FUN_088c2a5c(param_1);
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

