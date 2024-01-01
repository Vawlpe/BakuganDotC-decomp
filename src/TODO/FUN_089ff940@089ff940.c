#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff940(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_089bb668(param_1[1],3);
      param_1[1] = 0;
      iVar1 = *param_1;
    }
    if (iVar1 != 0) {
      FUN_08a32624(iVar1,3);
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

