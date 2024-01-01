#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2e90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_089fd84c();
  if (iVar1 != 0) {
    uVar3 = FUN_089fd868();
    uVar2 = FUN_089c2904(param_1);
    uVar3 = FUN_089fda0c(uVar3,uVar2);
  }
  return uVar3;
}

