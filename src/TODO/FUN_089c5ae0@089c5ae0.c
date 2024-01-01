#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5ae0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = _DONE_GetPtr_DAT_08AC51F8();
    FUN_089bcf38(uVar1,FUN_089c6b6c);
    uVar1 = _DONE_GetPtr_DAT_08AC51F8();
    FUN_089bd014(uVar1,FUN_089c6bfc);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

