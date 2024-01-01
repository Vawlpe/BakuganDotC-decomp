#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880d958(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = FUN_0880cdf0();
  param_2 = param_2 + -1;
  if (((iVar1 != 0) && (-1 < param_2)) && (param_2 < 0x14)) {
    psVar2 = (short *)(param_2 * 8 + iVar1 + param_3 * 0xa0);
    iVar3 = param_4 + *psVar2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (9999 < iVar3) {
      iVar3 = 9999;
    }
    *psVar2 = (short)iVar3;
  }
  return iVar3;
}

