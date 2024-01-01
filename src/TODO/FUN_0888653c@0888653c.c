#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888653c(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_089d9674();
  iVar2 = FUN_089d9e0c(uVar1,param_2);
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) + param_1;
    return 1;
  }
  return 0;
}

