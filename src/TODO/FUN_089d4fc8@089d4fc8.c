#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d4fc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar1 = FUN_089d2e60();
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_089d2e60();
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

