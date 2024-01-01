#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089df75c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_089dff6c();
  uVar2 = *puVar1;
  *puVar1 = param_1;
  return uVar2;
}

