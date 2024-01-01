#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a01168(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_089cbc7c();
  *(undefined **)(param_1 + 0x10) = &DAT_08af5a14;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x2c8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac6230 = uVar2;
  memset_jak(uVar2,0,0x2c8);
  FUN_089bfac4(20000);
  return param_1;
}

