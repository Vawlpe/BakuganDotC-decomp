#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08940628(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 < 2) {
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
      return;
    }
  }
  else {
    if (iVar1 < 3) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0x14;
      return;
    }
    if (iVar1 < 4) {
      *(undefined4 *)(param_1 + 0x80) = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x14;
  return;
}

