#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884e004(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_089c2b10(0);
  iVar3 = 2;
  if (iVar1 != 0) {
    uVar2 = FUN_089c2b48(0);
    FUN_089c3380(param_1,param_3,uVar2);
    iVar3 = 2;
  }
  do {
    iVar1 = FUN_089c59d4();
    if (iVar1 != 0) {
      uVar2 = FUN_089c59f0();
      FUN_089c5c88(param_2,uVar2,iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

