#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cad00(int param_1)

{
  undefined2 uVar1;
  
  FUN_089c9f3c();
  uVar1 = FUN_089c9d1c(param_1);
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
  return 3;
}

