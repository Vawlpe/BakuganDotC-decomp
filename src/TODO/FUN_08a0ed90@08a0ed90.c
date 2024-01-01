#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a0ed90(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_20;
  uint local_1c;
  
  uVar2 = (int)param_1 >> 0x1f;
  local_2c = -uVar2;
  local_30 = 3;
  if (param_1 == 0) {
    local_30 = 2;
  }
  else {
    if (local_2c != 0) {
      if (param_1 == 0x80000000) {
        return 0;
      }
      param_1 = -param_1;
      uVar2 = (int)param_1 >> 0x1f;
    }
    local_28 = 0x3c;
    local_20 = param_1;
    for (local_1c = uVar2; local_1c < 0x10000000; local_1c = local_1c << 1 | uVar2) {
      uVar2 = local_20 >> 0x1f;
      local_20 = local_20 << 1;
      local_28 = local_28 + -1;
    }
  }
  uVar1 = FUN_08a0f12c(&local_30);
  return uVar1;
}

