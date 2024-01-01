#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b65c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
                 undefined4 param_5)

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
    FUN_088b653c(iVar2,param_1,param_2);
    iVar3 = iVar2;
  }
  *(undefined *)(iVar3 + 0x75) = param_4;
  *(undefined4 *)(iVar3 + 0x6c) = param_3;
  *(undefined4 *)(iVar3 + 0x18) = param_5;
  return;
}

