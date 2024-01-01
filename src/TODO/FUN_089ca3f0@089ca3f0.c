#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca3f0(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_089c9ed8(param_1,2);
  uVar2 = FUN_089c9da8(param_1);
  *puVar1 = *puVar1 | uVar2;
  return 0;
}

