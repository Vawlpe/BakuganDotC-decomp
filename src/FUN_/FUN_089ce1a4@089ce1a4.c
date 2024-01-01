#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 FUN_089ce1a4(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x2c);
  *(undefined2 *)(param_1 + 0x2c) = param_2;
  return uVar1;
}

