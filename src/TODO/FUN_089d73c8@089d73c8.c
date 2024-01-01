#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d73c8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  }
  return uVar1;
}

