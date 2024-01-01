#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d0608(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if (((param_2 != 0) && (0 < param_3)) && (*(int *)(param_1 + 0xf4) + param_3 < 0x800)) {
    memcpy_jak(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4),param_2,param_3);
    uVar1 = 1;
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + param_3;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return uVar1;
}

