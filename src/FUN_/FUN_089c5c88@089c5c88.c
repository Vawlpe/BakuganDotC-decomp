#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5c88(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((0 < param_3) && (param_3 < 5)) {
    FUN_089bb728(*(undefined4 *)(param_2 + 0x8bd4));
    uVar1 = *(undefined4 *)(param_2 + 0x8bd4);
    *(undefined4 *)(param_2 + param_3 * 8 + 0x1ac) = param_1;
    FUN_089bb790(uVar1);
  }
  return;
}

