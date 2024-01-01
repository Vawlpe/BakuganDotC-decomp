#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088edee0(int param_1,uint param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + (param_2 & 0xff) * 100 + 0x30);
  if (iVar1 != 0) {
    FUN_088ea858(iVar1,param_3);
  }
  return;
}

