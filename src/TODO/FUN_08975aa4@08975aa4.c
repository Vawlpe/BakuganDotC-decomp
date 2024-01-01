#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08975b14)

void FUN_08975aa4(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 < 5) {
    if (param_3 == 1) {
      iVar1 = 1;
    }
    else if (param_3 == 2) {
      iVar1 = 3;
    }
    else if (param_3 == 3) {
      iVar1 = 4;
    }
    else if (param_3 == 4) {
      iVar1 = 2;
    }
    else {
      iVar1 = 0;
    }
  }
  FUN_089f4a90(0,(float)iVar1,param_2);
  return;
}

