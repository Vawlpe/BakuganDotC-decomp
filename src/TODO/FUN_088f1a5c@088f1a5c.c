#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1a5c(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined *)(param_1 + 0x269) = 4;
    FUN_088cc704(0);
    FUN_088cc6d4(0);
  }
  else {
    uVar1 = FUN_089bfa40(500);
    FUN_088c2218(uVar1,param_3);
  }
  return;
}

