#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089d21b4(int *param_1)

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
    FUN_089bb5dc(iVar2,"CONetError",1);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08a31588(iVar2,0);
    iVar3 = iVar2;
  }
  param_1[2] = iVar3;
  *(undefined *)(param_1 + 3) = 0;
  return param_1;
}

