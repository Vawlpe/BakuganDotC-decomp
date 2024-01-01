#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089759d4(int param_1)

{
  byte bVar1;
  
  FUN_089754b4();
  if (*(char *)(param_1 + 0x503) == 0) {
    bVar1 = *(byte *)(param_1 + *(char *)(param_1 + 0x503) + 0x500);
    if (bVar1 < 5) {
      if (bVar1 == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
        return;
      }
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x501) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
        return;
      }
      if (bVar1 == 3) {
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
        return;
      }
      if (bVar1 != 4) {
        *(undefined *)(param_1 + 0x501) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
        return;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0xd;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0xd;
  }
  return;
}

