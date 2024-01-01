#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890a18c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_08ac0e60 + param_4 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = param_1;
    *(undefined4 *)(*(int *)(DAT_08ac0e60 + param_4 * 4) + 100) = param_2;
  }
  return;
}

