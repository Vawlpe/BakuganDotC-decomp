#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d95a4(undefined4 param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088e1948();
  uVar2 = atan2f(*(float *)(iVar1 + 0x28) - param_2[2],*(float *)(iVar1 + 0x20) - *param_2);
  FUN_088d9474(uVar2,param_1);
  return;
}

