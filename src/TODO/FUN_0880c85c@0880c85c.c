#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880c85c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DONE_NotZero_DAT_08AC5874();
  if (iVar1 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (10 < param_2) {
      param_2 = 10;
    }
    *(char *)(*param_1 + 0x6a8) = (char)param_2;
    uVar2 = _DONE_Get_DAT_08AC5874();
    FUN_089c5cfc((float)param_2 * 0.1 * 0.7,uVar2);
  }
  return;
}

