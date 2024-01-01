#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea7f4(int *param_1,short param_2,undefined param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (*(uint *)(iVar1 + 8) < 0x59)) && (0x6a < *(uint *)(iVar1 + 8))) {
    FUN_088b7fd8((float)(param_4 & 0xff),iVar1,(int)param_2,param_3,0);
  }
  return;
}

