#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f0f64(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x284) + (uint)*(byte *)(param_1 + 0x2d3) * 0x4c;
  *(undefined2 *)(iVar1 + 0x38) = *(undefined2 *)(iVar1 + 0x44);
  FUN_088f031c(param_1,param_2,1,*(undefined *)(param_1 + 0x2d3));
  return;
}

