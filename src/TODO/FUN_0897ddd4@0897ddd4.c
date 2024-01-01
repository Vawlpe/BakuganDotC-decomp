#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897ddd4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & 0xff;
  iVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
  if (iVar1 != 2) {
    param_1 = param_1 + param_2 * 4;
    iVar1 = *(int *)(param_1 + 0x12a4);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0x34))
                (0xc3fa0000,iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x30));
      iVar1 = *(int *)(param_1 + 0x12a4);
      iVar2 = *(int *)(iVar1 + 0x14);
      (**(code **)(iVar2 + 0x3c))(iVar1 + *(short *)(iVar2 + 0x38));
    }
  }
  return;
}

