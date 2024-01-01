#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089762a0)

void FUN_08976218(undefined4 param_1,undefined4 param_2,byte param_3,uint param_4)

{
  uint uVar1;
  
  param_4 = param_4 & 0xff;
  uVar1 = 0;
  if (((param_3 < 5) && (uVar1 = param_4, param_3 != 1)) && (param_3 == 2)) {
    if (param_4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  FUN_089f4a90(0,(float)uVar1,param_2);
  return;
}

