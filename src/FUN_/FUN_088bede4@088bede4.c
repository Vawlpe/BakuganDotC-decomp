#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bede4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_089bf6e8(0x19a,100);
  if (iVar1 != 0) {
    FUN_089108d8(iVar1,param_2);
  }
  *(undefined4 *)(param_1 + 0x6a4) = param_2;
  *(undefined4 *)(param_1 + 0x618) = 2;
  FUN_088bedac(param_1,1);
  return;
}

