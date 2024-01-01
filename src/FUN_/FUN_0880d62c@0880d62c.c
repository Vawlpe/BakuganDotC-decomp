#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880d62c(int *param_1,int param_2)

{
  undefined8 uVar1;
  int local_10;
  
  local_10 = 0;
  if (((*param_1 != 0) && (-1 < param_2)) && (param_2 < 3)) {
    uVar1 = FUN_0880d4e4(param_1,param_2);
    local_10 = (int)((ulonglong)uVar1 >> 0x20) + (int)uVar1;
    FUN_0880d554(param_1,param_2,&local_10);
    FUN_0880d5cc(param_1,param_2,local_10);
  }
  return local_10;
}

