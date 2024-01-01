#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08877a54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((0x22 < param_1) && (iVar2 = param_1 + -0x23, param_1 < 0xb3)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x8d < iVar2) {
      iVar2 = 0x8d;
    }
    if ((int)(((((int)(char)(&DAT_08a68306)[iVar2 * 4] & 0xf0U) >> 4 ^ 8) - 8) * 0x1000000) >> 0x18
        != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

