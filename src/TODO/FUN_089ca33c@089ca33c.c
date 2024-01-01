#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca33c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(WeirdBuff + 0x30);
  puVar1 = (undefined4 *)FUN_089c9ed8(param_1,2);
  *puVar1 = uVar2;
  return 0;
}

