#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897dd74(int param_1,uint param_2)

{
  int iVar1;
  
  param_2 = param_2 & 0xff;
  iVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
  if ((iVar1 != 2) && (iVar1 = *(int *)(param_1 + param_2 * 4 + 0x12a4), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
  }
  return;
}

