#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7b24(int param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined *)(param_1 + 0xad) = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_2);
  uVar2 = FUN_089d7d74(0x300,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  return;
}

