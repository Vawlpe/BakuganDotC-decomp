#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880c97c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089c59d4();
  if (iVar1 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (10 < param_2) {
      param_2 = 10;
    }
    *(char *)(*param_1 + 0x6aa) = (char)param_2;
    uVar2 = FUN_089c59f0();
    FUN_089c5dac((float)param_2 * 0.1,uVar2);
  }
  return;
}

