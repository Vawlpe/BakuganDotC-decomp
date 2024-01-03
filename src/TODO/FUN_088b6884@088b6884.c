#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b6884(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = DONE_Get_DAT_08AC5258();
    FUN_089c00c4(uVar1,param_2,param_1 + 0x20,0,1);
  }
  else {
    uVar1 = DONE_Get_DAT_08AC5258();
    FUN_089c00c4(uVar1,param_2,param_3,0,1);
  }
  return;
}

