#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089df788(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0xb4) = param_1;
  return uVar1;
}

