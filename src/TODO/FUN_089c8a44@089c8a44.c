#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8a44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_089c2b10(*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 0) {
      FUN_089c29cc(*(undefined4 *)(param_1 + 0x14));
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      FUN_089c2b48();
      FUN_089c2bb4(uVar2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0x28) = 1;
  }
  return;
}

