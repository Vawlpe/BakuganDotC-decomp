#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089fdc00(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 2) {
    uVar1 = FUN_089fce94();
    FUN_089fd560(uVar1,param_1[1]);
    *param_1 = 3;
  }
  return iVar2 == 2;
}

