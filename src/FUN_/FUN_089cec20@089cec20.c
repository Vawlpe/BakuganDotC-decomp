#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cec20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = zz_sceDisplayGetAccumulatedHcount();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

