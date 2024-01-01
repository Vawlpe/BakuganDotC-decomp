#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e7d08(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xc];
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0xc] = 0;
      iVar1 = *param_1;
    }
    if (iVar1 == 0) {
      iVar1 = param_1[4];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *param_1 = 0;
      iVar1 = param_1[4];
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[4] = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

