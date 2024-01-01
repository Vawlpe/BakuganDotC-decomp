#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a299e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}

