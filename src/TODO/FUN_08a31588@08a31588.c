#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a31588(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[4] = 0;
  FUN_08a3201c();
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[4] != 0) {
    iVar1 = FUN_089d76ac();
    *param_1 = iVar1;
    iVar1 = FUN_089d76ac(param_1[4]);
    param_1[1] = iVar1;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_08a32104(iVar3);
      iVar1 = iVar3;
    }
    *param_1 = iVar1;
    iVar1 = param_1[1];
  }
  else {
    FUN_08a32104();
    *param_1 = iVar1;
    iVar1 = param_1[1];
  }
  if (iVar1 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_08a32104();
      iVar1 = iVar3;
    }
    param_1[1] = iVar1;
  }
  else {
    FUN_08a32104();
    param_1[1] = iVar1;
  }
  param_1[2] = 0;
  *(undefined *)(param_1 + 3) = 0;
  return;
}

