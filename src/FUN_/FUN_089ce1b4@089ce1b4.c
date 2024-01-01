#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 FUN_089ce1b4(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 0x2e) = param_2;
  return uVar1;
}

