#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b1228(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088b0d30();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x328) = 0;
    uVar2 = 2;
    if (*(int *)(param_1 + 0x208) == 7) {
      uVar2 = 3;
    }
    *(undefined4 *)(param_1 + 0x350) = uVar2;
  }
  return;
}

