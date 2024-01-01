#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910be0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_089bf93c(0xbba,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_08ac58c4 + 0xc);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0x41200000;
        *(undefined4 *)(param_1 + 0x28) = 5;
      }
    }
    else if (iVar1 < 2) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}

