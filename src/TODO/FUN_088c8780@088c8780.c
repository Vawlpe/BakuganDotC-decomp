#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_088c8780(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088c6ce4(iVar2 + 0x70);
    iVar3 = iVar2;
  }
  *param_1 = iVar3;
  return param_1;
}

