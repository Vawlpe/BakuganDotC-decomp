#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b29c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088b28d0(iVar2);
    iVar3 = iVar2;
  }
  FUN_088b292c(iVar3,param_1,param_2,param_3,param_4,param_5);
  if (DAT_08abd620 == 0) {
    FUN_088b210c();
  }
  FUN_089d8984(iVar3,DAT_08abd620);
  return iVar3;
}

