#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca8dc(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_089c9d1c();
  uVar1 = FUN_089c9d1c(param_1);
  if (uVar2 < 0x1000) {
    iVar3 = FUN_089c9b48(uVar2,*(undefined4 *)(param_1 + 0x38));
  }
  else {
    iVar3 = FUN_089c9b48(uVar2 - 0x1000,DAT_08ac58c8);
  }
  if (iVar3 == 1) {
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
    return 3;
  }
  return 0;
}

