#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c4ef8(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*param_1);
  if (param_2 == '\0') {
    if (param_1[0x11] == param_1[0x12]) {
      uVar1 = 1;
    }
  }
  else if (param_1[0x11] == 0) {
    uVar1 = 1;
  }
  FUN_089bb790(*param_1);
  return uVar1;
}

