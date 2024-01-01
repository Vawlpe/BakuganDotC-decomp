#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896b518(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      DAT_08ac0e70 = 1;
      FUN_089bf6e8(0x130,100);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else if (iVar1 < 2) {
    iVar1 = FUN_089bf93c(0x130,1);
    if (iVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x2c) = 2;
    return;
  }
  FUN_0896acb8(param_1,*(undefined *)(param_1 + 0x77),1);
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  return;
}

