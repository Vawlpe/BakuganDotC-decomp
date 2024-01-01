#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089512e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 100) {
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x10) = 0x469c4000;
    *(undefined *)(param_1 + 0x4c) = 1;
  }
  else if (iVar1 == 10) {
    *(undefined4 *)(param_1 + 0x2c) = 100;
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_0890a5a8(param_1);
    if ((iVar1 < 0) || (1 < iVar1)) {
      *(undefined4 *)(param_1 + 0x2c) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
  }
  return;
}

