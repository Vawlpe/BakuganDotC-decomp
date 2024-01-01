#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cabe8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_089c9d1c();
  if (uVar1 < 0x1000) {
    iVar2 = FUN_089c9b48(uVar1,*(undefined4 *)(param_1 + 0x38));
  }
  else {
    iVar2 = FUN_089c9b48(uVar1 - 0x1000,DAT_08ac58c8);
  }
  uVar3 = 2;
  if (iVar2 == 1) {
    uVar3 = 0;
  }
  return uVar3;
}

