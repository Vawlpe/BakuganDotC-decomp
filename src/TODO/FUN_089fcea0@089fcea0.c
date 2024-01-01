#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089fcea0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined *)(param_1 + 4) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x38,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089bb5dc(iVar2,"CODataMng",2);
    iVar3 = iVar2;
  }
  param_1[2] = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x30,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d90ac(iVar2);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x30,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d90ac(iVar2);
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
  param_1[3] = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d74cc(iVar2,0x60,0x40,1);
    iVar3 = iVar2;
  }
  param_1[3] = iVar3;
  return param_1;
}

