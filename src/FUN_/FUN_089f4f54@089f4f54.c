#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089f4f54(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x1d] = (int)&DAT_08af5854;
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  FUN_089f5474(param_1,1);
  FUN_089f59b8(param_1);
  iVar1 = 500;
  param_1[0x1c] = 0x3f800000;
  if (param_2 == 0) {
    iVar1 = 1000;
  }
  param_1[6] = iVar1;
  return param_1;
}

