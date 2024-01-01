#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d91d4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    if (param_2 == *(undefined4 **)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = uVar1;
    }
    if (param_2 == *(undefined4 **)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = *param_2;
    }
  }
  return uVar1;
}

