#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897b570(int param_1,uint param_2)

{
  int iVar1;
  
  param_1 = param_1 + (param_2 & 0xff) * 4;
  iVar1 = *(int *)(param_1 + 0x12a4);
  if (iVar1 != 0) {
    FUN_089de940(iVar1,0);
    *(undefined4 *)(param_1 + 0x12a4) = 0;
  }
  return;
}

