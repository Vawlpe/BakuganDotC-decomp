#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089696f4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 3) {
    uVar1 = FUN_089bf354(param_1,param_2);
    return uVar1;
  }
  if (param_2 == 3) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
  }
  return uVar1;
}

