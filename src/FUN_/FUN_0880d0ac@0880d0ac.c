#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880d0ac(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
  }
  return uVar1;
}

