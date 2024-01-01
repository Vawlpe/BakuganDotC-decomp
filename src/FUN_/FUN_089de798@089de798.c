#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de798(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x200f,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    FUN_089da8d4(uVar2,param_1 + 0x124,0x2000);
  }
  else {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(param_2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x11c) = uVar2;
    *(int *)(param_1 + 0x120) = param_2;
    FUN_089da8d4(uVar2,param_1 + 0x124);
  }
  return;
}

