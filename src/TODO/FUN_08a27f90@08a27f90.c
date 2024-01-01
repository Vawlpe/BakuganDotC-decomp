#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a27f90(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (((param_1 != 4) && (uVar1 = 5, param_1 != 8)) &&
     (uVar1 = (uint)(param_2 == 0), param_1 != 0x10)) {
    uVar1 = 0xffffffff;
    if (param_1 == 0x18) {
      uVar1 = 3;
    }
    else if (param_1 == 0x20) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

