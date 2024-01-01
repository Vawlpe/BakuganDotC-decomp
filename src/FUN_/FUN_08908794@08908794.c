#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08908794(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 2;
  if (param_3 != 0) {
    do {
      iVar1 = FUN_08908754(param_1,param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    } while (iVar1 + 1U < param_3);
  }
  return;
}

