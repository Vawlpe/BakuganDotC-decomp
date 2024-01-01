#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089be9b4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAT_08ac5210 = param_1;
  if (DAT_08ac5214 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac5214,0,0);
    FUN_089d866c();
    DAT_08ac5214 = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(param_1 << 4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5214 = uVar2;
  return;
}

