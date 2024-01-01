#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880dac4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_0880cdf0();
  param_2 = param_2 + -1;
  if (((iVar1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    iVar2 = (int)*(short *)(param_2 * 8 + iVar1 + param_3 * 0xa0 + 4);
  }
  return iVar2;
}

