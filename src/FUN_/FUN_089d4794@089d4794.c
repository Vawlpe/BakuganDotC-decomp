#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089d4794(undefined4 param_1,undefined4 param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_089d217c();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_089d21a4();
    iVar2 = FUN_089d2600(uVar3,param_2);
    uVar1 = 0;
    if (iVar2 == 0) {
      uVar3 = FUN_089d21a4();
      FUN_089d23f0(uVar3,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}

