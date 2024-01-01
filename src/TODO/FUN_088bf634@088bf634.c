#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088bf634(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_088bf4cc(param_1,param_2);
  if (*(short *)(iVar1 + 4) == 0) {
    return 1;
  }
  iVar1 = FUN_088f505c();
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

