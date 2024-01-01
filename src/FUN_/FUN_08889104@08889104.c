#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08889104(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_088890a8(param_1,param_2,param_1,param_4,0);
  iVar2 = FUN_0888906c(param_1);
  if ((iVar2 != 0) && (iVar1 != 0)) {
    iVar3 = (int)*(short *)(iVar1 + 6);
  }
  return iVar3;
}

