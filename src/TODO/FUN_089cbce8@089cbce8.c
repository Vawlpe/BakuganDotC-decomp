#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbce8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_08af52bc;
    iVar1 = FUN_089cc058();
    if (iVar1 != 0) {
      uVar2 = DONE_GetPtr_DAT_08AC58E0();
      FUN_089cc428(uVar2,param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

