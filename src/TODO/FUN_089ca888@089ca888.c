#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ca888(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_089c9d1c();
  if (uVar1 < 0x1000) {
    FUN_089c9bc8(uVar1,*(undefined4 *)(param_1 + 0x38));
  }
  else {
    FUN_089c9bc8(uVar1 - 0x1000,DAT_08ac58c8);
  }
  return 0;
}

