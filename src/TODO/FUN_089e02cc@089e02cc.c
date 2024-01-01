#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e02cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_089df190();
  if (iVar1 != -1) {
    iVar1 = FUN_08a15998(*(undefined4 *)(param_1 + 0x130));
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = param_3;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0xc) = param_4;
    return 1;
  }
  return 0;
}

