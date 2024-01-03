#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fda0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*param_1 == 0) && (iVar1 = DONE_NotZero_DAT_08AC61E8(), iVar1 != 0)) {
    uVar2 = FUN_089fce94();
    iVar1 = FUN_089fd150(uVar2,param_1,param_2,1,1,1);
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      FUN_089fba80(iVar1,2);
      uVar3 = 1;
      *param_1 = 1;
    }
  }
  return uVar3;
}

