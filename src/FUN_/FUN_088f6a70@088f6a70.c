#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f6a70(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[0x41];
    *param_1 = &DAT_08af4414;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0x41] = 0;
    }
    iVar1 = param_1[0x42];
    if (iVar1 == 0) {
      iVar1 = param_1[0x40];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0x42] = 0;
      iVar1 = param_1[0x40];
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0x40] = 0;
    }
    FUN_088fd254(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

