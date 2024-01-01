#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2a21c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      iVar1 = *param_1;
    }
    else {
      *param_1 = 0;
      *(undefined *)((int)param_1 + 0xd) = 0;
      iVar1 = *param_1;
    }
    if (iVar1 == 0) {
      param_1[1] = 0;
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *param_1 = 0;
      param_1[1] = 0;
    }
    param_1[2] = 0;
    *(undefined *)(param_1 + 3) = 0;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

