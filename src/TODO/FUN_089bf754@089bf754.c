#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089bf754(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_088123fc();
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_08af8270 != 0) {
      FUN_08a2d8a8(DAT_08af8270,puVar1,100);
    }
    *puVar1 = param_1;
  }
  return puVar1;
}

