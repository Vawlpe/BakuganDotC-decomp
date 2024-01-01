#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d23f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_089d76ac(*(undefined4 *)(DAT_08ac5968 + 4));
  if (puVar1 == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar1 = (undefined4 *)FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
  }
  *puVar1 = param_2;
  FUN_089bb728(*param_1);
  FUN_08a318bc(param_1[2],puVar1,0);
  *(undefined *)(param_1 + 3) = 1;
  FUN_089bb790(*param_1);
  return;
}

