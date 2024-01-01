#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c1cd8(int param_1)

{
  float *pfVar1;
  
  FUN_089f3dd4(*(undefined4 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x6b8));
  pfVar1 = (float *)(*(int *)(param_1 + 0x6b0) + 0x68);
  *pfVar1 = *pfVar1 - 1.0;
  FUN_089f46dc(*(undefined4 *)(param_1 + 0x6b8));
  FUN_089f4a20(*(undefined4 *)(param_1 + 0x6b8));
  FUN_089f43d4(0x3f000000,*(undefined4 *)(param_1 + 0x6b8));
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  return;
}

