#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca2c4(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  uVar1 = *(undefined2 *)(WeirdBuff + 6);
  puVar2 = (undefined2 *)FUN_089c9ed8(param_1,2);
  *puVar2 = uVar1;
  return 0;
}

