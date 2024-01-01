#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_08905738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar2 = (undefined4 *)FUN_089d7d74(0x70,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_08905660(puVar2,param_1,param_2,param_3,param_4);
    puVar3 = puVar2;
  }
  *puVar3 = 0x66;
  FUN_089bfbf0(puVar3,100);
  return puVar3;
}

