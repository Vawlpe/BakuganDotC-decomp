#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c4a14(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_089c2b10(param_1[4]);
    if (iVar1 != 0) {
      iVar1 = FUN_089c2b48(param_1[4]);
      *(undefined *)(iVar1 + 0xc6) = 1;
    }
    FUN_089d7a58(param_1[7]);
    FUN_089d7a58(param_1[10]);
    if (*param_1 != 0) {
      FUN_089bb668(*param_1,3);
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

