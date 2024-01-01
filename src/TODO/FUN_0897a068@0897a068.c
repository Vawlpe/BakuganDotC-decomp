#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897a068(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  *(undefined4 *)(param_1 + 0x1398) = 0;
  iVar1 = FUN_0897a03c(param_1,param_2);
  if (((iVar1 == 0) && (param_2 == 0)) && (param_3 == 5)) {
    *(undefined4 *)(param_1 + 0x1398) = 0x41400000;
  }
  return;
}

