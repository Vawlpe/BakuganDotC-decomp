#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08905508(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((0x16 < param_1) && (uVar2 = param_1 - 0x17, param_1 < 0x7d)) {
    if ((int)uVar2 < 0) {
      uVar2 = -(-uVar2 & 3);
    }
    else {
      uVar2 = uVar2 & 3;
    }
    if (uVar2 == 1) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

