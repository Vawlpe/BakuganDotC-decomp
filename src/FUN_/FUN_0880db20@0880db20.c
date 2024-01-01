#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880db20(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_0880cdf0();
  param_2 = param_2 + -1;
  if (((iVar1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    iVar1 = param_2 * 8 + iVar1 + param_3 * 0xa0;
    iVar2 = param_4 + *(short *)(iVar1 + 4);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (9999 < iVar2) {
      iVar2 = 9999;
    }
    *(short *)(iVar1 + 4) = (short)iVar2;
  }
  return iVar2;
}

