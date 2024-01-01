#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb910(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = zz_sceKernelCreateSema(*(undefined4 *)(param_1 + 0x10),0,1,1,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

