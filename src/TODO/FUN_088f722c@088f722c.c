#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f722c(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x44);
  iVar1 = FUN_088f6d84(uVar2,0,param_1,param_2,param_3,(int)param_4);
  if (iVar1 == 0) {
    FUN_088f6d84(uVar2,uVar2,param_1,param_2,param_3,(int)param_4);
  }
  return;
}

