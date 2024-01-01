#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089d2a60(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"CONetInvate",2);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((int)param_1 + 5) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}

