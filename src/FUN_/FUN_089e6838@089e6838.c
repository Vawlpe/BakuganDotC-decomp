#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6838(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    param_1[0x59] = (int)&DAT_08af54ec;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *param_1 = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

